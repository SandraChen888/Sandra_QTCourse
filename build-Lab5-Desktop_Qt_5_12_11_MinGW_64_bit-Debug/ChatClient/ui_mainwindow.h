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
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_3;
    QLabel *titleLabel;
    QStackedWidget *stackedWidget;
    QWidget *chatPage;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QTextEdit *roomTextEdit;
    QListWidget *userListWidget;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *sayLineEdit;
    QPushButton *sayButton;
    QPushButton *logoutButton;
    QWidget *loginPage;
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QFrame *loginFrame;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *usernameEdit;
    QLineEdit *serverEdit;
    QSpacerItem *verticalSpacer;
    QPushButton *loginButton;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(618, 400);
        MainWindow->setStyleSheet(QString::fromUtf8("#titleLabel{\n"
"background:white;\n"
"border:none;\n"
"border-bottom:1px solid black;\n"
"paddiing:5px;\n"
"font:24px\"\351\273\221\344\275\223\";\n"
"color:rgb(255,255,255);\n"
"background-color:rgba(0,170,127,255)\n"
"}\n"
"\n"
"#mainFrame{\n"
"border:none;\n"
"background:white;\n"
"}\n"
"\n"
"#loginFrame{\n"
"background:qlineargradient(x1:0,y1:0,x2:0,y2:1,stop:0#ddf,stop:1 #aff);\n"
"border:1px solid gray;\n"
"padding:10px;\n"
"border-radius:25px;\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_3 = new QGridLayout(centralwidget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        titleLabel = new QLabel(centralwidget);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));
        titleLabel->setStyleSheet(QString::fromUtf8(""));

        gridLayout_3->addWidget(titleLabel, 0, 0, 1, 1);

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        chatPage = new QWidget();
        chatPage->setObjectName(QString::fromUtf8("chatPage"));
        verticalLayout = new QVBoxLayout(chatPage);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        roomTextEdit = new QTextEdit(chatPage);
        roomTextEdit->setObjectName(QString::fromUtf8("roomTextEdit"));

        horizontalLayout->addWidget(roomTextEdit);

        userListWidget = new QListWidget(chatPage);
        userListWidget->setObjectName(QString::fromUtf8("userListWidget"));
        userListWidget->setMaximumSize(QSize(120, 16777215));

        horizontalLayout->addWidget(userListWidget);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        sayLineEdit = new QLineEdit(chatPage);
        sayLineEdit->setObjectName(QString::fromUtf8("sayLineEdit"));

        horizontalLayout_2->addWidget(sayLineEdit);

        sayButton = new QPushButton(chatPage);
        sayButton->setObjectName(QString::fromUtf8("sayButton"));

        horizontalLayout_2->addWidget(sayButton);

        logoutButton = new QPushButton(chatPage);
        logoutButton->setObjectName(QString::fromUtf8("logoutButton"));

        horizontalLayout_2->addWidget(logoutButton);


        verticalLayout->addLayout(horizontalLayout_2);

        stackedWidget->addWidget(chatPage);
        loginPage = new QWidget();
        loginPage->setObjectName(QString::fromUtf8("loginPage"));
        gridLayout_2 = new QGridLayout(loginPage);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalSpacer_2 = new QSpacerItem(20, 89, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(174, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 0, 1, 1);

        loginFrame = new QFrame(loginPage);
        loginFrame->setObjectName(QString::fromUtf8("loginFrame"));
        loginFrame->setFrameShape(QFrame::StyledPanel);
        loginFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(loginFrame);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(loginFrame);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        label_3 = new QLabel(loginFrame);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        usernameEdit = new QLineEdit(loginFrame);
        usernameEdit->setObjectName(QString::fromUtf8("usernameEdit"));

        gridLayout->addWidget(usernameEdit, 1, 1, 1, 1);

        serverEdit = new QLineEdit(loginFrame);
        serverEdit->setObjectName(QString::fromUtf8("serverEdit"));

        gridLayout->addWidget(serverEdit, 0, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer);

        loginButton = new QPushButton(loginFrame);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));

        verticalLayout_2->addWidget(loginButton);


        gridLayout_2->addWidget(loginFrame, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(174, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 89, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_3, 2, 1, 1, 1);

        stackedWidget->addWidget(loginPage);

        gridLayout_3->addWidget(stackedWidget, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\350\201\212\345\244\251\345\256\244\345\256\242\346\210\267\347\253\257", nullptr));
        titleLabel->setText(QApplication::translate("MainWindow", "\351\231\210\344\275\251\347\221\266\347\232\204\350\201\212\345\244\251\345\256\244", nullptr));
        sayButton->setText(QApplication::translate("MainWindow", "\345\217\221\351\200\201", nullptr));
        logoutButton->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "\346\234\215\345\212\241\345\231\250\345\234\260\345\235\200", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "\346\230\265\347\247\260", nullptr));
        usernameEdit->setText(QApplication::translate("MainWindow", "sandra", nullptr));
        serverEdit->setText(QApplication::translate("MainWindow", "127.0.0.1", nullptr));
        loginButton->setText(QApplication::translate("MainWindow", "\347\231\273\345\275\225\350\201\212\345\244\251\345\256\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
