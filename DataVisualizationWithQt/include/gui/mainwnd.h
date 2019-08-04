#pragma once

#include <QtWidgets/QMainWindow>
#include <ui_mainwnd.h>

class AboutDialog;
namespace vis {
	class ChartView;
}

class MainWnd : public QMainWindow
{
	Q_OBJECT

public:
	MainWnd(QWidget *parent = Q_NULLPTR);

	QWidget* create_scatter_view();

private:
	Ui::MainWndClass ui;
	AboutDialog* m_about;

	vis::ChartView* m_chartview;
};
