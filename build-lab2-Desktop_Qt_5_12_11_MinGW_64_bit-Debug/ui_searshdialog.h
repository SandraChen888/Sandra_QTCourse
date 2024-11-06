/********************************************************************************
** Form generated from reading UI file 'searshdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARSHDIALOG_H
#define UI_SEARSHDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SearshDialog
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *SearshText;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *rbUp;
    QRadioButton *rbDown;
    QCheckBox *cbCase;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_4;
    QPushButton *btFindNext;
    QSpacerItem *verticalSpacer_2;
    QPushButton *btCancel;

    void setupUi(QDialog *SearshDialog)
    {
        if (SearshDialog->objectName().isEmpty())
            SearshDialog->setObjectName(QString::fromUtf8("SearshDialog"));
        SearshDialog->resize(539, 294);
        widget = new QWidget(SearshDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(110, 60, 251, 141));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Agency FB"));
        font.setPointSize(12);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        SearshText = new QLineEdit(widget);
        SearshText->setObjectName(QString::fromUtf8("SearshText"));

        horizontalLayout->addWidget(SearshText);


        verticalLayout->addLayout(horizontalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        rbUp = new QRadioButton(widget);
        rbUp->setObjectName(QString::fromUtf8("rbUp"));

        horizontalLayout_2->addWidget(rbUp);

        rbDown = new QRadioButton(widget);
        rbDown->setObjectName(QString::fromUtf8("rbDown"));

        horizontalLayout_2->addWidget(rbDown);


        verticalLayout_2->addLayout(horizontalLayout_2);


        verticalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(verticalLayout);

        cbCase = new QCheckBox(widget);
        cbCase->setObjectName(QString::fromUtf8("cbCase"));

        verticalLayout_3->addWidget(cbCase);

        widget1 = new QWidget(SearshDialog);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(390, 70, 131, 121));
        verticalLayout_4 = new QVBoxLayout(widget1);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        btFindNext = new QPushButton(widget1);
        btFindNext->setObjectName(QString::fromUtf8("btFindNext"));

        verticalLayout_4->addWidget(btFindNext);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);

        btCancel = new QPushButton(widget1);
        btCancel->setObjectName(QString::fromUtf8("btCancel"));

        verticalLayout_4->addWidget(btCancel);


        retranslateUi(SearshDialog);

        QMetaObject::connectSlotsByName(SearshDialog);
    } // setupUi

    void retranslateUi(QDialog *SearshDialog)
    {
        SearshDialog->setWindowTitle(QApplication::translate("SearshDialog", "\346\237\245\346\211\276", nullptr));
        label->setText(QApplication::translate("SearshDialog", "\346\237\245\346\211\276\347\233\256\346\240\207\357\274\232", nullptr));
        label_2->setText(QApplication::translate("SearshDialog", "\346\226\271\345\220\221", nullptr));
        rbUp->setText(QApplication::translate("SearshDialog", "\345\220\221\344\270\212(&U)", nullptr));
        rbDown->setText(QApplication::translate("SearshDialog", "\345\220\221\344\270\213(&D)", nullptr));
        cbCase->setText(QApplication::translate("SearshDialog", "\345\214\272\345\210\206\345\244\247\345\260\217\345\206\231", nullptr));
        btFindNext->setText(QApplication::translate("SearshDialog", "\346\237\245\350\257\242\344\270\213\344\270\200\344\270\252(&F)", nullptr));
        btCancel->setText(QApplication::translate("SearshDialog", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SearshDialog: public Ui_SearshDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARSHDIALOG_H
