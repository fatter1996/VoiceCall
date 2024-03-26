/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *IPEdit;
    QLineEdit *portEdit;
    QPushButton *callButton;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(390, 147);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(80, 24));
        label->setMaximumSize(QSize(80, 24));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(11);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(80, 24));
        label_2->setMaximumSize(QSize(80, 24));
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        IPEdit = new QLineEdit(centralwidget);
        IPEdit->setObjectName(QString::fromUtf8("IPEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(IPEdit->sizePolicy().hasHeightForWidth());
        IPEdit->setSizePolicy(sizePolicy);
        IPEdit->setMinimumSize(QSize(120, 24));
        IPEdit->setMaximumSize(QSize(120, 24));

        gridLayout->addWidget(IPEdit, 0, 1, 1, 1);

        portEdit = new QLineEdit(centralwidget);
        portEdit->setObjectName(QString::fromUtf8("portEdit"));
        portEdit->setMinimumSize(QSize(120, 24));
        portEdit->setMaximumSize(QSize(120, 24));

        gridLayout->addWidget(portEdit, 1, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        callButton = new QPushButton(centralwidget);
        callButton->setObjectName(QString::fromUtf8("callButton"));
        callButton->setMinimumSize(QSize(80, 80));
        callButton->setMaximumSize(QSize(80, 80));

        horizontalLayout->addWidget(callButton);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 390, 22));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\345\257\271\346\226\271IP", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\345\257\271\346\226\271\347\253\257\345\217\243", nullptr));
        callButton->setText(QCoreApplication::translate("MainWindow", "\345\221\274\345\217\253", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
