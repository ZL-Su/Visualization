#pragma once

#include <QtWidgets/QMainWindow>
#include <ui_mainwnd.h>
#include <gui/scatter_chart.hpp>

class AboutDialog;

class MainWnd : public QMainWindow
{
	Q_OBJECT

public:
	MainWnd(QWidget *parent = Q_NULLPTR);

	vis::ChartView* create_scatter_view();

private:
	Ui::MainWndClass ui;
	AboutDialog* m_about;

	vis::ChartView* m_scatfig;
};
