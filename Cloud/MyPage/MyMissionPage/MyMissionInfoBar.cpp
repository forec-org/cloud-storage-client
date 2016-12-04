#include "MyMissionInfoBar.h"

MyMissionInfoBar::MyMissionInfoBar(QWidget *parent) : QWidget(parent)
{
    InitWidgetDefault();
    InitInfo();
    InitLayout();
    SetThisStyle();
    SetWidgetStyle();
}

void MyMissionInfoBar::SetName(QString name)
{
    lpFileName->setText(name);
}

void MyMissionInfoBar::SetProgress(float progress)
{
    lpProgress->setValue(100 * progress);
}

void MyMissionInfoBar::InitWidgetDefault()
{
    lpFileIcon = new QLabel(this);
    lpFileName = new QLabel("default", this);
    lpProgress = new QProgressBar(this);
    lpResumeOrSuspend = new QPushButton("暂停", this);
    lpCancel = new QPushButton("取消", this);
    lpDir = new QPushButton("打开文件夹", this);
}

void MyMissionInfoBar::InitInfo()
{
    currentSize = 0;
    maxSize = 0;
//    progress = 0;
}

void MyMissionInfoBar::InitLayout()
{
    lpMainLayout = new QHBoxLayout(this);
    lpMainLayout->setMargin(0);
    lpMainLayout->setSpacing(10);

    lpMainLayout->addWidget(lpFileIcon);
    lpMainLayout->addWidget(lpFileName);
    lpMainLayout->addStretch();
    lpMainLayout->addWidget(lpProgress);
    lpMainLayout->addWidget(lpResumeOrSuspend);
    lpMainLayout->addWidget(lpCancel);
    lpMainLayout->addWidget(lpDir);
    setLayout(lpMainLayout);
}

void MyMissionInfoBar::SetThisStyle()
{
    setMinimumSize(920, 80);
}

void MyMissionInfoBar::SetWidgetStyle()
{
    lpFileIcon->setFixedSize(35, 35);
    lpFileName->setMinimumSize(100, 35);
    lpFileName->setAlignment(Qt::AlignCenter);
    lpResumeOrSuspend->setFixedSize(35, 35);
    lpCancel->setFixedSize(35, 35);
    lpDir->setFixedSize(100, 35);
    lpProgress->setRange(0, 100);
    lpProgress->setValue(10);
    lpFileName->setStyleSheet("QLabel{color:rgb(100, 100, 100);}");
    lpProgress->setStyleSheet("QProgressBar{border:1px solid #DDDDDD;"
                              "height:30;"
                              "background: rgb(240, 240, 240);"
                              "text-align:center;"
                              "color:rgb(100, 100, 100);"
                              "border-radius:10px;}"
                              "QProgressBar::chunk{"
                              "border-top-left-radius: 10px;"
                              "border-bottom-left-radius: 10px;"
                              "border-top-right-radius: 10px;"
                              "border-bottom-right-radius: 10px;"
                              "background-color:skyblue;}"
                              );
    setStyleSheet("QPushButton{background-color: white;"
                  "border: 1px solid #DDDDDD;"
                  "color: rgb(100, 100, 100);}"
                  "QPushButton:hover{background-color:rgb(230, 230, 230);}");
}
