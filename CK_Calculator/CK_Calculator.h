#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_CK_Calculator.h"

#include <QApplication>
#include <QMainWindow>
#include <QPushButton>
#include <QLineEdit>
#include <QString>

using namespace std;

class CK_Calculator : public QMainWindow
{
    Q_OBJECT

public:
    CK_Calculator(QWidget *parent = nullptr);
    ~CK_Calculator();

private:
    Ui::CK_CalculatorClass ui;

protected:
    void keyPressEvent(QKeyEvent* e);

private slots:
	void on_B_Zero_clicked();
	void on_B_One_clicked();
	void on_B_Two_clicked();
	void on_B_Three_clicked();
	void on_B_Four_clicked();
	void on_B_Five_clicked();
	void on_B_Six_clicked();
	void on_B_Seven_clicked();
	void on_B_Eight_clicked();
	void on_B_Nine_clicked();
	void on_B_Comma_clicked();
	void on_B_Add_clicked();
	void on_B_Minus_clicked();
	void on_B_Multiply_clicked();
	void on_B_Divide_clicked();
	void on_B_Equals_clicked();
	void on_B_ClearAll_clicked();
	void on_B_Undo_clicked();
	void on_B_DHundred_clicked();
};
