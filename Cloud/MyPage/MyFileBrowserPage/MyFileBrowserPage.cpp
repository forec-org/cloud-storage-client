#include "MyFileBrowserPage.h"
#include "MyDirInfoBar.h"
#include "MyFileBrowser.h"

MyFileBrowserPage::MyFileBrowserPage(QWidget *parent) : QWidget(parent)
{
    InitWidget();
    InitLayout();
    SetThisStyle();
    ConnectSlot();
}

void MyFileBrowserPage::InitWidget()
{
    lpDirBar = new MyDirInfoBar(this);

//    lpScroll = new QScrollArea(this);
    lpBrowser = new MyFileBrowser(this);
//  lpScroll->setWidget(lpBrowser);
//  lpScroll->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
//  lpScroll->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
//  lpScroll->setWidgetResizable(false);
}

void MyFileBrowserPage::InitLayout()
{
    lpMainLayout = new QVBoxLayout(this);
    lpMainLayout->setMargin(0);
    lpMainLayout->setSpacing(0);

    lpMainLayout->addWidget(lpDirBar);
    lpMainLayout->addWidget(lpBrowser);
//    lpMainLayout->addWidget(lpScroll);
    setLayout(lpMainLayout);
}

void MyFileBrowserPage::SetThisStyle()
{
    setAutoFillBackground(true);
    lpPal = new QPalette();
    lpPal->setColor(QPalette::Background, QColor(255, 255, 255));
    setPalette(*lpPal);
}

void MyFileBrowserPage::ConnectSlot()
{
    connect(lpDirBar, SIGNAL(ClickedBack()), lpBrowser, SLOT(AddFile()));
    connect(lpDirBar, SIGNAL(ClickedFront()), lpBrowser, SLOT(DeleteFile()));
}

