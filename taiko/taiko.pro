#-------------------------------------------------
#
# Project created by QtCreator 2016-05-02T20:44:52
#
#-------------------------------------------------

QT       += core gui \
         multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = taiko
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    gamewindow.cpp \
    scene.cpp \
    itemmm.cpp

HEADERS  += mainwindow.h \
    gamewindow.h \
    scene.h \
    itemmm.h

FORMS    += mainwindow.ui \
    gamewindow.ui

RESOURCES += \
    pics.qrc
