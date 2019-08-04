#include <gui/mainwnd.h>
#include <gui/aboutdialog.h>
#include <gui/scatter_chart.hpp>

#define MAKE_ACTION_CONNECTION(ACTION, EXP) \
connect(ACTION, &QAction::triggered, this, [&] {EXP;});

MainWnd::MainWnd(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	m_about = new AboutDialog;

	MAKE_ACTION_CONNECTION(ui.actionExit, close())
	MAKE_ACTION_CONNECTION(ui.actionAbout, m_about->show())
	MAKE_ACTION_CONNECTION(ui.actionScatter, m_chartview->draw())
}

QWidget* MainWnd::create_scatter_view() {
	m_chartview = new vis::ChartView();
	return m_chartview;
}