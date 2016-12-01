#include "MyMainWindow.h"
#include "MyTitleBar.h"
#include "MyToolBar/MyToolBar.h"
#include "MyMenuBar/MyMenuBar.h"
#include "MyPage/MyPage.h"

//#include "MyToolButton.h"
#include <QPainter>
#include <QBitmap>
#include <fstream>
#include <QDebug>

MyMainWindow::MyMainWindow()
    :QFrame()
{
    isMoving = false;

    //控件
    InitWidget();
    //布局
    InitLayout();

    //------------------------------------
    //  设置样式
    //------------------------------------
    setThisStyle();

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
        isMoving = true;
        last = e->globalPos();
    }
}

void MyMainWindow::mouseMoveEvent(QMouseEvent *e){
    if(isMoving == true){
        int dx = e->globalX() - last.x();
        int dy = e->globalY() - last.y();
        last = e->globalPos();
        move(x()+dx,y()+dy);
    }
}

void MyMainWindow::mouseReleaseEvent(QMouseEvent *e){
    if(e->y() <= 30){
        int dx = e->globalX() - last.x();
        int dy = e->globalY() - last.y();
        move(x()+dx, y()+dy);
        isMoving = false;
    }
}

void MyMainWindow::InitWidget()
{
    lpTitleBar = new MyTitleBar(this);
    lpToolBar = new MyToolBar(this);
    lpMenuBar = new MyMenuBar(this);
    lpPage = new MyPage(this);
}

void MyMainWindow::InitLayout()
{
    lpMainLayout = new QVBoxLayout(this);
    lpMainLayout->setMargin(2);
    lpMainLayout->setSpacing(0);
    lpMainLayout->addWidget(lpTitleBar);
    lpMainLayout->addWidget(lpMenuBar);
    lpMainLayout->addWidget(lpToolBar);
    lpMainLayout->addWidget(lpPage);
    this->setLayout(lpMainLayout);
}

void MyMainWindow::InitSlot()
{
    connect(lpToolBar, SIGNAL(Upload()), this, SLOT(startUploadMission()));
    connect(lpToolBar, SIGNAL(Download()), this, SLOT(startDownloadMission()));
    connect(lpToolBar, SIGNAL(Share()), this, SLOT(shareFile()));
    connect(lpToolBar, SIGNAL(Delete()), this, SLOT(deleteFile()));
    connect(lpToolBar, SIGNAL(NewDir()), this, SLOT(makeNewDir()));
    connect(lpMenuBar, SIGNAL(SwitchPage(int)), lpPage, SLOT(SetCurrentPage(int)));
}

void MyMainWindow::setWidgetStyle()
{
}

void MyMainWindow::setThisStyle()
{
    QPalette bgpal = palette();
    bgpal.setColor(QPalette::Background, QColor(14, 142, 231));
    setPalette(bgpal);

    setMinimumWidth(950);
    setMinimumHeight(600);
    setWindowFlags(Qt::FramelessWindowHint);
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
