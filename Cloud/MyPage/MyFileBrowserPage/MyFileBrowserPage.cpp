#include "MyFileBrowserPage.h"
#include "MyFBToolBar.h"
#include "MyDirInfoBar.h"
#include "MyFileBrowser.h"
#include "MyNewDirDialog.h"
#include <QFileDialog>
#include <QDebug>

MyFileBrowserPage::MyFileBrowserPage(QWidget *parent) : QWidget(parent)
{
    InitWidget();
    InitLayout();
    SetThisStyle();
    ConnectSlot();
}

void MyFileBrowserPage::InitWidget()
{
    lpToolBar = new MyFBToolBar(this);
    lpDirBar = new MyDirInfoBar(this);
    lpBrowser = new MyFileBrowser(this);
    lpDialog = new MyNewDirDialog(this);
}

void MyFileBrowserPage::InitLayout()
{
    lpMainLayout = new QVBoxLayout(this);
    lpMainLayout->setMargin(0);
    lpMainLayout->setSpacing(0);

    lpMainLayout->addWidget(lpToolBar);
    lpMainLayout->addWidget(lpDirBar);
    lpMainLayout->addWidget(lpBrowser);
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
    //实际使用
    connect(lpToolBar, SIGNAL(Upload()), this, SLOT(clickedUpload()));
    connect(lpToolBar, SIGNAL(Download()), this, SLOT(clickedDownload()));
    connect(lpToolBar, SIGNAL(Share()), this, SLOT(clickedShare()));
    connect(lpToolBar, SIGNAL(Delete()), this, SLOT(clickedDelete()));
    connect(lpToolBar, SIGNAL(NewDir()), this, SLOT(showDialog()));
    connect(lpDialog, SIGNAL(GetDirName(QString)), this, SLOT(clickedAdd(QString)));

    connect(lpDirBar, SIGNAL(Back()), this, SLOT(clickedBack()));
    connect(lpDirBar, SIGNAL(Front()), this, SLOT(clickedFront()));
    connect(lpDirBar, SIGNAL(Fresh()), this, SLOT(clickedRefresh()));
    connect(lpDirBar, SIGNAL(Search(QString)), this, SLOT(clickedSearch(QString)));

    //测试功能用     --日后删除
        connect(lpDialog, SIGNAL(GetDirName(QString)), lpBrowser, SLOT(AddDirector(QString)));
        connect(lpToolBar, SIGNAL(Delete()), lpBrowser, SLOT(DeleteFile()));
}

void MyFileBrowserPage::showDialog()
{
    lpDialog->Clean();
    lpDialog->exec();
}

void MyFileBrowserPage::clickedUpload()
{
    QStringList fileNames;
    QFileDialog* lpSelect = new QFileDialog(this);
    lpSelect->setFileMode(QFileDialog::ExistingFile);
    lpSelect->setViewMode(QFileDialog::Detail);

    if(lpSelect->exec()){
        fileNames = lpSelect->selectedFiles();

        QString filePath = *(fileNames.begin());
        QString fileName;
        int pos = filePath.lastIndexOf('/');
        fileName = filePath.mid(pos + 1, filePath.length() - pos);
        qDebug() << filePath;
        qDebug() << pos;
        qDebug() << fileName;
        emit Upload(fileName);
    }
}

void MyFileBrowserPage::clickedDownload()
{
    if(!lpBrowser->HasFileFocus()){
        return ;
    }
    QString name = lpBrowser->GetSeletedFileName();
    emit Download(name);
}

void MyFileBrowserPage::clickedShare()
{
    if(!lpBrowser->HasFileFocus()){
        return ;
    }
    QString name = lpBrowser->GetSeletedFileName();
    emit Share(name);
}

void MyFileBrowserPage::clickedDelete()
{
    if(!lpBrowser->HasFileFocus()){
        return ;
    }
    QString name = lpBrowser->GetSeletedFileName();
    emit Delete(name);
}

void MyFileBrowserPage::clickedAdd(QString name)
{
    emit NewDir(name);
}

void MyFileBrowserPage::clickedBack()
{
    emit Back();
}

void MyFileBrowserPage::clickedFront()
{
    emit Front();
}

void MyFileBrowserPage::clickedRefresh()
{
    emit Refresh();
}

void MyFileBrowserPage::clickedSearch(QString name)
{
    emit Search(name);
}

