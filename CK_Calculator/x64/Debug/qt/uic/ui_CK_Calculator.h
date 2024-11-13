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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CK_CalculatorClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QLineEdit *LE_Input;
    QGridLayout *gridLayout;
    QPushButton *B_Nine;
    QPushButton *B_Three;
    QPushButton *B_Five;
    QPushButton *B_Two;
    QPushButton *B_Undo;
    QPushButton *B_Four;
    QPushButton *B_Six;
    QPushButton *B_One;
    QPushButton *B_Zero;
    QPushButton *B_Seven;
    QPushButton *B_Comma;
    QPushButton *B_Eight;
    QPushButton *B_ClearAll;
    QPushButton *B_Divide;
    QPushButton *B_Multiply;
    QPushButton *B_Minus;
    QPushButton *B_Add;
    QPushButton *B_Equals;

    void setupUi(QMainWindow *CK_CalculatorClass)
    {
        if (CK_CalculatorClass->objectName().isEmpty())
            CK_CalculatorClass->setObjectName("CK_CalculatorClass");
        CK_CalculatorClass->resize(348, 408);
        centralWidget = new QWidget(CK_CalculatorClass);
        centralWidget->setObjectName("centralWidget");
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName("gridLayout_2");
        LE_Input = new QLineEdit(centralWidget);
        LE_Input->setObjectName("LE_Input");
        LE_Input->setMinimumSize(QSize(0, 50));

        gridLayout_2->addWidget(LE_Input, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName("gridLayout");
        B_Nine = new QPushButton(centralWidget);
        B_Nine->setObjectName("B_Nine");

        gridLayout->addWidget(B_Nine, 1, 2, 1, 1);

        B_Three = new QPushButton(centralWidget);
        B_Three->setObjectName("B_Three");

        gridLayout->addWidget(B_Three, 3, 2, 1, 1);

        B_Five = new QPushButton(centralWidget);
        B_Five->setObjectName("B_Five");

        gridLayout->addWidget(B_Five, 2, 1, 1, 1);

        B_Two = new QPushButton(centralWidget);
        B_Two->setObjectName("B_Two");

        gridLayout->addWidget(B_Two, 3, 1, 1, 1);

        B_Undo = new QPushButton(centralWidget);
        B_Undo->setObjectName("B_Undo");

        gridLayout->addWidget(B_Undo, 0, 1, 1, 1);

        B_Four = new QPushButton(centralWidget);
        B_Four->setObjectName("B_Four");

        gridLayout->addWidget(B_Four, 2, 0, 1, 1);

        B_Six = new QPushButton(centralWidget);
        B_Six->setObjectName("B_Six");

        gridLayout->addWidget(B_Six, 2, 2, 1, 1);

        B_One = new QPushButton(centralWidget);
        B_One->setObjectName("B_One");

        gridLayout->addWidget(B_One, 3, 0, 1, 1);

        B_Zero = new QPushButton(centralWidget);
        B_Zero->setObjectName("B_Zero");

        gridLayout->addWidget(B_Zero, 4, 0, 1, 1);

        B_Seven = new QPushButton(centralWidget);
        B_Seven->setObjectName("B_Seven");

        gridLayout->addWidget(B_Seven, 1, 0, 1, 1);

        B_Comma = new QPushButton(centralWidget);
        B_Comma->setObjectName("B_Comma");

        gridLayout->addWidget(B_Comma, 4, 2, 1, 1);

        B_Eight = new QPushButton(centralWidget);
        B_Eight->setObjectName("B_Eight");

        gridLayout->addWidget(B_Eight, 1, 1, 1, 1);

        B_ClearAll = new QPushButton(centralWidget);
        B_ClearAll->setObjectName("B_ClearAll");

        gridLayout->addWidget(B_ClearAll, 0, 0, 1, 1);

        B_Divide = new QPushButton(centralWidget);
        B_Divide->setObjectName("B_Divide");

        gridLayout->addWidget(B_Divide, 0, 3, 1, 1);

        B_Multiply = new QPushButton(centralWidget);
        B_Multiply->setObjectName("B_Multiply");

        gridLayout->addWidget(B_Multiply, 1, 3, 1, 1);

        B_Minus = new QPushButton(centralWidget);
        B_Minus->setObjectName("B_Minus");

        gridLayout->addWidget(B_Minus, 2, 3, 1, 1);

        B_Add = new QPushButton(centralWidget);
        B_Add->setObjectName("B_Add");

        gridLayout->addWidget(B_Add, 3, 3, 1, 1);

        B_Equals = new QPushButton(centralWidget);
        B_Equals->setObjectName("B_Equals");

        gridLayout->addWidget(B_Equals, 4, 3, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 0, 1, 1);

        CK_CalculatorClass->setCentralWidget(centralWidget);

        retranslateUi(CK_CalculatorClass);

        QMetaObject::connectSlotsByName(CK_CalculatorClass);
    } // setupUi

    void retranslateUi(QMainWindow *CK_CalculatorClass)
    {
        CK_CalculatorClass->setWindowTitle(QCoreApplication::translate("CK_CalculatorClass", "CK_Calculator", nullptr));
        B_Nine->setText(QCoreApplication::translate("CK_CalculatorClass", "9", nullptr));
        B_Three->setText(QCoreApplication::translate("CK_CalculatorClass", "3", nullptr));
        B_Five->setText(QCoreApplication::translate("CK_CalculatorClass", "5", nullptr));
        B_Two->setText(QCoreApplication::translate("CK_CalculatorClass", "2", nullptr));
        B_Undo->setText(QCoreApplication::translate("CK_CalculatorClass", "Undo", nullptr));
        B_Four->setText(QCoreApplication::translate("CK_CalculatorClass", "4", nullptr));
        B_Six->setText(QCoreApplication::translate("CK_CalculatorClass", "6", nullptr));
        B_One->setText(QCoreApplication::translate("CK_CalculatorClass", "1", nullptr));
        B_Zero->setText(QCoreApplication::translate("CK_CalculatorClass", "0", nullptr));
        B_Seven->setText(QCoreApplication::translate("CK_CalculatorClass", "7", nullptr));
        B_Comma->setText(QCoreApplication::translate("CK_CalculatorClass", ",", nullptr));
        B_Eight->setText(QCoreApplication::translate("CK_CalculatorClass", "8", nullptr));
        B_ClearAll->setText(QCoreApplication::translate("CK_CalculatorClass", "CA", nullptr));
        B_Divide->setText(QCoreApplication::translate("CK_CalculatorClass", "\303\267", nullptr));
        B_Multiply->setText(QCoreApplication::translate("CK_CalculatorClass", "\303\227", nullptr));
        B_Minus->setText(QCoreApplication::translate("CK_CalculatorClass", "-", nullptr));
        B_Add->setText(QCoreApplication::translate("CK_CalculatorClass", "+", nullptr));
        B_Equals->setText(QCoreApplication::translate("CK_CalculatorClass", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CK_CalculatorClass: public Ui_CK_CalculatorClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CK_CALCULATOR_H
