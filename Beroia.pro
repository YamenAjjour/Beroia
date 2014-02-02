#-------------------------------------------------
#
# Project created by QtCreator 2014-01-27T14:40:38
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Beroia
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    imageviewerdialog.cpp \
    settingsdialog.cpp \
    searchdialog.cpp \
    Dialogs/settingsdialog.cpp \
    Dialogs/searchdialog.cpp \
    Dialogs/imageviewerdialog.cpp \
    imagedal.cpp \
    image.cpp \
    DAL/imagedal.cpp \
    Model/image.cpp \
    person.cpp \
    tag.cpp

HEADERS  += mainwindow.h \
    imageviewerdialog.h \
    settingsdialog.h \
    searchdialog.h \
    Dialogs/settingsdialog.h \
    Dialogs/searchdialog.h \
    Dialogs/imageviewerdialog.h \
    imagedal.h \
    image.h \
    DAL/imagedal.h \
    Model/image.h \
    person.h \
    tag.h

FORMS    += mainwindow.ui \
    imageviewerdialog.ui \
    settingsdialog.ui \
    searchdialog.ui \
    Dialogs/settingsdialog.ui \
    Dialogs/searchdialog.ui \
    Dialogs/imageviewerdialog.ui
