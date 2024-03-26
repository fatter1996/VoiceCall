/********************************************************************************
** Form generated from reading UI file 'VoiceDialogWnd.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VOICEDIALOGWND_H
#define UI_VOICEDIALOGWND_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VoiceDialogWnd
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *agreeBtn;
    QPushButton *disAgreeBtn;
    QPushButton *closeBtn;

    void setupUi(QWidget *VoiceDialogWnd)
    {
        if (VoiceDialogWnd->objectName().isEmpty())
            VoiceDialogWnd->setObjectName(QString::fromUtf8("VoiceDialogWnd"));
        VoiceDialogWnd->resize(323, 128);
        verticalLayout = new QVBoxLayout(VoiceDialogWnd);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(VoiceDialogWnd);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(0, 32));
        label->setMaximumSize(QSize(16777215, 32));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(11);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        agreeBtn = new QPushButton(VoiceDialogWnd);
        agreeBtn->setObjectName(QString::fromUtf8("agreeBtn"));
        agreeBtn->setMinimumSize(QSize(60, 70));
        agreeBtn->setMaximumSize(QSize(60, 70));
        agreeBtn->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/\350\257\255\351\237\263\351\200\232\350\257\235\345\217\212\350\247\206\351\242\221\351\200\232\350\257\235UI/\350\257\255\351\237\263\351\200\232\350\257\235-\346\216\245\345\220\254.png);"));

        horizontalLayout_2->addWidget(agreeBtn);

        disAgreeBtn = new QPushButton(VoiceDialogWnd);
        disAgreeBtn->setObjectName(QString::fromUtf8("disAgreeBtn"));
        disAgreeBtn->setMinimumSize(QSize(60, 70));
        disAgreeBtn->setMaximumSize(QSize(60, 70));
        disAgreeBtn->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/\350\257\255\351\237\263\351\200\232\350\257\235\345\217\212\350\247\206\351\242\221\351\200\232\350\257\235UI/\350\257\255\351\237\263\351\200\232\350\257\235-\346\213\222\347\273\235.png);"));

        horizontalLayout_2->addWidget(disAgreeBtn);

        closeBtn = new QPushButton(VoiceDialogWnd);
        closeBtn->setObjectName(QString::fromUtf8("closeBtn"));
        closeBtn->setMinimumSize(QSize(60, 70));
        closeBtn->setMaximumSize(QSize(60, 70));
        closeBtn->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/\350\257\255\351\237\263\351\200\232\350\257\235\345\217\212\350\247\206\351\242\221\351\200\232\350\257\235UI/\350\257\255\351\237\263\351\200\232\350\257\235-\346\214\202\346\226\255.png);"));

        horizontalLayout_2->addWidget(closeBtn);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(VoiceDialogWnd);

        QMetaObject::connectSlotsByName(VoiceDialogWnd);
    } // setupUi

    void retranslateUi(QWidget *VoiceDialogWnd)
    {
        VoiceDialogWnd->setWindowTitle(QCoreApplication::translate("VoiceDialogWnd", "Form", nullptr));
        label->setText(QCoreApplication::translate("VoiceDialogWnd", "XXX\350\257\267\346\261\202\351\200\232\350\257\235", nullptr));
        agreeBtn->setText(QString());
        disAgreeBtn->setText(QString());
        closeBtn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class VoiceDialogWnd: public Ui_VoiceDialogWnd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VOICEDIALOGWND_H
