QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Apartment.cpp \
    HotelRoom.cpp \
    House.cpp \
    Logger.cpp \
    createapartment.cpp \
    createhotelroom.cpp \
    main.cpp \
    mainwindow.cpp \
    showapartment.cpp \
    showhotelroom.cpp \
    sqlite.cpp

HEADERS += \
    Apartment.h \
    HotelRoom.h \
    House.h \
    Logger.h \
    createapartment.h \
    createhotelroom.h \
    db.h \
    mainwindow.h \
    showapartment.h \
    showhotelroom.h \
    sqlite.h

FORMS += \
    createapartment.ui \
    createhotelroom.ui \
    mainwindow.ui \
    showapartment.ui \
    showhotelroom.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
