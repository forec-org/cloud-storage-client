#ifndef MYUPLOADPAGE_H
#define MYUPLOADPAGE_H

#include <QWidget>
#include <QVBoxLayout>
#include <QLabel>

class MyUploadPage : public QWidget
{
    Q_OBJECT
public:
    explicit MyUploadPage(QWidget *parent = 0);
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

#endif // MYUPLOADPAGE_H
