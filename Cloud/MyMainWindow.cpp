#include "MyMainWindow.h"
#include "MyTitleBar.h"
#include "MyMenuBar/MyMenuBar.h"
#include "MyPage/MyPage.h"
#include "MyPasteErrorHint.h"

#include <QTimer>
#include <QPainter>
#include <QBitmap>
#include <fstream>
#include <QDebug>
#include <QDialog>
#include <QProcess>
#include <QDir>

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
    lpMenuBar = new MyMenuBar(this);
    lpPage = new MyPage(this);
    lpError = new MyPasteErrorHint(this);
}

void MyMainWindow::InitLayout()
{
    lpMainLayout = new QVBoxLayout(this);
    lpMainLayout->setMargin(2);
    lpMainLayout->setSpacing(0);
    lpMainLayout->addWidget(lpTitleBar);
    lpMainLayout->addWidget(lpMenuBar);
    lpMainLayout->addWidget(lpPage);
    this->setLayout(lpMainLayout);
}

void MyMainWindow::InitSlot()
{
    connect(lpMenuBar, SIGNAL(SwitchPage(int)), lpPage, SLOT(SetCurrentPage(int)));

    connect(lpPage, SIGNAL(Download(QString)), this, SLOT(startDownloadMission(QString)));
    connect(lpPage, SIGNAL(Upload(QString)), this, SLOT(startUploadMission(QString)));
    connect(lpPage, SIGNAL(Share(QString)), this, SLOT(shareFile(QString)));
    connect(lpPage, SIGNAL(Delete(QString)), this, SLOT(deleteFile(QString)));
    connect(lpPage, SIGNAL(NewDir(QString)), this, SLOT(makeNewDir(QString)));

    connect(lpPage, SIGNAL(Back()), this, SLOT(toUpperDir()));
    connect(lpPage, SIGNAL(Front()), this, SLOT(toBeforeDir()));
    connect(lpPage, SIGNAL(Refresh()), this, SLOT(refreshDir()));
    connect(lpPage, SIGNAL(Search(QString)), this, SLOT(searchFile(QString)));

    connect(lpPage, SIGNAL(EnterDir(QString)), this, SLOT(enterDir(QString)));
    connect(lpPage, SIGNAL(Rename(QString,QString)), this, SLOT(renameFile(QString,QString)));
    connect(lpPage, SIGNAL(Property(QString)), this, SLOT(getProperty(QString)));
    connect(lpPage, SIGNAL(Copy(QString)), this, SLOT(copy(QString)));
    connect(lpPage, SIGNAL(Cut(QString)), this, SLOT(cut(QString)));
    connect(lpPage, SIGNAL(Paste()), this, SLOT(paste()));

    connect(lpPage, SIGNAL(SuspendD(int)), this, SLOT(suspendD(int)));
    connect(lpPage, SIGNAL(ResumeD(int)), this, SLOT(resumeD(int)));
    connect(lpPage, SIGNAL(CancelD(int)), this, SLOT(cancelD(int)));
    connect(lpPage, SIGNAL(OpenDirD(int)), this, SLOT(openDirD(int)));
    connect(lpPage, SIGNAL(SuspendU(int)), this, SLOT(suspendU(int)));
    connect(lpPage, SIGNAL(ResumeU(int)), this, SLOT(resumeU(int)));
    connect(lpPage, SIGNAL(CancelU(int)), this, SLOT(cancelU(int)));
    connect(lpPage, SIGNAL(OpenDirU(int)), this, SLOT(openDirU(int)));
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

void MyMainWindow::startDownloadMission(QString name)
{
    qDebug() << "start a new download mission"
             << name << endl;
}

void MyMainWindow::startUploadMission(QString name)
{
    qDebug() << "start a new upload mission"
             << name << endl;
}

void MyMainWindow::shareFile(QString name)
{
    qDebug() << "share a file"
             << name << endl;
}

void MyMainWindow::deleteFile(QString name)
{
    qDebug() << "delete a file"
             << name << endl;
}

void MyMainWindow::makeNewDir(QString name)
{
    qDebug() << "create a director"
             << name << endl;
}

void MyMainWindow::toUpperDir()
{
    qDebug() << "to upper director" << endl;
}

void MyMainWindow::toBeforeDir()
{
    qDebug() << "to before director" << endl;
}

void MyMainWindow::refreshDir()
{
    qDebug() << "refresh current director" << endl;
}

void MyMainWindow::searchFile(QString name)
{
    qDebug() << "search file " << name << endl;
}

void MyMainWindow::enterDir(QString name)
{
    qDebug() << "enter: " << name << endl;
}

void MyMainWindow::renameFile(QString oldn, QString newn)
{
    qDebug() << "rename " << oldn
             << " to new name: " << newn << endl;
}

void MyMainWindow::getProperty(QString name)
{
    qDebug() << "get file " << name << "'s property" << endl;
}

void MyMainWindow::copy(QString name)
{
    qDebug() << "copy " << name << endl;
}

void MyMainWindow::cut(QString name)
{
    qDebug() << "Cut " << name << endl;
}

void MyMainWindow::paste()
{
    lpError->show();
    QTimer::singleShot(2000, lpError, SLOT(hide()));
    qDebug() << "paste " << endl;
}

void MyMainWindow::suspendD(int n)
{
    qDebug() << "suspend download thread " << n << endl;
}

void MyMainWindow::resumeD(int n)
{
    qDebug() << "resume download thread " << n << endl;
}

void MyMainWindow::cancelD(int n)
{
    qDebug() << "cancel download thread " << n << endl;
}

void MyMainWindow::openDirD(int n)
{
    qDebug() << "open director d" << n << endl;
}

void MyMainWindow::suspendU(int n)
{
    qDebug() << "suspend upload thread " << n << endl;
}

void MyMainWindow::resumeU(int n)
{
    qDebug() << "resume upload thread " << n << endl;
}

void MyMainWindow::cancelU(int n)
{
    qDebug() << "cancel upload thread " << n << endl;
}

void MyMainWindow::openDirU(int n)
{
//    QString path=QDir::currentPath();
//    path.replace("/", "\\");
    QString path = "D:\\";
    QProcess::startDetached("explorer "+path);
    qDebug() << "open director u" << n << endl;
}
