#-------------------------------------------------
#
# Project created by QtCreator 2016-11-26T18:23:24
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Cloud
TEMPLATE = app


SOURCES += main.cpp\
    MyMainWindow.cpp \
    MyTitleBar.cpp \
    MyToolBar.cpp \
    MyToolButton.cpp \
    mainwindow.cpp

HEADERS  += \
    MyMainWindow.h \
    MyTitleBar.h \
    MyToolBar.h \
    MyToolButton.h \
    mainwindow.h

FORMS    += mainwindow.ui
