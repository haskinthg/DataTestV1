/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pers_button;
    QPushButton *geo_button;
    QPushButton *org_button;
    QPushButton *fin_button;
    QLabel *pole_label;
    QLineEdit *selectFile;
    QLabel *label_4;
    QPushButton *generate_button;
    QLabel *label_5;
    QLineEdit *selectCount;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(690, 393);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 141, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 50, 131, 16));
        pers_button = new QPushButton(centralwidget);
        pers_button->setObjectName(QString::fromUtf8("pers_button"));
        pers_button->setGeometry(QRect(170, 10, 111, 28));
        geo_button = new QPushButton(centralwidget);
        geo_button->setObjectName(QString::fromUtf8("geo_button"));
        geo_button->setGeometry(QRect(290, 10, 111, 28));
        org_button = new QPushButton(centralwidget);
        org_button->setObjectName(QString::fromUtf8("org_button"));
        org_button->setGeometry(QRect(420, 10, 131, 28));
        fin_button = new QPushButton(centralwidget);
        fin_button->setObjectName(QString::fromUtf8("fin_button"));
        fin_button->setGeometry(QRect(570, 10, 93, 28));
        pole_label = new QLabel(centralwidget);
        pole_label->setObjectName(QString::fromUtf8("pole_label"));
        pole_label->setGeometry(QRect(180, 50, 581, 16));
        selectFile = new QLineEdit(centralwidget);
        selectFile->setObjectName(QString::fromUtf8("selectFile"));
        selectFile->setGeometry(QRect(170, 120, 113, 22));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 120, 141, 16));
        generate_button = new QPushButton(centralwidget);
        generate_button->setObjectName(QString::fromUtf8("generate_button"));
        generate_button->setEnabled(false);
        generate_button->setGeometry(QRect(270, 290, 121, 28));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 190, 131, 16));
        selectCount = new QLineEdit(centralwidget);
        selectCount->setObjectName(QString::fromUtf8("selectCount"));
        selectCount->setGeometry(QRect(160, 190, 113, 22));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 690, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \321\202\320\270\320\277 \320\264\320\260\320\275\320\275\321\213\321\205:", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\273\321\217 \320\264\320\273\321\217 \320\263\320\265\320\275\320\265\321\200\320\260\321\206\320\270\320\270:", nullptr));
        pers_button->setText(QApplication::translate("MainWindow", "\320\237\320\265\321\200\321\201\320\276\320\275\320\260\320\273\321\214\320\275\321\213\320\265", nullptr));
        geo_button->setText(QApplication::translate("MainWindow", "\320\223\320\265\320\276\320\263\321\200\320\260\321\204\320\270\321\207\320\265\321\201\320\272\320\270\320\265", nullptr));
        org_button->setText(QApplication::translate("MainWindow", "\320\236\321\200\320\263\320\260\320\275\320\270\320\267\320\260\321\206\320\270\320\276\320\275\320\275\321\213\320\265", nullptr));
        fin_button->setText(QApplication::translate("MainWindow", "\320\244\320\270\320\275\320\260\320\275\321\201\320\276\320\262\321\213\320\265", nullptr));
        pole_label->setText(QString());
        selectFile->setText(QApplication::translate("MainWindow", "file.txt", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273 \320\264\320\273\321\217 \321\201\320\276\321\205\321\200\320\260\320\275\320\265\320\275\320\270\321\217", nullptr));
        generate_button->setText(QApplication::translate("MainWindow", "\320\223\320\265\320\275\320\265\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\264\320\260\320\275\320\275\321\213\321\205:", nullptr));
        selectCount->setText(QApplication::translate("MainWindow", "1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
