#include "MyTitleBar.h"

#include <QLabel>
#include <QPushButton>
#include <QHBoxLayout>
#include <QEvent>
#include <QMouseEvent>
#include <QApplication>

MyTitleBar::MyTitleBar(QWidget *parent)
    :QWidget(parent)
{
    setFixedHeight(30);

    lpIconLabel = new QLabel(this);
    lpTitleLabel = new QLabel(this);
    lpMinimizeButton = new QPushButton(this);
    lpMaximizeButton = new QPushButton(this);
    lpCloseButton = new QPushButton(this);

    lpIconLabel->setFixedSize(20, 20);
    lpIconLabel->setScaledContents(true);

    lpTitleLabel->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);

    lpMinimizeButton->setFixedSize(27, 22);
    lpMaximizeButton->setFixedSize(27, 22);
    lpCloseButton->setFixedSize(27, 22);

    lpTitleLabel->setObjectName("whiteLabel");
    lpMinimizeButton->setObjectName("minimizeButton");
    lpMaximizeButton->setObjectName("maximizeButton");
    lpCloseButton->setObjectName("closeButton");

    lpMinimizeButton->setToolTip("Minimize");
    lpMaximizeButton->setToolTip("Maximize");
    lpCloseButton->setToolTip("Close");

    QHBoxLayout *pLayout = new QHBoxLayout(this);
    pLayout->addWidget(lpIconLabel);
    pLayout->addSpacing(5);
    pLayout->addWidget(lpTitleLabel);
    pLayout->addWidget(lpMinimizeButton);
    pLayout->addWidget(lpMaximizeButton);
    pLayout->addWidget(lpCloseButton);
    pLayout->setSpacing(0);
    pLayout->setContentsMargins(5, 0, 5, 0);

    setLayout(pLayout);

    connect(lpMinimizeButton, SIGNAL(clicked(bool)), this, SLOT(onClicked()));
    connect(lpMaximizeButton, SIGNAL(clicked(bool)), this, SLOT(onClicked()));
    connect(lpCloseButton, SIGNAL(clicked(bool)), this, SLOT(onClicked()));
}




