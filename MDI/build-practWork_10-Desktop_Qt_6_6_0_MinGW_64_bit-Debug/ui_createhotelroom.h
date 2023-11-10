/********************************************************************************
** Form generated from reading UI file 'createhotelroom.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEHOTELROOM_H
#define UI_CREATEHOTELROOM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreateHotelRoom
{
public:
    QPushButton *confirmHotelPb;
    QLabel *label;
    QWidget *formWidget;
    QFormLayout *formLayout;
    QLabel *lbSide;
    QLabel *lbCorner;
    QLabel *lbId;
    QLabel *lbAppNum;
    QLabel *lbArea;
    QLabel *lbFloor;
    QLabel *lbRooms;
    QLabel *lbStreet;
    QLineEdit *lnId;
    QLineEdit *lnAppNum;
    QLineEdit *lnArea;
    QLineEdit *lnFloor;
    QLineEdit *lnRooms;
    QLineEdit *lnStreet;
    QWidget *horizontalWidget;
    QHBoxLayout *horizontalLayout;
    QRadioButton *rbBarYes;
    QRadioButton *rbBarNo;
    QWidget *horizontalWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *rbCleaningYes;
    QRadioButton *rbCleaningNo;
    QLabel *lbDayPrice;
    QLineEdit *lnDayPrice;

    void setupUi(QDialog *CreateHotelRoom)
    {
        if (CreateHotelRoom->objectName().isEmpty())
            CreateHotelRoom->setObjectName("CreateHotelRoom");
        CreateHotelRoom->resize(463, 590);
        confirmHotelPb = new QPushButton(CreateHotelRoom);
        confirmHotelPb->setObjectName("confirmHotelPb");
        confirmHotelPb->setGeometry(QRect(160, 530, 151, 35));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setPointSize(16);
        font.setBold(false);
        confirmHotelPb->setFont(font);
        label = new QLabel(CreateHotelRoom);
        label->setObjectName("label");
        label->setGeometry(QRect(100, 10, 281, 51));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI")});
        font1.setPointSize(20);
        font1.setBold(false);
        label->setFont(font1);
        formWidget = new QWidget(CreateHotelRoom);
        formWidget->setObjectName("formWidget");
        formWidget->setGeometry(QRect(60, 70, 351, 441));
        formLayout = new QFormLayout(formWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setVerticalSpacing(20);
        lbSide = new QLabel(formWidget);
        lbSide->setObjectName("lbSide");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Segoe UI")});
        font2.setPointSize(14);
        lbSide->setFont(font2);

        formLayout->setWidget(7, QFormLayout::LabelRole, lbSide);

        lbCorner = new QLabel(formWidget);
        lbCorner->setObjectName("lbCorner");
        lbCorner->setFont(font2);

        formLayout->setWidget(8, QFormLayout::LabelRole, lbCorner);

        lbId = new QLabel(formWidget);
        lbId->setObjectName("lbId");
        lbId->setFont(font2);

        formLayout->setWidget(0, QFormLayout::LabelRole, lbId);

        lbAppNum = new QLabel(formWidget);
        lbAppNum->setObjectName("lbAppNum");
        lbAppNum->setFont(font2);

        formLayout->setWidget(1, QFormLayout::LabelRole, lbAppNum);

        lbArea = new QLabel(formWidget);
        lbArea->setObjectName("lbArea");
        lbArea->setFont(font2);

        formLayout->setWidget(2, QFormLayout::LabelRole, lbArea);

        lbFloor = new QLabel(formWidget);
        lbFloor->setObjectName("lbFloor");
        lbFloor->setFont(font2);

        formLayout->setWidget(3, QFormLayout::LabelRole, lbFloor);

        lbRooms = new QLabel(formWidget);
        lbRooms->setObjectName("lbRooms");
        lbRooms->setFont(font2);

        formLayout->setWidget(4, QFormLayout::LabelRole, lbRooms);

        lbStreet = new QLabel(formWidget);
        lbStreet->setObjectName("lbStreet");
        lbStreet->setFont(font2);

        formLayout->setWidget(5, QFormLayout::LabelRole, lbStreet);

        lnId = new QLineEdit(formWidget);
        lnId->setObjectName("lnId");
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Segoe UI")});
        font3.setPointSize(12);
        lnId->setFont(font3);

        formLayout->setWidget(0, QFormLayout::FieldRole, lnId);

        lnAppNum = new QLineEdit(formWidget);
        lnAppNum->setObjectName("lnAppNum");
        lnAppNum->setFont(font3);

        formLayout->setWidget(1, QFormLayout::FieldRole, lnAppNum);

        lnArea = new QLineEdit(formWidget);
        lnArea->setObjectName("lnArea");
        lnArea->setFont(font3);

        formLayout->setWidget(2, QFormLayout::FieldRole, lnArea);

        lnFloor = new QLineEdit(formWidget);
        lnFloor->setObjectName("lnFloor");
        lnFloor->setFont(font3);

        formLayout->setWidget(3, QFormLayout::FieldRole, lnFloor);

        lnRooms = new QLineEdit(formWidget);
        lnRooms->setObjectName("lnRooms");
        lnRooms->setFont(font3);

        formLayout->setWidget(4, QFormLayout::FieldRole, lnRooms);

        lnStreet = new QLineEdit(formWidget);
        lnStreet->setObjectName("lnStreet");
        lnStreet->setFont(font3);

        formLayout->setWidget(5, QFormLayout::FieldRole, lnStreet);

        horizontalWidget = new QWidget(formWidget);
        horizontalWidget->setObjectName("horizontalWidget");
        horizontalLayout = new QHBoxLayout(horizontalWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        rbBarYes = new QRadioButton(horizontalWidget);
        rbBarYes->setObjectName("rbBarYes");
        rbBarYes->setFont(font3);

        horizontalLayout->addWidget(rbBarYes);

        rbBarNo = new QRadioButton(horizontalWidget);
        rbBarNo->setObjectName("rbBarNo");
        rbBarNo->setFont(font3);

        horizontalLayout->addWidget(rbBarNo);


        formLayout->setWidget(7, QFormLayout::FieldRole, horizontalWidget);

        horizontalWidget_2 = new QWidget(formWidget);
        horizontalWidget_2->setObjectName("horizontalWidget_2");
        horizontalLayout_2 = new QHBoxLayout(horizontalWidget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        rbCleaningYes = new QRadioButton(horizontalWidget_2);
        rbCleaningYes->setObjectName("rbCleaningYes");
        rbCleaningYes->setFont(font3);

        horizontalLayout_2->addWidget(rbCleaningYes);

        rbCleaningNo = new QRadioButton(horizontalWidget_2);
        rbCleaningNo->setObjectName("rbCleaningNo");
        rbCleaningNo->setFont(font3);

        horizontalLayout_2->addWidget(rbCleaningNo);


        formLayout->setWidget(8, QFormLayout::FieldRole, horizontalWidget_2);

        lbDayPrice = new QLabel(formWidget);
        lbDayPrice->setObjectName("lbDayPrice");
        QFont font4;
        font4.setPointSize(14);
        lbDayPrice->setFont(font4);

        formLayout->setWidget(6, QFormLayout::LabelRole, lbDayPrice);

        lnDayPrice = new QLineEdit(formWidget);
        lnDayPrice->setObjectName("lnDayPrice");

        formLayout->setWidget(6, QFormLayout::FieldRole, lnDayPrice);


        retranslateUi(CreateHotelRoom);

        QMetaObject::connectSlotsByName(CreateHotelRoom);
    } // setupUi

    void retranslateUi(QDialog *CreateHotelRoom)
    {
        CreateHotelRoom->setWindowTitle(QCoreApplication::translate("CreateHotelRoom", "Dialog", nullptr));
        confirmHotelPb->setText(QCoreApplication::translate("CreateHotelRoom", "Create", nullptr));
        label->setText(QCoreApplication::translate("CreateHotelRoom", "Input Hotel Room data:", nullptr));
        lbSide->setText(QCoreApplication::translate("CreateHotelRoom", "Has mini bar?:", nullptr));
        lbCorner->setText(QCoreApplication::translate("CreateHotelRoom", "Has cleaning?:", nullptr));
        lbId->setText(QCoreApplication::translate("CreateHotelRoom", "Input ID: ", nullptr));
        lbAppNum->setText(QCoreApplication::translate("CreateHotelRoom", "Input app number:", nullptr));
        lbArea->setText(QCoreApplication::translate("CreateHotelRoom", "Input area:", nullptr));
        lbFloor->setText(QCoreApplication::translate("CreateHotelRoom", "Input floor:", nullptr));
        lbRooms->setText(QCoreApplication::translate("CreateHotelRoom", "Input num of rooms:", nullptr));
        lbStreet->setText(QCoreApplication::translate("CreateHotelRoom", "Input street:", nullptr));
        rbBarYes->setText(QCoreApplication::translate("CreateHotelRoom", "Yes", nullptr));
        rbBarNo->setText(QCoreApplication::translate("CreateHotelRoom", "No", nullptr));
        rbCleaningYes->setText(QCoreApplication::translate("CreateHotelRoom", "Yes", nullptr));
        rbCleaningNo->setText(QCoreApplication::translate("CreateHotelRoom", "No", nullptr));
        lbDayPrice->setText(QCoreApplication::translate("CreateHotelRoom", "Input day price:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateHotelRoom: public Ui_CreateHotelRoom {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEHOTELROOM_H
