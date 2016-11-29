#ifndef MYTOOLBAR_H
#define MYTOOLBAR_H

#include <QWidget>
#include <QPushButton>
#include <QHBoxLayout>

class MyToolButton;
class MyToolBar : public QWidget
{
    Q_OBJECT
public:
    explicit MyToolBar(QWidget *parent = 0);

//    void paintEvent(QPaintEvent *e);
private:
    void createWidget();

    void createLayout();

    void setToolBarStyle();

    void setButtonStyle();

    void setSlotConnect();

private:
    QHBoxLayout* lpLayout;

    QPushButton* lpUpload;
    QPushButton* lpDownload;
    QPushButton* lpShare;
    QPushButton* lpDelete;
    QPushButton* lpNewDir;

    QPalette* lpPal;

signals:
    void Upload();
    void Download();
    void Share();
    void Delete();
    void NewDir();

private slots:
    void clickedUpload();
    void clickedDownload();
    void clickedShare();
    void clickedDelete();
    void clickedNewDir();

};

#endif // MYTOOLBAR_H
