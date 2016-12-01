#include "MyDownloadPage.h"

MyDownloadPage::MyDownloadPage(QWidget *parent) : QWidget(parent)
{
    InitWidget();
    InitLayout();
    SetThisStyle();
}

void MyDownloadPage::InitWidget()
{
    temp = new QLabel("this is download", this);
    temp->setAlignment(Qt::AlignHCenter);
    temp->setFixedSize(950, 450);
}

void MyDownloadPage::InitLayout()
{
    lpMainLayout = new QVBoxLayout(this);
    lpMainLayout->setMargin(0);
    lpMainLayout->setSpacing(0);
    lpMainLayout->addWidget(temp);
    setLayout(lpMainLayout);
}

void MyDownloadPage::SetThisStyle()
{
    setAutoFillBackground(true);
    lpPal = new QPalette();
    lpPal->setColor(QPalette::Background, QColor(255, 255, 255));
    setPalette(*lpPal);
}

