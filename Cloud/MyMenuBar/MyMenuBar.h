#ifndef MYMENUBAR_H
#define MYMENUBAR_H

#include <QWidget>
#include <QLabel>
#include <QHBoxLayout>

class MyUserLabel;
class MyToolButton;

class MyMenuBar : public QWidget
{
    Q_OBJECT
public:
    explicit MyMenuBar(QWidget *parent = 0);

private:
    void createWidget();
    void createLayout();
    void setMenuBarStyle();
    void setSlotConnect();

private:
//    QLabel* lpUserInfo;
    MyUserLabel* lpUserInfo;
    MyToolButton* lpMainWindowButton;
    MyToolButton* lpDownloadButton;
    MyToolButton* lpUploadButton;

    QHBoxLayout* lpSwitchLayout;
signals:
    void ToMainWindow();
    void ToDownloadWindow();
    void ToUploadWindow();

public slots:
    void ResponseSlot(MyToolButton*);
};

#endif // MYMENUBAR_H
