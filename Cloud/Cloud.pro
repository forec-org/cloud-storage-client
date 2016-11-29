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
    mainwindow.cpp \
    MyNetFileBrowser/MyNetFileBrowser.cpp \
    MyToolBar/MyToolBar.cpp \
    MyMenuBar/MyMenuBar.cpp \
    MyMenuBar/MyToolButton.cpp \
    MyMenuBar/MyUserLabel.cpp

HEADERS  += \
    MyMainWindow.h \
    MyTitleBar.h \
    mainwindow.h \
    MyNetFileBrowser/MyNetFileBrowser.h \
    MyToolBar/MyToolBar.h \
    MyMenuBar/MyMenuBar.h \
    MyMenuBar/MyToolButton.h \
    MyMenuBar/MyUserLabel.h

FORMS    += mainwindow.ui

win32:CONFIG += console
