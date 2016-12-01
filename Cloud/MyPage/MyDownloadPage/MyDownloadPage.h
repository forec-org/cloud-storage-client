#ifndef MYDOWNLOADPAGE_H
#define MYDOWNLOADPAGE_H

#include <QWidget>
#include <QVBoxLayout>
#include <QLabel>

class MyDownloadPage : public QWidget
{
    Q_OBJECT
public:
    explicit MyDownloadPage(QWidget *parent = 0);

private:
    void InitWidget();
    void InitLayout();
    void SetThisStyle();

private:
    QVBoxLayout* lpMainLayout;
    QLabel* temp;
    QPalette* lpPal;

signals:

public slots:
};

#endif // MYDOWNLOADPAGE_H
