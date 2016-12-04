#include "MyFileLabel.h"
#include <QDebug>

MyFileLabel::MyFileLabel(QString type, QString name, QWidget *parent) : QWidget(parent)
{
    InitWidget(type, name);
    InitLayout();
    SetThisStyle();
}

void MyFileLabel::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::RightButton){
        qDebug() << "鼠标右击" << endl;
    }
}

void MyFileLabel::mouseDoubleClickEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton){
        qDebug() << "鼠标双击" << endl;
    }
}

void MyFileLabel::InitWidget(QString type, QString name)
{
    lpIcon = new QLabel(this);
    lpName = new QLabel(this);

    QPixmap pixmap(80, 80);
    pixmap.load(type);
    lpIcon->setPixmap(pixmap);
    lpIcon->setFixedSize(80, 80);

    lpName->setText(name);
    lpName->setMinimumSize(80, 20);
    lpName->setAlignment(Qt::AlignCenter);
}

void MyFileLabel::InitLayout()
{
    lpMainLayout = new QVBoxLayout(this);
    lpMainLayout->setSpacing(0);
    lpMainLayout->setMargin(0);

    lpMainLayout->addWidget(lpIcon);
    lpMainLayout->addWidget(lpName);
    setLayout(lpMainLayout);
}

void MyFileLabel::SetThisStyle()
{
    setFixedSize(100, 100);
    setStyleSheet("QLabel{background-color: rgb(100, 100, 100);}");
}
