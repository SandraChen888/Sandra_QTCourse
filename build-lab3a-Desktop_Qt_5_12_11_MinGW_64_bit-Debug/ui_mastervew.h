/********************************************************************************
** Form generated from reading UI file 'mastervew.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MASTERVEW_H
#define UI_MASTERVEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MasterVew
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *page_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_2;

    void setupUi(QWidget *MasterVew)
    {
        if (MasterVew->objectName().isEmpty())
            MasterVew->setObjectName(QString::fromUtf8("MasterVew"));
        MasterVew->resize(557, 281);
        stackedWidget = new QStackedWidget(MasterVew);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(10, 50, 541, 221));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        stackedWidget->addWidget(page_2);
        widget = new QWidget(MasterVew);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 10, 541, 22));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(29, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        retranslateUi(MasterVew);

        QMetaObject::connectSlotsByName(MasterVew);
    } // setupUi

    void retranslateUi(QWidget *MasterVew)
    {
        MasterVew->setWindowTitle(QApplication::translate("MasterVew", "MasterVew", nullptr));
        pushButton->setText(QApplication::translate("MasterVew", "PushButton", nullptr));
        label->setText(QApplication::translate("MasterVew", "TextLabel", nullptr));
        pushButton_2->setText(QApplication::translate("MasterVew", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MasterVew: public Ui_MasterVew {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MASTERVEW_H
