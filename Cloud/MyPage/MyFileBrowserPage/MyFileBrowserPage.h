#ifndef MYFILEBROWSERPAGE_H
#define MYFILEBROWSERPAGE_H

#include <QWidget>
#include <QVBoxLayout>
#include <QLabel>
//#include <QScrollArea>

class MyFBToolBar;
class MyDirInfoBar;
class MyFileBrowser;
class MyNewDirDialog;

class MyFileBrowserPage : public QWidget
{
    Q_OBJECT
public:
    explicit MyFileBrowserPage(QWidget *parent = 0);

private:
    void InitWidget();
    void InitLayout();
    void SetThisStyle();
    void ConnectSlot();
private:
    QVBoxLayout* lpMainLayout;

    //提供上传，下载，共享，删除，新建文件夹功能
    MyFBToolBar* lpToolBar;
    //提供回退上级目录，返回退，刷新，搜索文件功能
    MyDirInfoBar* lpDirBar;
    //文件浏览器界面
    MyFileBrowser* lpBrowser;
    //创建新文件夹的对话框
    MyNewDirDialog* lpDialog;

    QPalette* lpPal;

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

private slots:
    //toolbar
    void showDialog();
    void clickedUpload();
    void clickedDownload();
    void clickedShare();
    void clickedDelete();
    void clickedAdd(QString);

    //dirInfoBar
    void clickedBack();
    void clickedFront();
    void clickedRefresh();
    void clickedSearch(QString);
};

#endif // MYFILEBROWSERPAGE_H
