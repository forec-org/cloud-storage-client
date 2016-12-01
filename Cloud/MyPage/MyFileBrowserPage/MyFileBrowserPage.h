#ifndef MYFILEBROWSERPAGE_H
#define MYFILEBROWSERPAGE_H

#include <QWidget>
#include <QVBoxLayout>
#include <QLabel>
//#include <QScrollArea>

class MyDirInfoBar;
class MyFileBrowser;

class MyFileBrowserPage : public QWidget
{
    Q_OBJECT
public:
    explicit MyFileBrowserPage(QWidget *parent = 0);

private:
    void InitWidget();
    void InitLayout();
    void SetThisStyle();
    void ConnectSlot();
private:
    QVBoxLayout* lpMainLayout;
    MyDirInfoBar* lpDirBar;
//    QLabel* temp;
//    QScrollArea* lpScroll;
    MyFileBrowser* lpBrowser;

    QPalette* lpPal;

signals:

private slots:

};

#endif // MYFILEBROWSERPAGE_H
