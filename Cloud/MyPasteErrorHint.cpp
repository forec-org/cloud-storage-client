#include "MyPasteErrorHint.h"

MyPasteErrorHint::MyPasteErrorHint(QWidget *parent) : QWidget(parent)
{
    lpHint = new QLabel("存在同名文件，粘贴失败", this);
    setGeometry(300, 600, 200, 20);
    hide();
}
