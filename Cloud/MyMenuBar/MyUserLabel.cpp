#include "MyUserLabel.h"

MyUserLabel::MyUserLabel(QWidget *parent) : QWidget(parent)
{
    InitWidget();
    InitLayout();
    SetWidgetStyle();
}

void MyUserLabel::InitWidget(){
    lpUserProfilePic = new QLabel(this);
    QPixmap* pixmap = new QPixmap(100, 100);
    pixmap->load("image/menu/test.png");
    lpUserProfilePic->setPixmap(*pixmap);

    lpUsername = new QLabel(this);
    lpUsername->setText("non1996");

    lpNetCapacity = new QProgressBar(this);
    lpNetCapacity->setRange(0, 100);
    lpNetCapacity->setValue(20);
}

void MyUserLabel::InitLayout(){
    lpHLayout = new QHBoxLayout(this);
    lpVLayout = new QVBoxLayout(this);

    lpVLayout->addWidget(lpUsername);
    lpVLayout->addWidget(lpNetCapacity);

    lpHLayout->addWidget(lpUserProfilePic);
    lpHLayout->addLayout(lpVLayout);

    setLayout(lpHLayout);
}

void MyUserLabel::SetWidgetStyle(){
    lpUserProfilePic->setFixedSize(100, 100);
    lpUserProfilePic->setScaledContents(true);
    lpUsername->setMinimumSize(100, 20);
    lpNetCapacity->setMinimumSize(100, 20);
}
