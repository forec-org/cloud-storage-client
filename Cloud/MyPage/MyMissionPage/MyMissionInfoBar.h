#ifndef MYMISSIONINFOBAR_H
#define MYMISSIONINFOBAR_H

#include <QWidget>
#include <QLabel>
#include <QProgressBar>
#include <QPushButton>
#include <QHBoxLayout>

class MyMissionInfoBar : public QWidget
{
    Q_OBJECT
public:
    explicit MyMissionInfoBar(QWidget *parent = 0);
/*    explicit MyMissionInfoBar(QString &name,
                              unsigned long long size,
                              int progress,
                              QWidget *parent = 0);
*/
    void SetName(QString name);
    void SetProgress(float);
    void SetRunning(bool);
    void SetNum(int);
    void ConnectSlot();
private:
    void InitWidgetDefault();
    void InitInfo();
    void InitLayout();
    void SetThisStyle();
    void SetWidgetStyle();

private:
    //widget
    QLabel* lpFileIcon;
    QLabel* lpFileName;
    QProgressBar* lpProgress;
    QPushButton* lpResumeOrSuspend;
    QPushButton* lpCancel;
    QPushButton* lpDir;

    QHBoxLayout* lpMainLayout;

    //info
//    unsigned long long currentSize;
//    unsigned long long maxSize;
    int num;
    bool isRunning;
signals:
    void Suspend(int);
    void Resume(int);
    void Cancel(int);
    void OpenDir(int);
private slots:
    void pressedSuspendOrResume();
    void pressedCancel();
    void pressedOpenDir();
};

#endif // MYMISSIONINFOBAR_H
