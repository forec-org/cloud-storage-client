#ifndef MYNEWDIRDIALOG_H
#define MYNEWDIRDIALOG_H

#include <QDialog>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>

class MyNewDirDialog : public QDialog
{
    Q_OBJECT
public:
    MyNewDirDialog(QWidget* parent = 0);
    void Clean();
protected:
    void paintEvent(QPaintEvent* event);

private:
    void InitWidget();
    void InitLayout();
    void SetThisStyle();
    void ConnectSlot();

private:
    QPushButton* lpOK;
    QPushButton* lpCancel;

    QLineEdit* lpNameInput;
    QLabel* lpHint;
    QLabel* lpFalse;

    QVBoxLayout* lpMainLayout;
    QHBoxLayout* lpSubLayout;

signals:
    void GetDirName(QString);

private slots:
    void pressOk();
};

#endif // MYNEWDIRDIALOG_H
