#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_CK_Calculator.h"

class CK_Calculator : public QMainWindow
{
    Q_OBJECT

public:
    CK_Calculator(QWidget *parent = nullptr);
    ~CK_Calculator();

private:
    Ui::CK_CalculatorClass ui;
};
