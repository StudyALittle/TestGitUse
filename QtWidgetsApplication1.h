#pragma once

#include <QtWidgets/QMainWindow>
#include <map>
#include "ui_QtWidgetsApplication1.h"

class QtWidgetsApplication1 : public QMainWindow
{
    Q_OBJECT
    
public:
    QtWidgetsApplication1(QWidget *parent = Q_NULLPTR);
    int a;
private:
    Ui::QtWidgetsApplication1Class ui;
};
