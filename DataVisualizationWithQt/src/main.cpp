#include <gui/mainwnd.h>
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	MainWnd w;
	w.show();
	return a.exec();
}
