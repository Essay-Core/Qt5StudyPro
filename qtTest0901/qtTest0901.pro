#-------------------------------------------------
#
# Project created by QtCreator 2020-09-01T13:42:22
#
#-------------------------------------------------

QT       += core gui
Qt       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = qtTest0901
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    login.cpp \
    testdialog.cpp \
    test03.cpp \
    test04.cpp

HEADERS  += mainwindow.h \
    login.h \
    testdialog.h \
    test03.h \
    test04.h

FORMS    += mainwindow.ui \
    login.ui \
    testdialog.ui \
    test03.ui \
    test04.ui

DISTFILES += \
    StyleSheet.qss
