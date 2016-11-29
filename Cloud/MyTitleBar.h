#ifndef MYTITLEBAR_H
#define MYTITLEBAR_H

#include <QWidget>
#include <QHBoxLayout>

class QLabel;
class QPushButton;

class MyTitleBar : public QWidget
{
    Q_OBJECT
public:
    explicit MyTitleBar(QWidget *parent = 0);
    ~MyTitleBar(){}

private:
    void createWidget();

    void createLayout();

    void setButtonStyle();

    void setIcon(QPushButton* b, QString path);
private:
    QLabel *lpIconLabel;
    QLabel *lpTitleLabel;
    QPushButton *lpMinimizeButton;
    QPushButton *lpMaximizeButton;
    QPushButton *lpCloseButton;

    QHBoxLayout *lpLayout;

public slots:
    void showSmall(){
        parentWidget()->showMinimized();
    }
};

#endif // MYTITLEBAR_H
