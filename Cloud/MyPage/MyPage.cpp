#include "MyPage.h"
#include "MyFileBrowserPage/MyFileBrowserPage.h"
#include "MyDownloadPage/MyDownloadPage.h"
#include "MyUploadPage/MyUploadPage.h"

MyPage::MyPage(QWidget *parent) : QWidget(parent)
{
    InitWidget();
    InitLayOut();
}

void MyPage::InitWidget()
{
    lpFileBrowser = new MyFileBrowserPage(this);
    lpDownload = new MyDownloadPage(this);
    lpUpload = new MyUploadPage(this);
}

void MyPage::InitLayOut()
{
    lpMainLayout = new QVBoxLayout(this);
    lpStackLayout = new QStackedLayout(this);
    lpMainLayout->setMargin(0);
    lpMainLayout->setSpacing(0);

    lpStackLayout->addWidget(lpFileBrowser);
    lpStackLayout->addWidget(lpDownload);
    lpStackLayout->addWidget(lpUpload);

    lpMainLayout->addLayout(lpStackLayout);
    setLayout(lpMainLayout);
}

void MyPage::SetCurrentPage(int n)
{
    lpStackLayout->setCurrentIndex(n);
}
