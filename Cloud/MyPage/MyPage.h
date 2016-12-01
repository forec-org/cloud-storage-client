#ifndef MYPAGE_H
#define MYPAGE_H

#include <QWidget>
#include <QStackedLayout>
#include <QHBoxLayout>
#include <QVBoxLayout>

class MyFileBrowserPage;
class MyDownloadPage;
class MyUploadPage;

class MyPage : public QWidget
{
    Q_OBJECT
public:
    explicit MyPage(QWidget *parent = 0);

private:
    void InitWidget();

    void InitLayOut();

private:
    QStackedLayout* lpStackLayout;
    QVBoxLayout* lpMainLayout;

    MyFileBrowserPage* lpFileBrowser;
    MyDownloadPage* lpDownload;
    MyUploadPage* lpUpload;

signals:

public slots:
    void SetCurrentPage(int);
};

#endif // MYPAGE_H
