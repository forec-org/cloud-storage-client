#ifndef MYPAGE_H
#define MYPAGE_H

#include <QWidget>
#include <QStackedLayout>
#include <QHBoxLayout>
#include <QVBoxLayout>

class MyFileBrowserPage;
class MyMissionPage;

class MyPage : public QWidget
{
    Q_OBJECT
public:
    explicit MyPage(QWidget *parent = 0);

private:
    void InitWidget();

    void InitLayOut();

    void ConnectSlot();

private:
    QStackedLayout* lpStackLayout;
    QVBoxLayout* lpMainLayout;

    MyFileBrowserPage* lpFileBrowser;
    MyMissionPage* lpDownload;
    MyMissionPage* lpUpload;

signals:
    void Download(QString);
    void Upload(QString);
    void Share(QString);
    void Delete(QString);
    void NewDir(QString);
    void Back();
    void Front();
    void Refresh();
    void Search(QString);

    void EnterDir(QString);
    void Rename(QString, QString);
    void Property(QString);
    void Copy(QString);
    void Cut(QString);
    void Paste();

    void SuspendD(int);
    void ResumeD(int);
    void CancelD(int);
    void OpenDirD(int);
    void SuspendU(int);
    void ResumeU(int);
    void CancelU(int);
    void OpenDirU(int);

public slots:
    void SetCurrentPage(int);

private slots:
    //接收来自文件浏览器页面的信号,并传递给主窗口
    void sendDownloadSignal(QString);
    void sendUploadSignal(QString);
    void sendShareSignal(QString);
    void sendDeleteSignal(QString);
    void sendNewDirSignal(QString);
    void sendBackSignal();
    void sendFrontSignal();
    void sendRefreshSignal();
    void sendSearchSignal(QString);

    void sendEnterDirSignal(QString);
    void SendRenameSignal(QString, QString);
    void SendPropertySignal(QString);
    void SendCopySignal(QString);
    void SendCutSignal(QString);
    void SendPasteSignal();

    //接收来自传输任务页面的信号，并传递给主窗口
    void sendSuspendD(int);
    void sendResumeD(int);
    void sendCancelD(int);
    void sendOpenDirD(int);

    void sendSuspendU(int);
    void sendResumeU(int);
    void sendCancelU(int);
    void sendOpenDirU(int);
};

#endif // MYPAGE_H
