#include <QtWidgets/QApplication>
#include <gui/mainwnd.h>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	auto w = std::make_shared<MainWnd>();
	w->setCentralWidget(w->create_scatter_view());
	w->show();

	return QApplication::exec();
}
