#include "MyMainWindow.h"
#include "MyLogInDialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyLogInDialog* login;
    login = new MyLogInDialog();
    if(login->exec() != QDialog::Accepted){
        return 0;
    }
    MyMainWindow w;
    w.show();

    return a.exec();
}
