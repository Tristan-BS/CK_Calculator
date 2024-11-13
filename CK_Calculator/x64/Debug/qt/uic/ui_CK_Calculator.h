/********************************************************************************
** Form generated from reading UI file 'CK_Calculator.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CK_CALCULATOR_H
#define UI_CK_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CK_CalculatorClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *CK_CalculatorClass)
    {
        if (CK_CalculatorClass->objectName().isEmpty())
            CK_CalculatorClass->setObjectName("CK_CalculatorClass");
        CK_CalculatorClass->resize(600, 400);
        menuBar = new QMenuBar(CK_CalculatorClass);
        menuBar->setObjectName("menuBar");
        CK_CalculatorClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(CK_CalculatorClass);
        mainToolBar->setObjectName("mainToolBar");
        CK_CalculatorClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(CK_CalculatorClass);
        centralWidget->setObjectName("centralWidget");
        CK_CalculatorClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(CK_CalculatorClass);
        statusBar->setObjectName("statusBar");
        CK_CalculatorClass->setStatusBar(statusBar);

        retranslateUi(CK_CalculatorClass);

        QMetaObject::connectSlotsByName(CK_CalculatorClass);
    } // setupUi

    void retranslateUi(QMainWindow *CK_CalculatorClass)
    {
        CK_CalculatorClass->setWindowTitle(QCoreApplication::translate("CK_CalculatorClass", "CK_Calculator", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CK_CalculatorClass: public Ui_CK_CalculatorClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CK_CALCULATOR_H
