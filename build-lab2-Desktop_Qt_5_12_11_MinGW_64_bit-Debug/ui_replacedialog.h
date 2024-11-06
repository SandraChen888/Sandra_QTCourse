/********************************************************************************
** Form generated from reading UI file 'replacedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPLACEDIALOG_H
#define UI_REPLACEDIALOG_H

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

class Ui_ReplaceDialog
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QPushButton *btFindNext;
    QSpacerItem *verticalSpacer_2;
    QPushButton *btReplace;
    QSpacerItem *verticalSpacer;
    QPushButton *btReplaceAll;
    QSpacerItem *verticalSpacer_3;
    QPushButton *btCancel;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *SearshText;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *rbUp;
    QRadioButton *rbDown;
    QCheckBox *cbCase;

    void setupUi(QDialog *ReplaceDialog)
    {
        if (ReplaceDialog->objectName().isEmpty())
            ReplaceDialog->setObjectName(QString::fromUtf8("ReplaceDialog"));
        ReplaceDialog->resize(425, 176);
        ReplaceDialog->setMaximumSize(QSize(450, 176));
        widget = new QWidget(ReplaceDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(270, 10, 151, 151));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        btFindNext = new QPushButton(widget);
        btFindNext->setObjectName(QString::fromUtf8("btFindNext"));

        verticalLayout_3->addWidget(btFindNext);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        btReplace = new QPushButton(widget);
        btReplace->setObjectName(QString::fromUtf8("btReplace"));

        verticalLayout_3->addWidget(btReplace);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        btReplaceAll = new QPushButton(widget);
        btReplaceAll->setObjectName(QString::fromUtf8("btReplaceAll"));

        verticalLayout_3->addWidget(btReplaceAll);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        btCancel = new QPushButton(widget);
        btCancel->setObjectName(QString::fromUtf8("btCancel"));

        verticalLayout_3->addWidget(btCancel);

        widget1 = new QWidget(ReplaceDialog);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(1, 13, 241, 151));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(widget1);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMaximumSize(QSize(100, 16777215));
        QFont font;
        font.setFamily(QString::fromUtf8("Agency FB"));
        font.setPointSize(12);
        label->setFont(font);

        horizontalLayout_3->addWidget(label);

        SearshText = new QLineEdit(widget1);
        SearshText->setObjectName(QString::fromUtf8("SearshText"));

        horizontalLayout_3->addWidget(SearshText);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(widget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setMaximumSize(QSize(100, 16777215));
        label_3->setFont(font);

        horizontalLayout->addWidget(label_3);

        lineEdit = new QLineEdit(widget1);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_2 = new QLabel(widget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        rbUp = new QRadioButton(widget1);
        rbUp->setObjectName(QString::fromUtf8("rbUp"));

        horizontalLayout_2->addWidget(rbUp);

        rbDown = new QRadioButton(widget1);
        rbDown->setObjectName(QString::fromUtf8("rbDown"));

        horizontalLayout_2->addWidget(rbDown);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);

        cbCase = new QCheckBox(widget1);
        cbCase->setObjectName(QString::fromUtf8("cbCase"));

        verticalLayout_2->addWidget(cbCase);


        retranslateUi(ReplaceDialog);

        QMetaObject::connectSlotsByName(ReplaceDialog);
    } // setupUi

    void retranslateUi(QDialog *ReplaceDialog)
    {
        ReplaceDialog->setWindowTitle(QApplication::translate("ReplaceDialog", "\346\233\277\346\215\242", nullptr));
        btFindNext->setText(QApplication::translate("ReplaceDialog", "\346\237\245\350\257\242\344\270\213\344\270\200\344\270\252(&F)", nullptr));
        btReplace->setText(QApplication::translate("ReplaceDialog", "\346\233\277\346\215\242(&R)", nullptr));
        btReplaceAll->setText(QApplication::translate("ReplaceDialog", "\346\233\277\346\215\242\345\205\250\351\203\250(&A)", nullptr));
        btCancel->setText(QApplication::translate("ReplaceDialog", "\345\217\226\346\266\210", nullptr));
        label->setText(QApplication::translate("ReplaceDialog", "\346\237\245\346\211\276\347\233\256\346\240\207\357\274\232", nullptr));
        label_3->setText(QApplication::translate("ReplaceDialog", "\346\233\277\346\215\242\344\270\272\357\274\232", nullptr));
        label_2->setText(QApplication::translate("ReplaceDialog", "\346\226\271\345\220\221", nullptr));
        rbUp->setText(QApplication::translate("ReplaceDialog", "\345\220\221\344\270\212(&U)", nullptr));
        rbDown->setText(QApplication::translate("ReplaceDialog", "\345\220\221\344\270\213(&D)", nullptr));
        cbCase->setText(QApplication::translate("ReplaceDialog", "\345\214\272\345\210\206\345\244\247\345\260\217\345\206\231", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReplaceDialog: public Ui_ReplaceDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPLACEDIALOG_H
