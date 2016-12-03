#ifndef MYMAINWINDOW_H
#define MYMAINWINDOW_H

#include <QFrame>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QMouseEvent>
#include <QPushButton>
#include <QLabel>

class MyTitleBar;
//class MyToolBar;
//class MyToolButton;
class MyMenuBar;
class MyPage;

class MyMainWindow : public QFrame
{
    Q_OBJECT
public:
    MyMainWindow();

    void paintEvent(QPaintEvent *event);
protected:
    void mousePressEvent(QMouseEvent *);

    void mouseMoveEvent(QMouseEvent *);

    void mouseReleaseEvent(QMouseEvent *);

private:
    void InitWidget();

    void InitLayout();

    void InitSlot();

    void setWidgetStyle();

    void setThisStyle();

private:
    //分层
    QVBoxLayout* lpMainLayout;
    //标题栏
    MyTitleBar* lpTitleBar;
    //界面切换按钮
    MyMenuBar* lpMenuBar;
    //显示窗口: 文件浏览界面，下载管理界面， 上传管理界面
    MyPage* lpPage;

    QPoint last;

    bool isMoving;

private slots:
    //调用controller的函数向服务器发送命令
    void startDownloadMission(QString);
    void startUploadMission(QString);
    void shareFile(QString);
    void deleteFile(QString);
    void makeNewDir(QString);
    void toUpperDir();
    void toBeforeDir();
    void refreshDir();
    void searchFile(QString);

};

#endif // MYMAINWINDOW_H
