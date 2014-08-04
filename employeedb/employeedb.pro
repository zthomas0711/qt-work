#-------------------------------------------------
#
# Project created by QtCreator 2014-07-20T14:50:15
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = employeedb
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    modifyentry.cpp \
    newentry.cpp \
    database.cpp \
    engineer.cpp \
    invalidid.cpp \
    notfound.cpp

HEADERS  += mainwindow.h \
    modifyentry.h \
    newentry.h \
    engineer.h \
    database.h \
    invalidid.h \
    notfound.h

FORMS    += mainwindow.ui \
    modifyentry.ui \
    newentry.ui \
    database.ui \
    invalidid.ui \
    notfound.ui

OTHER_FILES +=
