#include "MyPage.h"
#include "MyFileBrowserPage/MyFileBrowserPage.h"
#include "MyMissionPage/MyMissionPage.h"

MyPage::MyPage(QWidget *parent) : QWidget(parent)
{
    InitWidget();
    InitLayOut();
    ConnectSlot();
}

void MyPage::InitWidget()
{
    lpFileBrowser = new MyFileBrowserPage(this);
    lpDownload = new MyMissionPage(this);
    lpUpload = new MyMissionPage(this);
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

void MyPage::ConnectSlot()
{
    //测试用
        connect(lpFileBrowser, SIGNAL(Upload(QString)), lpUpload, SLOT(AddMission(QString)));
        connect(lpFileBrowser, SIGNAL(Download(QString)), lpDownload, SLOT(AddMission(QString)));

    connect(lpFileBrowser, SIGNAL(Upload(QString)), this, SLOT(sendUploadSignal(QString)));
    connect(lpFileBrowser, SIGNAL(Download(QString)), this, SLOT(sendDownloadSignal(QString)));
    connect(lpFileBrowser, SIGNAL(Share(QString)), this, SLOT(sendShareSignal(QString)));
    connect(lpFileBrowser, SIGNAL(Delete(QString)), this, SLOT(sendDeleteSignal(QString)));
    connect(lpFileBrowser, SIGNAL(NewDir(QString)), this, SLOT(sendNewDirSignal(QString)));

    connect(lpFileBrowser, SIGNAL(Back()), this, SLOT(sendBackSignal()));
    connect(lpFileBrowser, SIGNAL(Front()), this, SLOT(sendFrontSignal()));
    connect(lpFileBrowser, SIGNAL(Refresh()), this, SLOT(sendRefreshSignal()));
    connect(lpFileBrowser, SIGNAL(Search(QString)), this, SLOT(sendSearchSignal(QString)));

    connect(lpFileBrowser, SIGNAL(Open(QString)), this, SLOT(sendEnterDirSignal(QString)));
    connect(lpFileBrowser, SIGNAL(Rename(QString,QString)), this, SLOT(SendRenameSignal(QString,QString)));
    connect(lpFileBrowser, SIGNAL(Property(QString)), this, SLOT(SendPropertySignal(QString)));
    connect(lpFileBrowser, SIGNAL(Copy(QString)), this, SLOT(SendCopySignal(QString)));
    connect(lpFileBrowser, SIGNAL(Cut(QString)), this, SLOT(SendCutSignal(QString)));
    connect(lpFileBrowser, SIGNAL(Paste()), this, SLOT(SendPasteSignal()));

    connect(lpDownload, SIGNAL(Resume(int)), this, SLOT(sendResumeD(int)));
    connect(lpDownload, SIGNAL(Suspend(int)), this, SLOT(sendSuspendD(int)));
    connect(lpDownload, SIGNAL(Cancel(int)), this, SLOT(sendCancelD(int)));
    connect(lpDownload, SIGNAL(OpenDir(int)), this, SLOT(sendOpenDirD(int)));

    connect(lpUpload, SIGNAL(Resume(int)), this, SLOT(sendResumeU(int)));
    connect(lpUpload, SIGNAL(Suspend(int)), this, SLOT(sendSuspendU(int)));
    connect(lpUpload, SIGNAL(Cancel(int)), this, SLOT(sendCancelU(int)));
    connect(lpUpload, SIGNAL(OpenDir(int)), this, SLOT(sendOpenDirU(int)));

}

void MyPage::SetCurrentPage(int n)
{
    lpStackLayout->setCurrentIndex(n);
}

void MyPage::sendDownloadSignal(QString name)
{
    emit Download(name);
}

void MyPage::sendUploadSignal(QString name)
{
    emit Upload(name);
}

void MyPage::sendShareSignal(QString name)
{
    emit Share(name);
}

void MyPage::sendBackSignal()
{
    emit Back();
}

void MyPage::sendFrontSignal()
{
    emit Front();
}

void MyPage::sendRefreshSignal()
{
    emit Refresh();
}

void MyPage::sendSearchSignal(QString name)
{
    emit Search(name);
}

void MyPage::sendEnterDirSignal(QString name)
{
    emit EnterDir(name);
}

void MyPage::SendRenameSignal(QString oldn, QString newn)
{
    emit Rename(oldn, newn);
}

void MyPage::SendPropertySignal(QString name)
{
    emit Property(name);
}

void MyPage::SendCopySignal(QString name)
{
    emit Copy(name);
}

void MyPage::SendCutSignal(QString name)
{
    emit Cut(name);
}

void MyPage::SendPasteSignal()
{
    emit Paste();
}

void MyPage::sendSuspendD(int n)
{
    emit SuspendD(n);
}

void MyPage::sendResumeD(int n)
{
    emit ResumeD(n);
}

void MyPage::sendCancelD(int n)
{
    emit CancelD(n);
}

void MyPage::sendOpenDirD(int n)
{
    emit OpenDirD(n);
}

void MyPage::sendSuspendU(int n)
{
    emit SuspendU(n);
}

void MyPage::sendResumeU(int n)
{
    emit ResumeU(n);
}

void MyPage::sendCancelU(int n)
{
    emit CancelU(n);
}

void MyPage::sendOpenDirU(int n)
{
    emit OpenDirU(n);
}

void MyPage::sendDeleteSignal(QString name)
{
    emit Delete(name);
}

void MyPage::sendNewDirSignal(QString name)
{
    emit NewDir(name);
}
