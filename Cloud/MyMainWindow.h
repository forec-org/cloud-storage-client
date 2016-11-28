#ifndef MYMAINWINDOW_H
#define MYMAINWINDOW_H

#include <QFrame>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QMouseEvent>
#include <QPushButton>
#include <QLabel>

class MyTitleBar;
class MyToolButton;

class MyMainWindow : public QFrame
{
public:
    MyMainWindow();

    void paintEvent(QPaintEvent *event);
protected:
    void mousePressEvent(QMouseEvent *);

    void mouseMoveEvent(QMouseEvent *);

    void mouseReleaseEvent(QMouseEvent *);

private:
    void setWidgetStyle();

private:
    //分层
    QHBoxLayout* lpSwitchLayout;
    QHBoxLayout* lpToolLayout;
    QHBoxLayout* lpExplorerLayout;
    QVBoxLayout* lpMainLayout;

    //标题栏
    MyTitleBar* lpTitleBar;

    //界面切换按钮
    MyToolButton* lpMainWindowButton;
    MyToolButton* lpDownloadButton;
    MyToolButton* lpUploadButton;

    //文件操作按钮
    QPushButton* lpUpload;
    QPushButton* lpDownload;
    QPushButton* lpShare;
    QPushButton* lpDelete;
    QPushButton* lpNewDir;

    QLabel* lpExplorer;

    QPoint last;
};

#endif // MYMAINWINDOW_H
