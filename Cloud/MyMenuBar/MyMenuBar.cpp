#include "MyMenuBar.h"
#include "MyToolButton.h"
#include "MyUserLabel.h"
#include <QDebug>

MyMenuBar::MyMenuBar(QWidget *parent) : QWidget(parent)
{
    createWidget();
    createLayout();
    setSlotConnect();
}

void MyMenuBar::createWidget()
{
//    lpUserInfo = new QLabel("用户信息", this);
//    lpUserInfo->setAlignment(Qt::AlignCenter);
//    lpUserInfo->setFixedSize(300, 120);
    lpUserInfo = new MyUserLabel(this);

    lpMainWindowButton = new MyToolButton("image/menu/cloud.png", "myCloud", this);
    lpMainWindowButton->setMinimumSize(120, 116);
    lpMainWindowButton->SetPress(true);

    lpDownloadButton = new MyToolButton("image/menu/download.png", "download", this);
    lpDownloadButton->setMinimumSize(120, 116);
    lpUploadButton = new MyToolButton("image/menu/upload.png", "upload", this);
    lpUploadButton->setMinimumSize(120, 116);
}

void MyMenuBar::createLayout()
{
    lpSwitchLayout = new QHBoxLayout(this);
    lpSwitchLayout->setContentsMargins(5, 0, 0, 0);
    lpSwitchLayout->setSpacing(0);

    lpSwitchLayout->addWidget(lpUserInfo);
    lpSwitchLayout->addStretch();
    lpSwitchLayout->addWidget(lpMainWindowButton);
    lpSwitchLayout->addWidget(lpDownloadButton);
    lpSwitchLayout->addWidget(lpUploadButton);
    this->setLayout(lpSwitchLayout);
}

void MyMenuBar::setMenuBarStyle()
{

}

void MyMenuBar::setSlotConnect()
{
    connect(lpMainWindowButton, SIGNAL(SignalParent(MyToolButton*)),
            this, SLOT(ResponseSlot(MyToolButton*)));
    connect(lpDownloadButton, SIGNAL(SignalParent(MyToolButton*)),
            this, SLOT(ResponseSlot(MyToolButton*)));
    connect(lpUploadButton, SIGNAL(SignalParent(MyToolButton*)),
            this, SLOT(ResponseSlot(MyToolButton*)));
}

void MyMenuBar::ResponseSlot(MyToolButton *b)
{
    if(b == lpMainWindowButton){
//        qDebug() << "main pushed" << endl;
        lpDownloadButton->SetPress(false);
        lpDownloadButton->update();
        lpUploadButton->SetPress(false);
        lpUploadButton->update();
    }
    else if(b == lpDownloadButton){
//        qDebug() << "down pushed" << endl;
        lpMainWindowButton->SetPress(false);
        lpMainWindowButton->update();
        lpUploadButton->SetPress(false);
        lpUploadButton->update();
    }
    else if(b == lpUploadButton){
//        qDebug() << "main pushed" << endl;
        lpMainWindowButton->SetPress(false);
        lpMainWindowButton->update();
        lpDownloadButton->SetPress(false);
        lpDownloadButton->update();
    }
}
