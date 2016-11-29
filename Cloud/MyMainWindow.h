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
class MyToolButton;
class MyMenuBar;

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
    void InitSlot();

    void setWidgetStyle();

private:
    //分层
    QVBoxLayout* lpMainLayout;
    //标题栏
    MyTitleBar* lpTitleBar;
    //界面切换按钮
    MyMenuBar* lpMenuBar;
    //文件操作栏
    MyToolBar* lpToolBar;
    QLabel* lpExplorer;

    QPoint last;

private slots:
    void startDownloadMission();

    void startUploadMission();

    void shareFile();

    void deleteFile();

    void makeNewDir();

};

#endif // MYMAINWINDOW_H
