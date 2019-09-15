#pragma once

#include <QtWidgets/QMainWindow>
#include <ui_mainwnd.h>

class AboutDialog;
namespace vis {
	class ChartView;
}
/*
 * \brief: main window class
 */
class MainWnd : public QMainWindow
{
	Q_OBJECT

public:
	MainWnd(QWidget *parent = Q_NULLPTR);

	void open();
	void learn();
	void show_start();
	void draw_scatter();

private:
	Ui::MainWndClass ui;
	AboutDialog* m_about = nullptr;
	QWidget* m_startwidget;
	vis::ChartView* m_chartview = nullptr;
};