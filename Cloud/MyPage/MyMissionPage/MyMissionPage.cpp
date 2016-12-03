#include "MyMissionPage.h"
#include "MyMissionInfoBar.h"
#include "MyMToolBar.h"

MyMissionPage::MyMissionPage(QWidget *parent) : QWidget(parent)
{
    InitWidget();
    InitLayout();
    SetThisStyle();
}

void MyMissionPage::InitWidget()
{
    lpMissionList = new QListWidget(this);
    lpToolBar = new MyMToolBar(this);

    lpMissionList->setResizeMode(QListView::Adjust);
    lpMissionList->setMovement(QListView::Static);
    lpMissionList->setSpacing(1);
    lpMissionList->setGeometry(0, 40, 950, 450);
}

void MyMissionPage::InitLayout()
{
    lpMainLayout = new QVBoxLayout(this);
    lpMainLayout->setSpacing(0);
    lpMainLayout->setMargin(0);

    lpMainLayout->addWidget(lpToolBar);
    lpMainLayout->addWidget(lpMissionList);
    setLayout(lpMainLayout);
}

void MyMissionPage::SetThisStyle()
{
    setMinimumSize(950, 450);
    setAutoFillBackground(true);
    lpPal = new QPalette();
    lpPal->setColor(QPalette::Background, QColor(255, 255, 255));
    setPalette(*lpPal);
}

void MyMissionPage::AddMission(QString name)
{
    QListWidgetItem* item = new QListWidgetItem(lpMissionList);
    MyMissionInfoBar* temp = new MyMissionInfoBar();
    lpMissionList->addItem(item);
    lpMissionList->setItemWidget(item, temp);
    item->setSizeHint (QSize(temp->rect().width(),temp->rect().height()));
    temp->SetName(name);
}
