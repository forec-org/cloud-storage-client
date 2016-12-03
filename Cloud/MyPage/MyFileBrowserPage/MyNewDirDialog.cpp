#include "MyNewDirDialog.h"

#include <QBitmap>
#include <QPainter>

MyNewDirDialog::MyNewDirDialog(QWidget *parent)
    :QDialog(parent)
{
    InitWidget();
    InitLayout();
    SetThisStyle();
    ConnectSlot();
}

void MyNewDirDialog::Clean()
{
    lpNameInput->clear();
}

void MyNewDirDialog::paintEvent(QPaintEvent *event)
{
    QBitmap bitmap(size());
    QPainter painter(&bitmap);

    painter.fillRect(rect(), Qt::white);
    painter.setBrush(QColor(0, 0, 0));
    painter.drawRoundedRect(this->rect(), 10, 10);
    setMask(bitmap);
}

void MyNewDirDialog::InitWidget(){
    lpOK = new QPushButton("确定", this);
    lpOK->setMinimumSize(30, 20);
    lpCancel = new QPushButton("取消", this);
    lpCancel->setMinimumSize(30, 20);
    lpNameInput = new QLineEdit(this);
    lpHint = new QLabel("输入文件名", this);
    lpFalse = new QLabel(this);
}

void MyNewDirDialog::InitLayout()
{
    lpMainLayout = new QVBoxLayout(this);
    lpSubLayout = new QHBoxLayout(this);

    lpMainLayout->addWidget(lpHint);
    lpMainLayout->addWidget(lpNameInput);
//    lpMainLayout->addWidget(lpFalse);
    lpSubLayout->setMargin(0);
    lpSubLayout->addWidget(lpFalse);
    lpSubLayout->addStretch();
    lpSubLayout->addWidget(lpOK);
    lpSubLayout->addWidget(lpCancel);

    lpMainLayout->addLayout(lpSubLayout);
    setLayout(lpMainLayout);
}

void MyNewDirDialog::SetThisStyle()
{
    setStyleSheet("QDialog{background-color:rgb(240, 240, 240);}"
                  "QPushButton{background-color:rgb(20, 166, 252);"
                  "color: rgb(100, 100, 100);"
                  "border-style: outset;"
                  "border-width: 0px;}"
                  "QPushButton:hover{background-color: rgb(232, 255, 252)}"
                  "QWidget{color:rgb(100, 100, 100)}");
    setGeometry(100, 100, 300, 100);
    setWindowFlags(Qt::FramelessWindowHint);
    hide();
}

void MyNewDirDialog::ConnectSlot()
{
    connect(lpOK, SIGNAL(clicked(bool)), this, SLOT(pressOk()));
    connect(lpCancel, SIGNAL(clicked(bool)), this, SLOT(close()));
}

void MyNewDirDialog::pressOk()
{
    if(lpNameInput->text().isEmpty()){
        lpFalse->setText("文件夹名不能为空");
        return;
    }
    if(lpNameInput->text().lastIndexOf('+') != -1){
        lpFalse->setText("文件夹名中不能含有'+'");
        return;
    }
    emit GetDirName(lpNameInput->text());
    close();
}

