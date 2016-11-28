#ifndef MYTITLEBAR_H
#define MYTITLEBAR_H

#include <QWidget>

class QLabel;
class QPushButton;

class MyTitleBar : public QWidget
{
    Q_OBJECT
public:
    explicit MyTitleBar(QWidget *parent = 0);
    ~MyTitleBar(){}

private:
    QLabel *lpIconLabel;
    QLabel *lpTitleLabel;
    QPushButton *lpMinimizeButton;
    QPushButton *lpMaximizeButton;
    QPushButton *lpCloseButton;

};

#endif // MYTITLEBAR_H
