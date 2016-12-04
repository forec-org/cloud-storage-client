#ifndef MYFILELABEL_H
#define MYFILELABEL_H

#include <QWidget>
#include <QLabel>
#include <QVBoxLayout>
#include <QMouseEvent>

class MyFileLabel : public QWidget
{
    Q_OBJECT
public:
    explicit MyFileLabel(QString type, QString name, QWidget *parent = 0);

protected:
    void mousePressEvent(QMouseEvent* event);
    void mouseDoubleClickEvent(QMouseEvent* event);

private:
    void InitWidget(QString type, QString name);
    void InitLayout();
    void SetThisStyle();
private:
    QLabel* lpIcon;
    QLabel* lpName;

    bool isDir;
    QVBoxLayout* lpMainLayout;
signals:

public slots:
};

#endif // MYFILELABEL_H
