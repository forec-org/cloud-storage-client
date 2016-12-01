#ifndef MYMAINWINDOW_H
#define MYMAINWINDOW_H

#include <QFrame>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QMouseEvent>
#include <QPushButton>
#include <QLabel>

class MyTitleBar;
class MyToolBar;
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
    //文件操作栏
    MyToolBar* lpToolBar;
    //显示窗口: 文件浏览界面，下载管理界面， 上传管理界面
    MyPage* lpPage;

//    QLabel* lpExplorer;

    QPoint last;

    bool isMoving;

private slots:
    void startDownloadMission();

    void startUploadMission();

    void shareFile();

    void deleteFile();

    void makeNewDir();

};

#endif // MYMAINWINDOW_H
