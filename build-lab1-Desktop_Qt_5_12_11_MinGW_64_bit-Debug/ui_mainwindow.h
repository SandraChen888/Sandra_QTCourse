/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QPushButton *btnDel;
    QPushButton *btnInverse;
    QPushButton *btnNum2;
    QPushButton *btnClearAll;
    QPushButton *btnNum5;
    QPushButton *btnMultiple;
    QPushButton *btnMinus;
    QPushButton *btnSquare;
    QPushButton *btnPlus;
    QPushButton *btnNum3;
    QPushButton *btnSign;
    QPushButton *btnNum1;
    QPushButton *btnNum7;
    QPushButton *btnPercentage;
    QPushButton *btnNum9;
    QPushButton *btnPeriod;
    QPushButton *btnNum8;
    QPushButton *btnClear;
    QPushButton *btnNum6;
    QPushButton *btnNum4;
    QPushButton *btnDivide;
    QPushButton *btnEqual;
    QPushButton *btnSqrt;
    QPushButton *btnNum0;
    QLineEdit *display;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(374, 270);
        MainWindow->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(192,192,192);\n"
"font-size:12pt;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: rgba(50,50,50,100);\n"
"color:black\n"
"}\n"
"\n"
"QPushButton::pressed\n"
"{\n"
"background-color: white;\n"
"color:black\n"
"}\n"
"\n"
"QLineEdit\n"
"{\n"
"font-size:20pt;\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(1, 1, 1, 1);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        btnDel = new QPushButton(centralwidget);
        btnDel->setObjectName(QString::fromUtf8("btnDel"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnDel->sizePolicy().hasHeightForWidth());
        btnDel->setSizePolicy(sizePolicy);
        btnDel->setStyleSheet(QString::fromUtf8("font: 12pt \"\351\273\221\344\275\223\";\n"
"color: rgb(85, 170, 255);\n"
"background-color: rgb(191, 191, 191);"));

        gridLayout->addWidget(btnDel, 1, 3, 1, 1);

        btnInverse = new QPushButton(centralwidget);
        btnInverse->setObjectName(QString::fromUtf8("btnInverse"));
        sizePolicy.setHeightForWidth(btnInverse->sizePolicy().hasHeightForWidth());
        btnInverse->setSizePolicy(sizePolicy);
        btnInverse->setStyleSheet(QString::fromUtf8("font: 12pt \"\351\273\221\344\275\223\";\n"
"color: rgb(101, 101, 101);\n"
"background-color: rgb(191, 191, 191);"));

        gridLayout->addWidget(btnInverse, 2, 0, 1, 1);

        btnNum2 = new QPushButton(centralwidget);
        btnNum2->setObjectName(QString::fromUtf8("btnNum2"));
        sizePolicy.setHeightForWidth(btnNum2->sizePolicy().hasHeightForWidth());
        btnNum2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btnNum2, 5, 1, 1, 1);

        btnClearAll = new QPushButton(centralwidget);
        btnClearAll->setObjectName(QString::fromUtf8("btnClearAll"));
        sizePolicy.setHeightForWidth(btnClearAll->sizePolicy().hasHeightForWidth());
        btnClearAll->setSizePolicy(sizePolicy);
        btnClearAll->setStyleSheet(QString::fromUtf8("font: 12pt \"\351\273\221\344\275\223\";\n"
"color: rgb(85, 170, 255);\n"
"background-color: rgb(191, 191, 191);"));

        gridLayout->addWidget(btnClearAll, 1, 2, 1, 1);

        btnNum5 = new QPushButton(centralwidget);
        btnNum5->setObjectName(QString::fromUtf8("btnNum5"));
        sizePolicy.setHeightForWidth(btnNum5->sizePolicy().hasHeightForWidth());
        btnNum5->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btnNum5, 4, 1, 1, 1);

        btnMultiple = new QPushButton(centralwidget);
        btnMultiple->setObjectName(QString::fromUtf8("btnMultiple"));
        sizePolicy.setHeightForWidth(btnMultiple->sizePolicy().hasHeightForWidth());
        btnMultiple->setSizePolicy(sizePolicy);
        btnMultiple->setStyleSheet(QString::fromUtf8("font: 12pt \"\351\273\221\344\275\223\";\n"
"color: rgb(85, 170, 255);\n"
"background-color: rgb(191, 191, 191);"));

        gridLayout->addWidget(btnMultiple, 3, 3, 1, 1);

        btnMinus = new QPushButton(centralwidget);
        btnMinus->setObjectName(QString::fromUtf8("btnMinus"));
        sizePolicy.setHeightForWidth(btnMinus->sizePolicy().hasHeightForWidth());
        btnMinus->setSizePolicy(sizePolicy);
        btnMinus->setStyleSheet(QString::fromUtf8("font: 12pt \"\351\273\221\344\275\223\";\n"
"color: rgb(85, 170, 255);\n"
"background-color: rgb(191, 191, 191);"));

        gridLayout->addWidget(btnMinus, 4, 3, 1, 1);

        btnSquare = new QPushButton(centralwidget);
        btnSquare->setObjectName(QString::fromUtf8("btnSquare"));
        sizePolicy.setHeightForWidth(btnSquare->sizePolicy().hasHeightForWidth());
        btnSquare->setSizePolicy(sizePolicy);
        btnSquare->setStyleSheet(QString::fromUtf8("font: 12pt \"\351\273\221\344\275\223\";\n"
"color: rgb(101, 101, 101);\n"
"background-color: rgb(191, 191, 191);"));

        gridLayout->addWidget(btnSquare, 2, 1, 1, 1);

        btnPlus = new QPushButton(centralwidget);
        btnPlus->setObjectName(QString::fromUtf8("btnPlus"));
        sizePolicy.setHeightForWidth(btnPlus->sizePolicy().hasHeightForWidth());
        btnPlus->setSizePolicy(sizePolicy);
        btnPlus->setStyleSheet(QString::fromUtf8("font: 12pt \"\351\273\221\344\275\223\";\n"
"color: rgb(85, 170, 255);\n"
"background-color: rgb(191, 191, 191);"));

        gridLayout->addWidget(btnPlus, 5, 3, 1, 1);

        btnNum3 = new QPushButton(centralwidget);
        btnNum3->setObjectName(QString::fromUtf8("btnNum3"));
        sizePolicy.setHeightForWidth(btnNum3->sizePolicy().hasHeightForWidth());
        btnNum3->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btnNum3, 5, 2, 1, 1);

        btnSign = new QPushButton(centralwidget);
        btnSign->setObjectName(QString::fromUtf8("btnSign"));
        sizePolicy.setHeightForWidth(btnSign->sizePolicy().hasHeightForWidth());
        btnSign->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btnSign, 6, 0, 1, 1);

        btnNum1 = new QPushButton(centralwidget);
        btnNum1->setObjectName(QString::fromUtf8("btnNum1"));
        sizePolicy.setHeightForWidth(btnNum1->sizePolicy().hasHeightForWidth());
        btnNum1->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btnNum1, 5, 0, 1, 1);

        btnNum7 = new QPushButton(centralwidget);
        btnNum7->setObjectName(QString::fromUtf8("btnNum7"));
        sizePolicy.setHeightForWidth(btnNum7->sizePolicy().hasHeightForWidth());
        btnNum7->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btnNum7, 3, 0, 1, 1);

        btnPercentage = new QPushButton(centralwidget);
        btnPercentage->setObjectName(QString::fromUtf8("btnPercentage"));
        sizePolicy.setHeightForWidth(btnPercentage->sizePolicy().hasHeightForWidth());
        btnPercentage->setSizePolicy(sizePolicy);
        btnPercentage->setStyleSheet(QString::fromUtf8("font: 12pt \"\351\273\221\344\275\223\";\n"
"color: rgb(101, 101, 101);\n"
"background-color: rgb(191, 191, 191);"));

        gridLayout->addWidget(btnPercentage, 1, 0, 1, 1);

        btnNum9 = new QPushButton(centralwidget);
        btnNum9->setObjectName(QString::fromUtf8("btnNum9"));
        sizePolicy.setHeightForWidth(btnNum9->sizePolicy().hasHeightForWidth());
        btnNum9->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btnNum9, 3, 2, 1, 1);

        btnPeriod = new QPushButton(centralwidget);
        btnPeriod->setObjectName(QString::fromUtf8("btnPeriod"));
        sizePolicy.setHeightForWidth(btnPeriod->sizePolicy().hasHeightForWidth());
        btnPeriod->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btnPeriod, 6, 2, 1, 1);

        btnNum8 = new QPushButton(centralwidget);
        btnNum8->setObjectName(QString::fromUtf8("btnNum8"));
        sizePolicy.setHeightForWidth(btnNum8->sizePolicy().hasHeightForWidth());
        btnNum8->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btnNum8, 3, 1, 1, 1);

        btnClear = new QPushButton(centralwidget);
        btnClear->setObjectName(QString::fromUtf8("btnClear"));
        sizePolicy.setHeightForWidth(btnClear->sizePolicy().hasHeightForWidth());
        btnClear->setSizePolicy(sizePolicy);
        btnClear->setStyleSheet(QString::fromUtf8("font: 12pt \"\351\273\221\344\275\223\";\n"
"color: rgb(85, 170, 255);\n"
"background-color: rgb(191, 191, 191);"));

        gridLayout->addWidget(btnClear, 1, 1, 1, 1);

        btnNum6 = new QPushButton(centralwidget);
        btnNum6->setObjectName(QString::fromUtf8("btnNum6"));
        sizePolicy.setHeightForWidth(btnNum6->sizePolicy().hasHeightForWidth());
        btnNum6->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btnNum6, 4, 2, 1, 1);

        btnNum4 = new QPushButton(centralwidget);
        btnNum4->setObjectName(QString::fromUtf8("btnNum4"));
        sizePolicy.setHeightForWidth(btnNum4->sizePolicy().hasHeightForWidth());
        btnNum4->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btnNum4, 4, 0, 1, 1);

        btnDivide = new QPushButton(centralwidget);
        btnDivide->setObjectName(QString::fromUtf8("btnDivide"));
        sizePolicy.setHeightForWidth(btnDivide->sizePolicy().hasHeightForWidth());
        btnDivide->setSizePolicy(sizePolicy);
        btnDivide->setStyleSheet(QString::fromUtf8("font: 12pt \"\351\273\221\344\275\223\";\n"
"color: rgb(85, 170, 255);\n"
"background-color: rgb(191, 191, 191);"));

        gridLayout->addWidget(btnDivide, 2, 3, 1, 1);

        btnEqual = new QPushButton(centralwidget);
        btnEqual->setObjectName(QString::fromUtf8("btnEqual"));
        sizePolicy.setHeightForWidth(btnEqual->sizePolicy().hasHeightForWidth());
        btnEqual->setSizePolicy(sizePolicy);
        btnEqual->setStyleSheet(QString::fromUtf8("font: 12pt \"\351\273\221\344\275\223\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(85, 170, 255);"));

        gridLayout->addWidget(btnEqual, 6, 3, 1, 1);

        btnSqrt = new QPushButton(centralwidget);
        btnSqrt->setObjectName(QString::fromUtf8("btnSqrt"));
        sizePolicy.setHeightForWidth(btnSqrt->sizePolicy().hasHeightForWidth());
        btnSqrt->setSizePolicy(sizePolicy);
        btnSqrt->setStyleSheet(QString::fromUtf8("font: 12pt \"\351\273\221\344\275\223\";\n"
"color: rgb(101, 101, 101);\n"
"background-color: rgb(191, 191, 191);"));

        gridLayout->addWidget(btnSqrt, 2, 2, 1, 1);

        btnNum0 = new QPushButton(centralwidget);
        btnNum0->setObjectName(QString::fromUtf8("btnNum0"));
        sizePolicy.setHeightForWidth(btnNum0->sizePolicy().hasHeightForWidth());
        btnNum0->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btnNum0, 6, 1, 1, 1);

        display = new QLineEdit(centralwidget);
        display->setObjectName(QString::fromUtf8("display"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(display->sizePolicy().hasHeightForWidth());
        display->setSizePolicy(sizePolicy1);
        display->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(display, 0, 0, 1, 4);


        verticalLayout->addLayout(gridLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 374, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\347\216\213\346\203\240\347\201\2652022414040133", nullptr));
        btnDel->setText(QApplication::translate("MainWindow", "\342\214\253", nullptr));
        btnInverse->setText(QApplication::translate("MainWindow", "1/x", nullptr));
        btnNum2->setText(QApplication::translate("MainWindow", "2", nullptr));
        btnClearAll->setText(QApplication::translate("MainWindow", "C", nullptr));
        btnNum5->setText(QApplication::translate("MainWindow", "5", nullptr));
        btnMultiple->setText(QApplication::translate("MainWindow", "\303\227", nullptr));
        btnMinus->setText(QApplication::translate("MainWindow", "-", nullptr));
        btnSquare->setText(QApplication::translate("MainWindow", "x~2", nullptr));
        btnPlus->setText(QApplication::translate("MainWindow", "+", nullptr));
        btnNum3->setText(QApplication::translate("MainWindow", "3", nullptr));
        btnSign->setText(QApplication::translate("MainWindow", "\302\261", nullptr));
        btnNum1->setText(QApplication::translate("MainWindow", "1", nullptr));
        btnNum7->setText(QApplication::translate("MainWindow", "7", nullptr));
        btnPercentage->setText(QApplication::translate("MainWindow", "%", nullptr));
        btnNum9->setText(QApplication::translate("MainWindow", "9", nullptr));
        btnPeriod->setText(QApplication::translate("MainWindow", ".", nullptr));
        btnNum8->setText(QApplication::translate("MainWindow", "8", nullptr));
        btnClear->setText(QApplication::translate("MainWindow", "CE", nullptr));
        btnNum6->setText(QApplication::translate("MainWindow", "6", nullptr));
        btnNum4->setText(QApplication::translate("MainWindow", "4", nullptr));
        btnDivide->setText(QApplication::translate("MainWindow", "/", nullptr));
        btnEqual->setText(QApplication::translate("MainWindow", "=", nullptr));
        btnSqrt->setText(QApplication::translate("MainWindow", "\342\210\232", nullptr));
        btnNum0->setText(QApplication::translate("MainWindow", "0", nullptr));
        display->setText(QString());
        display->setPlaceholderText(QApplication::translate("MainWindow", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
