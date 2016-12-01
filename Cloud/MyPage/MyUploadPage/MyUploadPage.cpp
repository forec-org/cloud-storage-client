#include "MyUploadPage.h"

MyUploadPage::MyUploadPage(QWidget *parent) : QWidget(parent)
{
    InitWidget();
    InitLayout();
    SetThisStyle();
}

void MyUploadPage::InitWidget()
{
    temp = new QLabel("this is upload", this);
    temp->setAlignment(Qt::AlignHCenter);
    temp->setFixedSize(950, 450);
}

void MyUploadPage::InitLayout()
{
    lpMainLayout = new QVBoxLayout(this);
    lpMainLayout->setMargin(0);
    lpMainLayout->setSpacing(0);
    lpMainLayout->addWidget(temp);
    setLayout(lpMainLayout);
}

void MyUploadPage::SetThisStyle()
{
    setAutoFillBackground(true);
    lpPal = new QPalette();
    lpPal->setColor(QPalette::Background, QColor(255, 255, 255));
    setPalette(*lpPal);
}
