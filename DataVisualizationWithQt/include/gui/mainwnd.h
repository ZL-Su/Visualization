#pragma once

#include <QtWidgets/QMainWindow>
#include <ui_mainwnd.h>

class MainWnd : public QMainWindow
{
	Q_OBJECT

public:
	MainWnd(QWidget *parent = Q_NULLPTR);

private:
	Ui::MainWndClass ui;
};
