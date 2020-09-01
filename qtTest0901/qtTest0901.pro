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
    login.cpp

HEADERS  += mainwindow.h \
    login.h

FORMS    += mainwindow.ui \
    login.ui
