/********************************************************************************
** Form generated from reading UI file 'showhotelroom.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWHOTELROOM_H
#define UI_SHOWHOTELROOM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_ShowHotelRoom
{
public:
    QListWidget *listWidgetHotel;

    void setupUi(QDialog *ShowHotelRoom)
    {
        if (ShowHotelRoom->objectName().isEmpty())
            ShowHotelRoom->setObjectName("ShowHotelRoom");
        ShowHotelRoom->resize(608, 549);
        listWidgetHotel = new QListWidget(ShowHotelRoom);
        listWidgetHotel->setObjectName("listWidgetHotel");
        listWidgetHotel->setGeometry(QRect(30, 30, 549, 482));
        QFont font;
        font.setFamilies({QString::fromUtf8("Bahnschrift SemiLight SemiConde")});
        font.setPointSize(14);
        listWidgetHotel->setFont(font);

        retranslateUi(ShowHotelRoom);

        QMetaObject::connectSlotsByName(ShowHotelRoom);
    } // setupUi

    void retranslateUi(QDialog *ShowHotelRoom)
    {
        ShowHotelRoom->setWindowTitle(QCoreApplication::translate("ShowHotelRoom", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShowHotelRoom: public Ui_ShowHotelRoom {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWHOTELROOM_H
