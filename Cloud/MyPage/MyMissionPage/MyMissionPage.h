#ifndef MYMISSIONPAGE_H
#define MYMISSIONPAGE_H

#include <QWidget>
#include <QListWidget>
#include <QVBoxLayout>

class MyMToolBar;

class MyMissionPage : public QWidget
{
    Q_OBJECT
public:
    explicit MyMissionPage(QWidget *parent = 0);

private:
    void InitWidget();
    void InitLayout();
    void SetThisStyle();


private:
    QListWidget* lpMissionList;
    MyMToolBar* lpToolBar;

    QVBoxLayout* lpMainLayout;

    QPalette* lpPal;
signals:

public slots:
    void AddMission(QString);
};

#endif // MYMISSIONPAGE_H
