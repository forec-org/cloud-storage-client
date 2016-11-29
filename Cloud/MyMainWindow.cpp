#include "MyMainWindow.h"
#include "MyTitleBar.h"
#include "MyToolBar/MyToolBar.h"
#include "MyMenuBar/MyMenuBar.h"
#include "MyToolButton.h"
#include <QPainter>
#include <QBitmap>
#include <fstream>
#include <QDebug>

MyMainWindow::MyMainWindow()
    :QFrame()
{
    setWindowFlags(Qt::FramelessWindowHint);
    //------------------------------------
    //  设置组件代码
    //------------------------------------

    //布局
    lpMainLayout = new QVBoxLayout(this);
    lpMainLayout->setMargin(2);
    lpMainLayout->setSpacing(0);
    //控件
    lpTitleBar = new MyTitleBar(this);
    lpToolBar = new MyToolBar(this);
    lpMenuBar = new MyMenuBar(this);

    lpExplorer = new QLabel("资源管理器界面", this);
    lpExplorer->setAlignment(Qt::AlignCenter);
    lpExplorer->setMinimumSize(950, 450);
    lpExplorer->setStyleSheet("QLabel{background:white;}");

    lpMainLayout->addWidget(lpTitleBar);
    lpMainLayout->addWidget(lpMenuBar);
    lpMainLayout->addWidget(lpToolBar);
    lpMainLayout->addWidget(lpExplorer);
    this->setLayout(lpMainLayout);
    //------------------------------------
    //  设置样式
    //------------------------------------
    QPalette bgpal = palette();
    bgpal.setColor(QPalette::Background, QColor(14, 142, 231));
    setPalette(bgpal);

    setMinimumWidth(950);
    setMinimumHeight(600);

    InitSlot();
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
    if(e->y() <= 22){
        //        qDebug() << "1" << endl;
        last = e->globalPos();
    }
}

void MyMainWindow::mouseMoveEvent(QMouseEvent *e){
//    qDebug() << "x:" << e->globalX() << " y:" <<e->globalY() << endl;
    if(e->y() <= 22){
//        qDebug() << "2" << endl;
        int dx = e->globalX() - last.x();
        int dy = e->globalY() - last.y();
        last = e->globalPos();
        move(x()+dx,y()+dy);
    }
}

void MyMainWindow::mouseReleaseEvent(QMouseEvent *e){
    if(e->y() <= 22){
//        qDebug() << "3" << endl;
        int dx = e->globalX() - last.x();
        int dy = e->globalY() - last.y();
        move(x()+dx, y()+dy);
    }

}

void MyMainWindow::InitSlot()
{
    connect(lpToolBar, SIGNAL(Upload()), this, SLOT(startUploadMission()));
    connect(lpToolBar, SIGNAL(Download()), this, SLOT(startDownloadMission()));
    connect(lpToolBar, SIGNAL(Share()), this, SLOT(shareFile()));
    connect(lpToolBar, SIGNAL(Delete()), this, SLOT(deleteFile()));
    connect(lpToolBar, SIGNAL(NewDir()), this, SLOT(makeNewDir()));
}

void MyMainWindow::setWidgetStyle()
{
}

void MyMainWindow::startDownloadMission()
{
    qDebug() << "start a new download mission" << endl;
}

void MyMainWindow::startUploadMission()
{
    qDebug() << "start a new upload mission" << endl;
}

void MyMainWindow::shareFile()
{
    qDebug() << "share a file" << endl;
}

void MyMainWindow::deleteFile()
{
    qDebug() << "delete a file" << endl;
}

void MyMainWindow::makeNewDir()
{
    qDebug() << "create a director" << endl;
}
