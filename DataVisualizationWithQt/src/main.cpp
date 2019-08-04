#include <QtWidgets/QApplication>
#include <gui/mainwnd.h>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	auto w = std::make_shared<MainWnd>();

	auto chart_view = w->create_scatter_view();
	w->setCentralWidget(chart_view);
	w->show();

	return QApplication::exec();
}
