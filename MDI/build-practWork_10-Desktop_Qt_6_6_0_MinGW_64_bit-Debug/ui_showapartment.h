/********************************************************************************
** Form generated from reading UI file 'showapartment.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWAPARTMENT_H
#define UI_SHOWAPARTMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_ShowApartment
{
public:
    QListWidget *listWidgetApart;

    void setupUi(QDialog *ShowApartment)
    {
        if (ShowApartment->objectName().isEmpty())
            ShowApartment->setObjectName("ShowApartment");
        ShowApartment->resize(616, 637);
        listWidgetApart = new QListWidget(ShowApartment);
        listWidgetApart->setObjectName("listWidgetApart");
        listWidgetApart->setGeometry(QRect(20, 20, 549, 482));
        QFont font;
        font.setFamilies({QString::fromUtf8("Bahnschrift SemiLight SemiConde")});
        font.setPointSize(14);
        listWidgetApart->setFont(font);

        retranslateUi(ShowApartment);

        QMetaObject::connectSlotsByName(ShowApartment);
    } // setupUi

    void retranslateUi(QDialog *ShowApartment)
    {
        ShowApartment->setWindowTitle(QCoreApplication::translate("ShowApartment", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShowApartment: public Ui_ShowApartment {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWAPARTMENT_H
