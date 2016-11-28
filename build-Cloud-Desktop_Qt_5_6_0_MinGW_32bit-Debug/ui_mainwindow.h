/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *minimize;
    QPushButton *close;
    QPushButton *maximize;
    QPushButton *mainWindow;
    QPushButton *downloadWindow;
    QPushButton *uploadWindow;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QLineEdit *lineEdit;
    QPushButton *pushButton_9;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1024, 600);
        MainWindow->setMinimumSize(QSize(1024, 600));
        MainWindow->setMaximumSize(QSize(1024, 600));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        minimize = new QPushButton(centralWidget);
        minimize->setObjectName(QStringLiteral("minimize"));
        minimize->setGeometry(QRect(790, 0, 75, 23));
        close = new QPushButton(centralWidget);
        close->setObjectName(QStringLiteral("close"));
        close->setGeometry(QRect(950, 0, 75, 23));
        maximize = new QPushButton(centralWidget);
        maximize->setObjectName(QStringLiteral("maximize"));
        maximize->setGeometry(QRect(870, 0, 75, 23));
        mainWindow = new QPushButton(centralWidget);
        mainWindow->setObjectName(QStringLiteral("mainWindow"));
        mainWindow->setGeometry(QRect(20, 20, 100, 100));
        downloadWindow = new QPushButton(centralWidget);
        downloadWindow->setObjectName(QStringLiteral("downloadWindow"));
        downloadWindow->setGeometry(QRect(130, 20, 100, 100));
        uploadWindow = new QPushButton(centralWidget);
        uploadWindow->setObjectName(QStringLiteral("uploadWindow"));
        uploadWindow->setGeometry(QRect(240, 20, 100, 100));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 150, 81, 31));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(110, 150, 81, 31));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(200, 150, 81, 31));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(290, 150, 81, 31));
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(380, 150, 81, 31));
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(20, 200, 31, 31));
        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(60, 200, 31, 31));
        pushButton_8 = new QPushButton(centralWidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(120, 200, 31, 31));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(650, 200, 251, 31));
        pushButton_9 = new QPushButton(centralWidget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(910, 200, 31, 31));
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        minimize->setText(QString());
        close->setText(QString());
        maximize->setText(QString());
        mainWindow->setText(QApplication::translate("MainWindow", "main", 0));
        downloadWindow->setText(QApplication::translate("MainWindow", "download", 0));
        uploadWindow->setText(QApplication::translate("MainWindow", "upload", 0));
        pushButton->setText(QApplication::translate("MainWindow", "download", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "upload", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "share", 0));
        pushButton_4->setText(QApplication::translate("MainWindow", "delete", 0));
        pushButton_5->setText(QApplication::translate("MainWindow", "new direct", 0));
        pushButton_6->setText(QString());
        pushButton_7->setText(QString());
        pushButton_8->setText(QString());
        pushButton_9->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
