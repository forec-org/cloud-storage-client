#ifndef MYNETFILEBROWSER_H
#define MYNETFILEBROWSER_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>

class MyNetFileBrowser : public QWidget
{
    Q_OBJECT
public:
    explicit MyNetFileBrowser(QWidget *parent = 0);

private:
    void InitUI();

private:
    //回退按钮
    QPushButton* lpBack;
    //刷新
    QPushButton* lpFresh;
signals:

public slots:
};

#endif // MYNETFILEBROWSER_H
