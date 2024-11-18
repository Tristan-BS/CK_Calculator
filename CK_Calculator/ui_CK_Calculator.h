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
#include <QtWidgets/QGroupBox>
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
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QPushButton *B_Nine;
    QPushButton *B_Three;
    QPushButton *B_Five;
    QPushButton *B_Two;
    QPushButton *B_Undo;
    QPushButton *B_Four;
    QPushButton *B_Six;
    QPushButton *B_One;
    QPushButton *B_Seven;
    QPushButton *B_Comma;
    QPushButton *B_Eight;
    QPushButton *B_ClearAll;
    QPushButton *B_Divide;
    QPushButton *B_Multiply;
    QPushButton *B_Minus;
    QPushButton *B_Add;
    QPushButton *B_Equals;
    QPushButton *B_Zero;
    QPushButton *B_DHundred;

    void setupUi(QMainWindow *CK_CalculatorClass)
    {
        if (CK_CalculatorClass->objectName().isEmpty())
            CK_CalculatorClass->setObjectName("CK_CalculatorClass");
        CK_CalculatorClass->resize(348, 408);
        CK_CalculatorClass->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color: black;\n"
"border-color: black"));
        centralWidget = new QWidget(CK_CalculatorClass);
        centralWidget->setObjectName("centralWidget");
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName("gridLayout_2");
        LE_Input = new QLineEdit(centralWidget);
        LE_Input->setObjectName("LE_Input");
        LE_Input->setMinimumSize(QSize(0, 50));
        LE_Input->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #f0f0f0;\n"
"    border: 2px solid #333;\n"
"    border-radius: 10px;\n"
"    padding: 10px;\n"
"    font-size: 18px;\n"
"    color: #333;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 2px solid black;\n"
"    background-color: #ffffff;\n"
"}\n"
"\n"
""));

        gridLayout_2->addWidget(LE_Input, 0, 0, 1, 1);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName("groupBox");
        groupBox->setStyleSheet(QString::fromUtf8("border: 2px solid #333;\n"
"border-radius: 10px;\n"
"\n"
"QPushButton::hover {\n"
"    background-color: white;\n"
"    color: black;\n"
"    border: 2px solid #333;\n"
"    line-height: 1.5;\n"
"}\n"
"\n"
"\n"
""));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        B_Nine = new QPushButton(groupBox);
        B_Nine->setObjectName("B_Nine");
        B_Nine->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: black;\n"
"    border: none;\n"
"    color: white;\n"
"    padding: 8px 16px;\n"
"    text-align: center;\n"
"    text-decoration: none;\n"
"    display: inline-block;\n"
"    font-size: 18px;\n"
"    font-weight: bold;\n"
"    margin: 4px 2px;\n"
"    transition-duration: 0.4s;\n"
"    cursor: pointer;\n"
"    border-radius: 12px;\n"
"    line-height: 1.5;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: white;\n"
"    color: black;\n"
"    border: 2px solid black;\n"
"    line-height: 1.5;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #333;\n"
"    border: 2px solid #333;\n"
"    line-height: 1.5;\n"
"}\n"
"\n"
""));

        gridLayout->addWidget(B_Nine, 1, 2, 1, 1);

        B_Three = new QPushButton(groupBox);
        B_Three->setObjectName("B_Three");
        B_Three->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: black;\n"
"    border: none;\n"
"    color: white;\n"
"    padding: 10px 16px;\n"
"    text-align: center;\n"
"    text-decoration: none;\n"
"    display: inline-block;\n"
"    font-size: 18px;\n"
"    font-weight: bold;\n"
"    margin: 4px 2px;\n"
"    transition-duration: 0.4s;\n"
"    cursor: pointer;\n"
"    border-radius: 12px;\n"
"    line-height: 1.5;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: white;\n"
"    color: black;\n"
"    border: 2px solid black;\n"
"    line-height: 1.5;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #333;\n"
"    border: 2px solid #333;\n"
"    line-height: 1.5;\n"
"}\n"
"\n"
""));

        gridLayout->addWidget(B_Three, 3, 2, 1, 1);

        B_Five = new QPushButton(groupBox);
        B_Five->setObjectName("B_Five");
        B_Five->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: black;\n"
"    border: none;\n"
"    color: white;\n"
"    padding: 10px 16px;\n"
"    text-align: center;\n"
"    text-decoration: none;\n"
"    display: inline-block;\n"
"    font-size: 18px;\n"
"    font-weight: bold;\n"
"    margin: 4px 2px;\n"
"    transition-duration: 0.4s;\n"
"    cursor: pointer;\n"
"    border-radius: 12px;\n"
"    line-height: 1.5;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: white;\n"
"    color: black;\n"
"    border: 2px solid black;\n"
"    line-height: 1.5;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #333;\n"
"    border: 2px solid #333;\n"
"    line-height: 1.5;\n"
"}\n"
"\n"
""));

        gridLayout->addWidget(B_Five, 2, 1, 1, 1);

        B_Two = new QPushButton(groupBox);
        B_Two->setObjectName("B_Two");
        B_Two->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: black;\n"
"    border: none;\n"
"    color: white;\n"
"    padding: 10px 16px;\n"
"    text-align: center;\n"
"    text-decoration: none;\n"
"    display: inline-block;\n"
"    font-size: 18px;\n"
"    font-weight: bold;\n"
"    margin: 4px 2px;\n"
"    transition-duration: 0.4s;\n"
"    cursor: pointer;\n"
"    border-radius: 12px;\n"
"    line-height: 1.5;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: white;\n"
"    color: black;\n"
"    border: 2px solid black;\n"
"    line-height: 1.5;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #333;\n"
"    border: 2px solid #333;\n"
"    line-height: 1.5;\n"
"}\n"
"\n"
""));

        gridLayout->addWidget(B_Two, 3, 1, 1, 1);

        B_Undo = new QPushButton(groupBox);
        B_Undo->setObjectName("B_Undo");
        B_Undo->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #454444;\n"
"    border: none;\n"
"    color: white;\n"
"    padding: 10px 5px;\n"
"    text-align: center;\n"
"    text-decoration: none;\n"
"    display: inline-block;\n"
"    font-size: 18px;\n"
"    font-weight: bold;\n"
"    margin: 4px 2px;\n"
"    transition-duration: 0.4s;\n"
"    cursor: pointer;\n"
"    border-radius: 12px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #333;\n"
"    color: white;\n"
"    border: 2px solid black;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #45a049;\n"
"    border: 2px solid #45a049;\n"
"}\n"
"\n"
""));

        gridLayout->addWidget(B_Undo, 0, 1, 1, 1);

        B_Four = new QPushButton(groupBox);
        B_Four->setObjectName("B_Four");
        B_Four->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: black;\n"
"    border: none;\n"
"    color: white;\n"
"    padding: 10px 16px;\n"
"    text-align: center;\n"
"    text-decoration: none;\n"
"    display: inline-block;\n"
"    font-size: 18px;\n"
"    font-weight: bold;\n"
"    margin: 4px 2px;\n"
"    transition-duration: 0.4s;\n"
"    cursor: pointer;\n"
"    border-radius: 12px;\n"
"    line-height: 1.5;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: white;\n"
"    color: black;\n"
"    border: 2px solid black;\n"
"    line-height: 1.5;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #333;\n"
"    border: 2px solid #333;\n"
"    line-height: 1.5;\n"
"}\n"
"\n"
""));

        gridLayout->addWidget(B_Four, 2, 0, 1, 1);

        B_Six = new QPushButton(groupBox);
        B_Six->setObjectName("B_Six");
        B_Six->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: black;\n"
"    border: none;\n"
"    color: white;\n"
"    padding: 10px 16px;\n"
"    text-align: center;\n"
"    text-decoration: none;\n"
"    display: inline-block;\n"
"    font-size: 18px;\n"
"    font-weight: bold;\n"
"    margin: 4px 2px;\n"
"    transition-duration: 0.4s;\n"
"    cursor: pointer;\n"
"    border-radius: 12px;\n"
"    line-height: 1.5;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: white;\n"
"    color: black;\n"
"    border: 2px solid black;\n"
"    line-height: 1.5;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #333;\n"
"    border: 2px solid #333;\n"
"    line-height: 1.5;\n"
"}\n"
"\n"
""));

        gridLayout->addWidget(B_Six, 2, 2, 1, 1);

        B_One = new QPushButton(groupBox);
        B_One->setObjectName("B_One");
        B_One->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: black;\n"
"    border: none;\n"
"    color: white;\n"
"    padding: 10px 16px;\n"
"    text-align: center;\n"
"    text-decoration: none;\n"
"    display: inline-block;\n"
"    font-size: 18px;\n"
"    font-weight: bold;\n"
"    margin: 4px 2px;\n"
"    transition-duration: 0.4s;\n"
"    cursor: pointer;\n"
"    border-radius: 12px;\n"
"    line-height: 1.5;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: white;\n"
"    color: black;\n"
"    border: 2px solid black;\n"
"    line-height: 1.5;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #333;\n"
"    border: 2px solid #333;\n"
"    line-height: 1.5;\n"
"}\n"
"\n"
""));

        gridLayout->addWidget(B_One, 3, 0, 1, 1);

        B_Seven = new QPushButton(groupBox);
        B_Seven->setObjectName("B_Seven");
        B_Seven->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: black;\n"
"    border: none;\n"
"    color: white;\n"
"    padding: 8px 16px;\n"
"    text-align: center;\n"
"    text-decoration: none;\n"
"    display: inline-block;\n"
"    font-size: 18px;\n"
"    font-weight: bold;\n"
"    margin: 4px 2px;\n"
"    transition-duration: 0.4s;\n"
"    cursor: pointer;\n"
"    border-radius: 12px;\n"
"    line-height: 1.5;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: white;\n"
"    color: black;\n"
"    border: 2px solid black;\n"
"    line-height: 1.5;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #333;\n"
"    border: 2px solid #333;\n"
"    line-height: 1.5;\n"
"}\n"
"\n"
""));

        gridLayout->addWidget(B_Seven, 1, 0, 1, 1);

        B_Comma = new QPushButton(groupBox);
        B_Comma->setObjectName("B_Comma");
        B_Comma->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: black;\n"
"    border: none;\n"
"    color: white;\n"
"    padding: 10px 16px;\n"
"    text-align: center;\n"
"    text-decoration: none;\n"
"    display: inline-block;\n"
"    font-size: 18px;\n"
"    font-weight: bold;\n"
"    margin: 4px 2px;\n"
"    transition-duration: 0.4s;\n"
"    cursor: pointer;\n"
"    border-radius: 12px;\n"
"    line-height: 1.5;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: white;\n"
"    color: black;\n"
"    border: 2px solid black;\n"
"    line-height: 1.5;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #333;\n"
"    border: 2px solid #333;\n"
"    line-height: 1.5;\n"
"}\n"
"\n"
""));

        gridLayout->addWidget(B_Comma, 4, 2, 1, 1);

        B_Eight = new QPushButton(groupBox);
        B_Eight->setObjectName("B_Eight");
        B_Eight->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: black;\n"
"    border: none;\n"
"    color: white;\n"
"    padding: 10px 16px;\n"
"    text-align: center;\n"
"    text-decoration: none;\n"
"    display: inline-block;\n"
"    font-size: 18px;\n"
"    font-weight: bold;\n"
"    margin: 4px 2px;\n"
"    transition-duration: 0.4s;\n"
"    cursor: pointer;\n"
"    border-radius: 12px;\n"
"    line-height: 1.5;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: white;\n"
"    color: black;\n"
"    border: 2px solid black;\n"
"    line-height: 1.5;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #333;\n"
"    border: 2px solid #333;\n"
"    line-height: 1.5;\n"
"}\n"
"\n"
""));

        gridLayout->addWidget(B_Eight, 1, 1, 1, 1);

        B_ClearAll = new QPushButton(groupBox);
        B_ClearAll->setObjectName("B_ClearAll");
        B_ClearAll->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #454444;\n"
"    border: none;\n"
"    color: white;\n"
"    padding: 10px 5px;\n"
"    text-align: center;\n"
"    text-decoration: none;\n"
"    display: inline-block;\n"
"    font-size: 18px;\n"
"    font-weight: bold;\n"
"    margin: 4px 2px;\n"
"    transition-duration: 0.4s;\n"
"    cursor: pointer;\n"
"    border-radius: 12px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #333;\n"
"    color: white;\n"
"    border: 2px solid #black;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #45a049;\n"
"    border: 2px solid #45a049;\n"
"}"));

        gridLayout->addWidget(B_ClearAll, 0, 0, 1, 1);

        B_Divide = new QPushButton(groupBox);
        B_Divide->setObjectName("B_Divide");
        B_Divide->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #454444;\n"
"    border: none;\n"
"    color: white;\n"
"    padding: 10px 5px;\n"
"    text-align: center;\n"
"    text-decoration: none;\n"
"    display: inline-block;\n"
"    font-size: 18px;\n"
"    font-weight: bold;\n"
"    margin: 4px 2px;\n"
"    transition-duration: 0.4s;\n"
"    cursor: pointer;\n"
"    border-radius: 12px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #333;\n"
"    color: white;\n"
"    border: 2px solid black;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #45a049;\n"
"    border: 2px solid #45a049;\n"
"}\n"
"\n"
""));

        gridLayout->addWidget(B_Divide, 0, 3, 1, 1);

        B_Multiply = new QPushButton(groupBox);
        B_Multiply->setObjectName("B_Multiply");
        B_Multiply->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #454444;\n"
"    border: none;\n"
"    color: white;\n"
"    padding: 10px 5px;\n"
"    text-align: center;\n"
"    text-decoration: none;\n"
"    display: inline-block;\n"
"    font-size: 18px;\n"
"    font-weight: bold;\n"
"    margin: 4px 2px;\n"
"    transition-duration: 0.4s;\n"
"    cursor: pointer;\n"
"    border-radius: 12px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #333;\n"
"    color: white;\n"
"    border: 2px solid black;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #45a049;\n"
"    border: 2px solid #45a049;\n"
"}\n"
"\n"
""));

        gridLayout->addWidget(B_Multiply, 1, 3, 1, 1);

        B_Minus = new QPushButton(groupBox);
        B_Minus->setObjectName("B_Minus");
        B_Minus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #454444;\n"
"    border: none;\n"
"    color: white;\n"
"    padding: 10px 5px;\n"
"    text-align: center;\n"
"    text-decoration: none;\n"
"    display: inline-block;\n"
"    font-size: 18px;\n"
"    font-weight: bold;\n"
"    margin: 4px 2px;\n"
"    transition-duration: 0.4s;\n"
"    cursor: pointer;\n"
"    border-radius: 12px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #333;\n"
"    color: white;\n"
"    border: 2px solid black;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #45a049;\n"
"    border: 2px solid #45a049;\n"
"}\n"
"\n"
""));

        gridLayout->addWidget(B_Minus, 2, 3, 1, 1);

        B_Add = new QPushButton(groupBox);
        B_Add->setObjectName("B_Add");
        B_Add->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #454444;\n"
"    border: none;\n"
"    color: white;\n"
"    padding: 10px 5px;\n"
"    text-align: center;\n"
"    text-decoration: none;\n"
"    display: inline-block;\n"
"    font-size: 18px;\n"
"    font-weight: bold;\n"
"    margin: 4px 2px;\n"
"    transition-duration: 0.4s;\n"
"    cursor: pointer;\n"
"    border-radius: 12px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #333;\n"
"    color: white;\n"
"    border: 2px solid black;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #45a049;\n"
"    border: 2px solid #45a049;\n"
"}\n"
"\n"
""));

        gridLayout->addWidget(B_Add, 3, 3, 1, 1);

        B_Equals = new QPushButton(groupBox);
        B_Equals->setObjectName("B_Equals");
        B_Equals->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #4CAF50;\n"
"    border: none;\n"
"    color: white;\n"
"    padding: 10px 5px;\n"
"    text-align: center;\n"
"    text-decoration: none;\n"
"    display: inline-block;\n"
"    font-size: 18px;\n"
"    font-weight: bold;\n"
"    margin: 4px 2px;\n"
"    transition-duration: 0.4s;\n"
"    cursor: pointer;\n"
"    border-radius: 12px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #333;\n"
"    color: white;\n"
"    border: 2px solid #56c75a;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #45a049;\n"
"    border: 2px solid #45a049;\n"
"}\n"
"\n"
""));

        gridLayout->addWidget(B_Equals, 4, 3, 1, 1);

        B_Zero = new QPushButton(groupBox);
        B_Zero->setObjectName("B_Zero");
        B_Zero->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: black;\n"
"    border: none;\n"
"    color: white;\n"
"    padding: 10px 16px;\n"
"    text-align: center;\n"
"    text-decoration: none;\n"
"    display: inline-block;\n"
"    font-size: 18px;\n"
"    font-weight: bold;\n"
"    margin: 4px 2px;\n"
"    transition-duration: 0.4s;\n"
"    cursor: pointer;\n"
"    border-radius: 12px;\n"
"    line-height: 1.5;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: white;\n"
"    color: black;\n"
"    border: 2px solid black;\n"
"    line-height: 1.5;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #333;\n"
"    border: 2px solid #333;\n"
"    line-height: 1.5;\n"
"}\n"
"\n"
""));

        gridLayout->addWidget(B_Zero, 4, 0, 1, 2);

        B_DHundred = new QPushButton(groupBox);
        B_DHundred->setObjectName("B_DHundred");
        B_DHundred->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #454444;\n"
"    border: none;\n"
"    color: white;\n"
"    padding: 10px 5px;\n"
"    text-align: center;\n"
"    text-decoration: none;\n"
"    display: inline-block;\n"
"    font-size: 18px;\n"
"    font-weight: bold;\n"
"    margin: 4px 2px;\n"
"    transition-duration: 0.4s;\n"
"    cursor: pointer;\n"
"    border-radius: 12px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #333;\n"
"    color: white;\n"
"    border: 2px solid black;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #45a049;\n"
"    border: 2px solid #45a049;\n"
"}\n"
"\n"
""));

        gridLayout->addWidget(B_DHundred, 0, 2, 1, 1);


        gridLayout_2->addWidget(groupBox, 1, 0, 1, 1);

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
        B_Seven->setText(QCoreApplication::translate("CK_CalculatorClass", "7", nullptr));
        B_Comma->setText(QCoreApplication::translate("CK_CalculatorClass", ",", nullptr));
        B_Eight->setText(QCoreApplication::translate("CK_CalculatorClass", "8", nullptr));
        B_ClearAll->setText(QCoreApplication::translate("CK_CalculatorClass", "CA", nullptr));
        B_Divide->setText(QCoreApplication::translate("CK_CalculatorClass", "\303\267", nullptr));
        B_Multiply->setText(QCoreApplication::translate("CK_CalculatorClass", "\303\227", nullptr));
        B_Minus->setText(QCoreApplication::translate("CK_CalculatorClass", "-", nullptr));
        B_Add->setText(QCoreApplication::translate("CK_CalculatorClass", "+", nullptr));
        B_Equals->setText(QCoreApplication::translate("CK_CalculatorClass", "=", nullptr));
        B_Zero->setText(QCoreApplication::translate("CK_CalculatorClass", "0", nullptr));
        B_DHundred->setText(QCoreApplication::translate("CK_CalculatorClass", "%", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CK_CalculatorClass: public Ui_CK_CalculatorClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CK_CALCULATOR_H
