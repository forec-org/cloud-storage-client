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
#    MyNetFileBrowser/MyNetFileBrowser.cpp \
    MyToolBar/MyToolBar.cpp \
    MyMenuBar/MyMenuBar.cpp \
    MyMenuBar/MyToolButton.cpp \
    MyMenuBar/MyUserLabel.cpp \
    MyPage/MyPage.cpp \
    MyPage/MyFileBrowserPage/MyFileBrowserPage.cpp \
    MyPage/MyDownloadPage/MyDownloadPage.cpp \
    MyPage/MyUploadPage/MyUploadPage.cpp \
    MyPage/MyFileBrowserPage/MyDirInfoBar.cpp \
    MyPage/MyFileBrowserPage/MyFileBrowser.cpp

HEADERS  += \
    MyMainWindow.h \
    MyTitleBar.h \
    MyToolBar/MyToolBar.h \
    MyMenuBar/MyMenuBar.h \
    MyMenuBar/MyToolButton.h \
    MyMenuBar/MyUserLabel.h \
    MyPage/MyPage.h \
    MyPage/MyFileBrowserPage/MyFileBrowserPage.h \
    MyPage/MyDownloadPage/MyDownloadPage.h \
    MyPage/MyUploadPage/MyUploadPage.h \
    MyPage/MyFileBrowserPage/MyDirInfoBar.h \
    MyPage/MyFileBrowserPage/MyFileBrowser.h

FORMS    += mainwindow.ui

win32:CONFIG += console
