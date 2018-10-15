#-------------------------------------------------
#
# Project created by QtCreator 2016-08-26T16:44:11
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Image
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    vec3.cpp \
    sphere.cpp \
    material.cpp \
    color.cpp \
    camera.cpp \
    scene.cpp

HEADERS  += mainwindow.h \
    vec3.h \
    sphere.h \
    point.h \
    ray.h \
    intersection.h \
    material.h \
    color.h \
    camera.h \
    scene.h \
    cone.h

FORMS    += mainwindow.ui
