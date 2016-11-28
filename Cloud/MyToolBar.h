#ifndef MYTOOLBAR_H
#define MYTOOLBAR_H

#include <QWidget>
#include <QLabel>
#include <QList>

class MyToolButton;
class MyToolBar : public QWidget
{
    Q_OBJECT
public:
    explicit MyToolBar(QWidget *parent = 0);

private:
    QList<MyToolButton*> buttonList;
    QList<QString> nameList;
    QLabel *lpLabel;

    void CreateWidget();
signals:

public slots:

};

#endif // MYTOOLBAR_H
