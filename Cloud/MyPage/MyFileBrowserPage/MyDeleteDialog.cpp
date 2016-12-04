#include "MyDeleteDialog.h"

MyDeleteDialog::MyDeleteDialog(QWidget *parent)
    :QDialog(parent)
{
    lpHint = new QLabel(this);
    lpOk = new QPushButton("确定", this);
    lpOk->setMinimumHeight(40);
    lpCancel = new QPushButton("取消", this);
    lpCancel->setMinimumHeight(40);

    lpMainLayout = new QVBoxLayout(this);
    lpSubLayout = new QHBoxLayout(this);
    lpSubLayout->addWidget(lpOk);
    lpSubLayout->addWidget(lpCancel);
    lpMainLayout->addWidget(lpHint);
    lpMainLayout->addLayout(lpSubLayout);
    setLayout(lpMainLayout);

    setStyleSheet("QDialog{background-color:rgb(240, 240, 240);}"
                  "QPushButton{background-color:rgb(20, 166, 252);"
                  "color: rgb(100, 100, 100);"
                  "border-style: outset;"
                  "border-width: 0px;}"
                  "QPushButton:hover{background-color: rgb(232, 255, 252)}"
                  "QWidget{color:rgb(100, 100, 100)}");
    setWindowFlags(Qt::FramelessWindowHint);

    setModal(true);
    setGeometry(200, 200, 400, 100);
    connect(lpOk, SIGNAL(clicked(bool)), this, SLOT(accept()));
    connect(lpCancel, SIGNAL(clicked(bool)), this, SLOT(close()));
}

void MyDeleteDialog::SetHint(QString name)
{
    QString hint = "确定要删除文件";
    hint += name + "吗？";
    lpHint->setText(hint);
}
