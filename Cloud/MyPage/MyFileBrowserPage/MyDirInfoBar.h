#ifndef MYDIRINFOBAR_H
#define MYDIRINFOBAR_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>
#include <QHBoxLayout>

class MyDirInfoBar : public QWidget
{
    Q_OBJECT
public:
    explicit MyDirInfoBar(QWidget *parent = 0);

private:
    void InitWidget();
    void InitLayout();
    void SetThisStyle();
    void SetWidgetStyle();
    void ConnectSlot();
private:
    QPushButton* lpBack;
    QPushButton* lpFront;
    QPushButton* lpFresh;

    QLabel* lpPath;

    QLineEdit* lpInputSearch;
    QPushButton* lpSearch;

    QHBoxLayout* lpMainLayout;

    QPalette* lpPal;
signals:
    void ClickedBack();
    void ClickedFront();
    void ClickedFresh();
    void ClickedSearch(QString);
private slots:
    void sendBack();
    void sendFront();
    void sendFresh();
    void sendSearch();
};

#endif // MYDIRINFOBAR_H
