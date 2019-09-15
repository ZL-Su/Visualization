#include <QFileDialog>
#include <QListWidget>
#include <QMessageBox>
#include <QDesktopServices>
#include <QImage>
#include <gui/mainwnd.h>
#include <gui/aboutdialog.h>
#include <gui/scatter_chart.hpp>
#include <utils/configs.hpp>
#include <utils/typedef.hpp>

#define MAKE_ACTION_CONNECTION(ACTION, EXP) \
connect(ACTION, &QAction::triggered, this, [&] {EXP;});
#define MAKE_BUTTON_CONNECTION(ACTION, EXP) \
connect(ACTION, &QPushButton::pressed, this, [&] {EXP;});

MainWnd::MainWnd(QWidget *parent)
	: QMainWindow(parent),
	m_about(new AboutDialog())
{
	ui.setupUi(this);
	
	MAKE_ACTION_CONNECTION(ui.actionOpen,     open())
	MAKE_BUTTON_CONNECTION(ui.pbtnStartOpen,  open())
	MAKE_BUTTON_CONNECTION(ui.pbtnStartLearn, learn())
	MAKE_ACTION_CONNECTION(ui.actionExit,     close())
	MAKE_ACTION_CONNECTION(ui.actionAbout,    m_about->show())
	MAKE_ACTION_CONNECTION(ui.actionScatter,  draw_scatter())
}

void MainWnd::open()
{
#if VIS_OPEN_TYPE==VIS_OPEN_FOLDER
	// \create folder dialog to select a directory
	decltype(auto) dir = QFileDialog::getExistingDirectory(this, 
		tr("Open Directory"),
		"/home",
		QFileDialog::ShowDirsOnly|QFileDialog::DontResolveSymlinks);
	auto item = new QListWidgetItem;
	item->setText(dir);
	ui.lwdgRecentfiles->insertItem(0, item);
#elif VIS_OPEN_TYPE==VIS_OPEN_FILE
	// \create file dialog to select a file
	decltype(auto) fname = QFileDialog::getOpenFileName(this,
		tr("Open File"),
		"/home",
		tr("Images (*.bmp *.tif *.png *.xpm *.jpg)"));
	auto item = new QListWidgetItem;
	item->setText(fname);
	ui.lwdgRecentfiles->insertItem(0, fname);
	QImage image(fname);
	const auto depth = image.depth();
	const dplab::Size size = image.size();
	auto data = image.bits();
#ifdef DPLAB_IMPROC_KERNEL == DPLAB_USE_IPP
	Ipp64f mean, stddev;
	auto sts = ippiMean_StdDev_8u_C1R(data, size.stride(), size, &mean, &stddev);
	sts = ippiFilterBilateral_8u_C1R(data, size.stride(), data, size.stride(), size, IppiBorderType::ippBorderConst, 0, nullptr, nullptr);
	if (sts != ippStsNoErr) {
		QMessageBox::warning(this, tr("DPLab:"), tr("[IPP] error in bilateral filtering."));
	}
#endif
#ifdef DPLAB_MATH_KERNEL==DPLAB_USE_MKL
	sts = fftw_init_threads();
	fftw_plan_with_nthreads(omp_get_max_threads()<<1);

	auto[N0, N1] = size;

	auto _Data = (fftw_complex*)fftw_malloc(sizeof(fftw_complex) * N0 * N1);

	/* create plan for forward DFT */
	auto _Plan = fftw_plan_dft_2d(N0, N1, _Data, _Data, FFTW_FORWARD, FFTW_ESTIMATE);
	dplab::primitive_type_t<const fftw_complex*> a;
	/* initialize data to some function my_function(x,y) */
	constexpr auto max_val = dplab::primitive_type_t<fftw_complex>(std::numeric_limits<int>::max());
	double pdata = 0;
	for (auto i = 0; i < N0; ++i) {
		for (auto j = 0; j < N1; ++j) {
			_Data[i * N1 + j][0] = std::rand()/max_val;
			_Data[i * N1 + j][1] = 0;
			pdata += pow(_Data[i * N1 + j][0], 2) + pow(_Data[i * N1 + j][1], 2);
		}
	}
	printf("power of original data is %f\n", pdata);

	/* compute transforms, in-place, as many times as desired */
	fftw_execute(_Plan);

	double normalization = sqrt((double)N0 * N1);
	double ptransform = 0;
	/*normalize data and calculate power of transform */
	for (auto i = 0; i < N0; ++i) {
		for (auto j = 0; j < N1; ++j) {
			_Data[i * N1 + j][0] /= normalization;
			_Data[i * N1 + j][1] /= normalization;
			ptransform += pow(_Data[i * N1 + j][0], 2) + pow(_Data[i * N1 + j][1], 2);
		}
	}

	printf("power of transform is %f\n", pdata);

	fftw_destroy_plan(_Plan);
	fftw_free(_Data);
#endif
#elif VIS_OPEN_TYPE==VIS_OPEN_DEFAULT
	// \verbose file dialog creation
	QFileDialog dialog(this);
	dialog.setFileMode(QFileDialog::AnyFile);
	dialog.setViewMode(QFileDialog::Detail);

	if (QStringList fnames; dialog.exec()) {
		fnames = dialog.selectedFiles();
		size_t row = 0;
		for (const auto fname : fnames) {
			auto item = new QListWidgetItem;
			item->setText(fname);
			ui.lwdgRecentfiles->insertItem(row++, item);
		}
	}
#else
	
#endif
}

void MainWnd::learn()
{
	QDesktopServices::openUrl({ "https://github.com/ZL-Su/Visualization" });
}

void MainWnd::show_start()
{
}

void MainWnd::draw_scatter() {
	m_chartview = new vis::ChartView();
	this->setCentralWidget(m_chartview);
	m_chartview->draw();
}

#undef MAKE_ACTION_CONNECTION