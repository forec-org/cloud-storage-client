#include "MyLogInDialog.h"
#include <QDebug>
MyLogInDialog::MyLogInDialog(QWidget* parent)
    :QDialog(parent)
{
    lpU = new QLabel("用户名", this);
    lpU->setMinimumWidth(40);
    lpP = new QLabel("密码", this);
    lpP->setMinimumWidth(40);
    lpUsername = new QLineEdit(this);
    lpUsername->setPlaceholderText("输入用户名");
    lpPassword = new QLineEdit(this);
    lpPassword->setPlaceholderText("输入密码");
    lpPassword->setEchoMode(QLineEdit::Password);

    lpLogIn = new QPushButton("登陆", this);
    lpCancel = new QPushButton("取消", this);

    lpMainLayout = new QVBoxLayout(this);
    lpSubLayout1 = new QHBoxLayout(this);
    lpSubLayout2 = new QHBoxLayout(this);
    lpSubLayout3 = new QHBoxLayout(this);

    lpMainLayout->addLayout(lpSubLayout1);
    lpMainLayout->addLayout(lpSubLayout2);
    lpMainLayout->addLayout(lpSubLayout3);

    lpSubLayout1->addWidget(lpU);
    lpSubLayout1->addWidget(lpUsername);
    lpSubLayout2->addWidget(lpP);
    lpSubLayout2->addWidget(lpPassword);
    lpSubLayout3->addWidget(lpLogIn);
    lpSubLayout3->addWidget(lpCancel);
    setLayout(lpMainLayout);

    connect(lpLogIn, SIGNAL(clicked(bool)), this, SLOT(ok()));
    connect(lpCancel, SIGNAL(clicked(bool)), this, SLOT(cancel()));
}

void MyLogInDialog::ok()
{
    accept();
}

void MyLogInDialog::cancel()
{
    close();
}
