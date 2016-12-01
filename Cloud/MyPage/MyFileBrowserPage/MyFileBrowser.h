#ifndef MYFILEBROWSER_H
#define MYFILEBROWSER_H

#include <QWidget>
#include <QLabel>
#include <QGridLayout>
#include <QVBoxLayout>
#include <QListWidget>

class MyFileBrowser : public QWidget
{
    Q_OBJECT
private:
    const static int maxNumPerLine = 7;
public:
    explicit MyFileBrowser(QWidget *parent = 0);

private:
    void InitWidget();
    void InitCounter();
    void SetThisStyle();

private:
    QVBoxLayout* lpMainLayout;
    QListWidget* lpListWidget;

    int fileNum;
signals:

public slots:
    void AddFile();
    void DeleteFile();
};

#endif // MYFILEBROWSER_H
