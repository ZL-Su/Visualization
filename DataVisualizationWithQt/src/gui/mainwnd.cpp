#include <gui/mainwnd.h>
#include <gui/aboutdialog.h>
#include <gui/scatter_chart.hpp>

#define MAKE_ACTION_CONNECTION(ACTION, EXP) \
connect(ACTION, &QAction::triggered, this, [&] {EXP;});

MainWnd::MainWnd(QWidget *parent)
	: QMainWindow(parent),
	m_about(new AboutDialog())
{
	ui.setupUi(this);

	MAKE_ACTION_CONNECTION(ui.actionOpen, back_to_home())
	MAKE_ACTION_CONNECTION(ui.actionExit, close())
	MAKE_ACTION_CONNECTION(ui.actionAbout, m_about->show())
	MAKE_ACTION_CONNECTION(ui.actionScatter, draw_scatter_fig())
}

void MainWnd::back_to_home() {
}

void MainWnd::draw_scatter_fig() {
	m_chartview = new vis::ChartView();
	this->setCentralWidget(m_chartview);
	m_chartview->draw();
}

#undef MAKE_ACTION_CONNECTION