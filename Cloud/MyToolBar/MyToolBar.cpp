#include "MyToolBar.h"
#include "MyToolButton.h"
#include <QBitmap>
#include <QPainter>
#include <QDebug>
MyToolBar::MyToolBar(QWidget *parent) : QWidget(parent)
{
    createWidget();
    createLayout();
    setToolBarStyle();
    setButtonStyle();
    setSlotConnect();
}

void MyToolBar::setSlotConnect()
{
    connect(lpDownload, SIGNAL(clicked(bool)), this, SLOT(clickedDownload()));
    connect(lpUpload, SIGNAL(clicked(bool)), this, SLOT(clickedUpload()));
    connect(lpShare, SIGNAL(clicked(bool)), this, SLOT(clickedShare()));
    connect(lpDelete, SIGNAL(clicked(bool)), this, SLOT(clickedDelete()));
    connect(lpNewDir, SIGNAL(clicked(bool)), this, SLOT(clickedNewDir()));
}

void MyToolBar::createWidget()
{
    lpUpload = new QPushButton("上传", this);
    lpDownload = new QPushButton("下载", this);
    lpShare = new QPushButton("共享", this);
    lpDelete = new QPushButton("删除", this);
    lpNewDir = new QPushButton("新建文件夹", this);

    lpUpload->setFixedSize(100, 40);
    lpDownload->setFixedSize(100, 40);
    lpShare->setFixedSize(100, 40);
    lpDelete->setFixedSize(100, 40);
    lpNewDir->setFixedSize(100, 40);
}

void MyToolBar::createLayout()
{
    lpLayout = new QHBoxLayout(this);

    lpLayout->setMargin(0);
    lpLayout->setSpacing(0);

    lpLayout->addWidget(lpUpload);
    lpLayout->addWidget(lpDownload);
    lpLayout->addWidget(lpShare);
    lpLayout->addWidget(lpDelete);
    lpLayout->addWidget(lpNewDir);
    lpLayout->addStretch();
    this->setLayout(lpLayout);
}

void MyToolBar::setToolBarStyle()
{
    setAutoFillBackground(true);
    lpPal = new QPalette();
    lpPal->setColor(QPalette::Background, QColor(236, 242, 247));
    setPalette(*lpPal);
    setMinimumSize(850, 40);
}

void MyToolBar::setButtonStyle()
{
    setStyleSheet( "QPushButton{background-color: rgb(236, 242, 247);"
                   "color: rgb(100, 100, 100);"
                   "border-style: outset;"
                   "border-width: 0px;"
                   "border-color: beige;"
                   "font: bold 14px;"
                   "padding: 6px;"
                   "text-align: center;}"
                   "QPushButton:hover{background-color: rgb(223, 238, 242)}");
}

void MyToolBar::clickedUpload(){
    emit Upload();
}

void MyToolBar::clickedDownload(){
    emit Download();
}

void MyToolBar::clickedShare(){
    emit Share();
}

void MyToolBar::clickedDelete(){
    emit Delete();
}

void MyToolBar::clickedNewDir(){
    emit NewDir();
}
