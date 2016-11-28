#include "MyToolBar.h"
#include "MyToolButton.h"

MyToolBar::MyToolBar(QWidget *parent) : QWidget(parent)
{

}

void MyToolBar::CreateWidget()
{
    nameList << "my cloud" << "download" << "upload";
    for(int i = 0; i < 3; ++i){
        QString strImage = QString("");
    }
}
