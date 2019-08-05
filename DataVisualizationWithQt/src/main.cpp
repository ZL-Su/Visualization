#include <QtWidgets/QApplication>
#include <QtWidgets/QSplashScreen>
#include <gui/mainwnd.h>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	auto splash_screen = new QSplashScreen;
	splash_screen->setPixmap({ "E:\\Dgelo\\Pictures\\MyIcons\\start.png" });
	splash_screen->show();

	auto w = std::make_shared<MainWnd>();
	w->show();

	splash_screen->finish(w.get());
	delete splash_screen;

	return QApplication::exec();
}
