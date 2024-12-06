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
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnback;
    QSpacerItem *horizontalSpacer;
    QLabel *labelTitle;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnLogout;

    void setupUi(QWidget *MasterVew)
    {
        if (MasterVew->objectName().isEmpty())
            MasterVew->setObjectName(QString::fromUtf8("MasterVew"));
        MasterVew->resize(557, 281);
        stackedWidget = new QStackedWidget(MasterVew);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(10, 50, 541, 221));
        widget = new QWidget(MasterVew);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 10, 541, 22));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btnback = new QPushButton(widget);
        btnback->setObjectName(QString::fromUtf8("btnback"));

        horizontalLayout->addWidget(btnback);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        labelTitle = new QLabel(widget);
        labelTitle->setObjectName(QString::fromUtf8("labelTitle"));

        horizontalLayout->addWidget(labelTitle);

        horizontalSpacer_2 = new QSpacerItem(29, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        btnLogout = new QPushButton(widget);
        btnLogout->setObjectName(QString::fromUtf8("btnLogout"));

        horizontalLayout->addWidget(btnLogout);


        retranslateUi(MasterVew);

        QMetaObject::connectSlotsByName(MasterVew);
    } // setupUi

    void retranslateUi(QWidget *MasterVew)
    {
        MasterVew->setWindowTitle(QApplication::translate("MasterVew", "MasterVew", nullptr));
        btnback->setText(QApplication::translate("MasterVew", "\350\277\224\345\233\236", nullptr));
        labelTitle->setText(QApplication::translate("MasterVew", "TextLabel", nullptr));
        btnLogout->setText(QApplication::translate("MasterVew", "\346\263\250\351\224\200", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MasterVew: public Ui_MasterVew {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MASTERVEW_H
