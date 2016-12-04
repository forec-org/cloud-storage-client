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
    MyMenuBar/MyMenuBar.cpp \
    MyMenuBar/MyToolButton.cpp \
    MyMenuBar/MyUserLabel.cpp \
    MyPage/MyPage.cpp \
    MyPage/MyFileBrowserPage/MyFileBrowserPage.cpp \
    MyPage/MyFileBrowserPage/MyDirInfoBar.cpp \
    MyPage/MyFileBrowserPage/MyFileBrowser.cpp \
    MyPage/MyFileBrowserPage/MyFBToolBar.cpp \
    MyPage/MyFileBrowserPage/MyNewDirDialog.cpp \
    MyPage/MyMissionPage/MyMissionInfoBar.cpp \
    MyPage/MyMissionPage/MyMissionPage.cpp \
    MyPage/MyMissionPage/MyMToolBar.cpp \
    MyLogInDialog.cpp \
    MyPage/MyFileBrowserPage/MyFileListWidget.cpp \
    MyPage/MyFileBrowserPage/MyDeleteDialog.cpp \
    MyPasteErrorHint.cpp

HEADERS  += \
    MyMainWindow.h \
    MyTitleBar.h \
    MyMenuBar/MyMenuBar.h \
    MyMenuBar/MyToolButton.h \
    MyMenuBar/MyUserLabel.h \
    MyPage/MyPage.h \
    MyPage/MyFileBrowserPage/MyFileBrowserPage.h \
    MyPage/MyFileBrowserPage/MyDirInfoBar.h \
    MyPage/MyFileBrowserPage/MyFileBrowser.h \
    MyPage/MyFileBrowserPage/MyFBToolBar.h \
    MyPage/MyFileBrowserPage/MyNewDirDialog.h \
    MyPage/MyMissionPage/MyMissionInfoBar.h \
    MyPage/MyMissionPage/MyMissionPage.h \
    MyPage/MyMissionPage/MyMToolBar.h \
    MyLogInDialog.h \
    MyPage/MyFileBrowserPage/MyFileListWidget.h \
    MyPage/MyFileBrowserPage/MyDeleteDialog.h \
    MyPasteErrorHint.h

FORMS    += mainwindow.ui

win32:CONFIG += console
