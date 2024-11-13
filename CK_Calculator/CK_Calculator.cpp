#include "CK_Calculator.h"
#include "CalculatorFunction.h"

#include <iostream>
#include <string>

#include <sstream>
#include <cmath>
#include <math.h>
#include <stdexcept>

#include <QKeyEvent>
#include <QMessageBox>
#include <QRegularExpressionValidator>

using namespace std;

#define PI 3.14159265358979323846


CK_Calculator::CK_Calculator(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

	this->setWindowTitle("CK Calculator");

	this->setFixedSize(300, 350);

	// Prevent input letters ( only accept 0-9, +, -, *, /, , )
	QRegularExpressionValidator* validator = new QRegularExpressionValidator(QRegularExpression("[0-9+\\-*/,()]*"));
	ui.LE_Input->setValidator(validator);
}

CK_Calculator::~CK_Calculator() {
}

void CK_Calculator::on_B_Equals_clicked() {
	try {
		string input = ui.LE_Input->text().toStdString();

		// Ersetzen Sie das Komma durch einen Punkt
		replace(input.begin(), input.end(), ',', '.');

		// Check if 2 operators are next to each other
		for (size_t i = 0; i < input.size() - 1; i++) {
			if (input[i] == '+' || input[i] == '-' || input[i] == '*' || input[i] == '/') {
				if (input[i + 1] == '+' || input[i + 1] == '-' || input[i + 1] == '*' || input[i + 1] == '/') {
					QMessageBox::warning(this, "Invalid Operation", "Two operators are next to each other.");
					ui.LE_Input->clear();
					return;
				}
			}
		}

		double result = Calculate(input);
		ui.LE_Input->setText(QString::number(result, 'f', 2)); // 'f' für festen Dezimalformat, 2 für zwei Dezimalstellen
	}
	catch (const exception& e) {
		ui.LE_Input->clear();
		cout << e.what() << endl;
	}
}




void CK_Calculator::on_B_ClearAll_clicked() {
	ui.LE_Input->clear();
}

void CK_Calculator::on_B_Undo_clicked() {
	QString text = ui.LE_Input->text();
	text.chop(1);
	ui.LE_Input->setText(text);
}

void CK_Calculator::keyPressEvent(QKeyEvent* e) {
	int key = e->key();

	if (key == Qt::Key_Enter || key == Qt::Key_Return) {
		on_B_Equals_clicked();
	}
	else if (key == Qt::Key_Backspace) {
		on_B_Undo_clicked();
	}
	else if (key == Qt::Key_C) {
		on_B_ClearAll_clicked();
	}
	else {
		QMainWindow::keyPressEvent(e);
	}
}


void CK_Calculator::on_B_Zero_clicked() {
	ui.LE_Input->insert("0");
}

void CK_Calculator::on_B_One_clicked() {
	ui.LE_Input->insert("1");
}

void CK_Calculator::on_B_Two_clicked() {
	ui.LE_Input->insert("2");
}

void CK_Calculator::on_B_Three_clicked() {
	ui.LE_Input->insert("3");
}

void CK_Calculator::on_B_Four_clicked() {
	ui.LE_Input->insert("4");
}

void CK_Calculator::on_B_Five_clicked() {
	ui.LE_Input->insert("5");
}

void CK_Calculator::on_B_Six_clicked() {
	ui.LE_Input->insert("6");
}

void CK_Calculator::on_B_Seven_clicked() {
	ui.LE_Input->insert("7");
}

void CK_Calculator::on_B_Eight_clicked() {
	ui.LE_Input->insert("8");
}

void CK_Calculator::on_B_Nine_clicked() {
	ui.LE_Input->insert("9");
}

void CK_Calculator::on_B_Comma_clicked() {
	ui.LE_Input->insert(".");
}

void CK_Calculator::on_B_Add_clicked() {
	ui.LE_Input->insert("+");
}

void CK_Calculator::on_B_Minus_clicked() {
	ui.LE_Input->insert("-");
}

void CK_Calculator::on_B_Multiply_clicked() {
	ui.LE_Input->insert("*");
}

void CK_Calculator::on_B_Divide_clicked() {
	ui.LE_Input->insert("/");
}