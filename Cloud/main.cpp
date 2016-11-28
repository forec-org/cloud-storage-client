#include "mainwindow.h"
#include "MyMainWindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    MainWindow w;
//    w.show();
    MyMainWindow w;
    w.show();

    return a.exec();
}
