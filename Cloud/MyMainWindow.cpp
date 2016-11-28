#include "MyMainWindow.h"
#include "MyTitleBar.h"
#include "MyToolButton.h"
#include <QPainter>
#include <QBitmap>
#include <fstream>
MyMainWindow::MyMainWindow()
    :QFrame()
{
    setWindowFlags(Qt::FramelessWindowHint);
    //------------------------------------
    //  设置组件代码
    //------------------------------------
        
    //布局
    lpMainLayout = new QVBoxLayout(this);
    lpSwitchLayout = new QHBoxLayout(this);
    //lpSwitchLayout->setMargin(0);
    lpToolLayout = new QHBoxLayout(this);
    lpExplorerLayout = new QHBoxLayout(this);

    //控件
    lpTitleBar = new MyTitleBar(this);

    lpMainWindowButton = new MyToolButton("cloud.png", "myCloud", this);
    lpMainWindowButton->setMinimumSize(100, 100);
    lpDownloadButton = new MyToolButton("download.png", "download", this);
    lpDownloadButton->setMinimumSize(100, 100);
    lpUploadButton = new MyToolButton("upload.png", "upload", this);
    lpUploadButton->setMinimumSize(100, 100);

    lpSwitchLayout->addStretch();
    lpSwitchLayout->addWidget(lpMainWindowButton);
    lpSwitchLayout->setSpacing(0);
    lpSwitchLayout->addWidget(lpDownloadButton);
    lpSwitchLayout->setSpacing(0);
    lpSwitchLayout->addWidget(lpUploadButton);
    lpSwitchLayout->addStretch();

    lpUpload = new QPushButton("upload", this);
    lpDownload = new QPushButton("download", this);
    lpShare = new QPushButton("share", this);
    lpDelete = new QPushButton("delete", this);
    lpNewDir = new QPushButton("new director", this);

    //lpToolLayout->addStretch();
    lpToolLayout->addWidget(lpUpload);
    lpSwitchLayout->setSpacing(0);
    lpToolLayout->addWidget(lpDownload);
    lpSwitchLayout->setSpacing(0);
    lpToolLayout->addWidget(lpShare);
    lpSwitchLayout->setSpacing(0);
    lpToolLayout->addWidget(lpDelete);
    lpSwitchLayout->setSpacing(0);
    lpToolLayout->addWidget(lpNewDir);
    lpToolLayout->addStretch();

    lpExplorer = new QLabel("资源管理器界面", this);
    lpExplorer->setFixedSize(850, 450);
    lpExplorer->setStyleSheet("QLabel{background:white;}");

    lpExplorerLayout->addWidget(lpExplorer);

    lpMainLayout->addWidget(lpTitleBar);
    lpMainLayout->addLayout(lpSwitchLayout);
    lpMainLayout->addLayout(lpToolLayout);
    lpMainLayout->addLayout(lpExplorerLayout);
    this->setLayout(lpMainLayout);
    //------------------------------------
    //  设置样式
    //------------------------------------
    setMinimumWidth(850);
    setMinimumHeight(600);
}

void MyMainWindow::paintEvent(QPaintEvent *event)
{
    QBitmap bitmap(size());
    QPainter painter(&bitmap);

    painter.fillRect(rect(), Qt::white);
    painter.setBrush(QColor(0, 0, 0));
    painter.drawRoundedRect(this->rect(), 10, 10);
    setMask(bitmap);
}

void MyMainWindow::mousePressEvent(QMouseEvent *e){
    last = e->globalPos();
}

void MyMainWindow::mouseMoveEvent(QMouseEvent *e){
    int dx = e->globalX() - last.x();
    int dy = e->globalY() - last.y();
    last = e->globalPos();
    move(x()+dx,y()+dy);
}

void MyMainWindow::mouseReleaseEvent(QMouseEvent *e){
    int dx = e->globalX() - last.x();
    int dy = e->globalY() - last.y();
    move(x()+dx, y()+dy);
}

void MyMainWindow::setWidgetStyle()
{
    lpDownloadButton->setStyleSheet(   "QPushButton{background-color: rgb(220, 220, 220);"
                                       "color: rgb(0, 0, 0);"
                                       "border-style: outset;"
                                       "border-width: 1px;"
                                       "border-color: beige;"
                                       "font: bold 14px;"
                                       "padding: 6px;"
                                       "text-align: center;}"
                                       "QPushButton:hover{background-color: rgb(240, 240, 240)}");
    
}
