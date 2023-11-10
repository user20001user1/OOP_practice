/********************************************************************************
** Form generated from reading UI file 'createapartment.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEAPARTMENT_H
#define UI_CREATEAPARTMENT_H

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

class Ui_CreateApartment
{
public:
    QPushButton *confirmDocPb;
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
    QRadioButton *rbSideYes;
    QRadioButton *rbSideNo;
    QWidget *horizontalWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *rbCornerYes;
    QRadioButton *rbCornerNo;

    void setupUi(QDialog *CreateApartment)
    {
        if (CreateApartment->objectName().isEmpty())
            CreateApartment->setObjectName("CreateApartment");
        CreateApartment->resize(469, 591);
        confirmDocPb = new QPushButton(CreateApartment);
        confirmDocPb->setObjectName("confirmDocPb");
        confirmDocPb->setGeometry(QRect(160, 510, 131, 35));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setPointSize(18);
        font.setBold(false);
        confirmDocPb->setFont(font);
        label = new QLabel(CreateApartment);
        label->setObjectName("label");
        label->setGeometry(QRect(90, 10, 301, 51));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI")});
        font1.setPointSize(20);
        font1.setBold(false);
        label->setFont(font1);
        formWidget = new QWidget(CreateApartment);
        formWidget->setObjectName("formWidget");
        formWidget->setGeometry(QRect(50, 80, 361, 401));
        formLayout = new QFormLayout(formWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setVerticalSpacing(20);
        lbSide = new QLabel(formWidget);
        lbSide->setObjectName("lbSide");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Segoe UI")});
        font2.setPointSize(14);
        lbSide->setFont(font2);

        formLayout->setWidget(6, QFormLayout::LabelRole, lbSide);

        lbCorner = new QLabel(formWidget);
        lbCorner->setObjectName("lbCorner");
        lbCorner->setFont(font2);

        formLayout->setWidget(7, QFormLayout::LabelRole, lbCorner);

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
        rbSideYes = new QRadioButton(horizontalWidget);
        rbSideYes->setObjectName("rbSideYes");
        rbSideYes->setFont(font3);

        horizontalLayout->addWidget(rbSideYes);

        rbSideNo = new QRadioButton(horizontalWidget);
        rbSideNo->setObjectName("rbSideNo");
        rbSideNo->setFont(font3);

        horizontalLayout->addWidget(rbSideNo);


        formLayout->setWidget(6, QFormLayout::FieldRole, horizontalWidget);

        horizontalWidget_2 = new QWidget(formWidget);
        horizontalWidget_2->setObjectName("horizontalWidget_2");
        horizontalLayout_2 = new QHBoxLayout(horizontalWidget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        rbCornerYes = new QRadioButton(horizontalWidget_2);
        rbCornerYes->setObjectName("rbCornerYes");
        rbCornerYes->setFont(font3);

        horizontalLayout_2->addWidget(rbCornerYes);

        rbCornerNo = new QRadioButton(horizontalWidget_2);
        rbCornerNo->setObjectName("rbCornerNo");
        rbCornerNo->setFont(font3);

        horizontalLayout_2->addWidget(rbCornerNo);


        formLayout->setWidget(7, QFormLayout::FieldRole, horizontalWidget_2);


        retranslateUi(CreateApartment);

        QMetaObject::connectSlotsByName(CreateApartment);
    } // setupUi

    void retranslateUi(QDialog *CreateApartment)
    {
        CreateApartment->setWindowTitle(QCoreApplication::translate("CreateApartment", "Dialog", nullptr));
        confirmDocPb->setText(QCoreApplication::translate("CreateApartment", "Create", nullptr));
        label->setText(QCoreApplication::translate("CreateApartment", "Input Apartment data:", nullptr));
        lbSide->setText(QCoreApplication::translate("CreateApartment", "Has sunny side?:", nullptr));
        lbCorner->setText(QCoreApplication::translate("CreateApartment", "Is corner app?:", nullptr));
        lbId->setText(QCoreApplication::translate("CreateApartment", "Input ID: ", nullptr));
        lbAppNum->setText(QCoreApplication::translate("CreateApartment", "Input app number:", nullptr));
        lbArea->setText(QCoreApplication::translate("CreateApartment", "Input area:", nullptr));
        lbFloor->setText(QCoreApplication::translate("CreateApartment", "Input floor:", nullptr));
        lbRooms->setText(QCoreApplication::translate("CreateApartment", "Input num of rooms:", nullptr));
        lbStreet->setText(QCoreApplication::translate("CreateApartment", "Input street:", nullptr));
        rbSideYes->setText(QCoreApplication::translate("CreateApartment", "Yes", nullptr));
        rbSideNo->setText(QCoreApplication::translate("CreateApartment", "No", nullptr));
        rbCornerYes->setText(QCoreApplication::translate("CreateApartment", "Yes", nullptr));
        rbCornerNo->setText(QCoreApplication::translate("CreateApartment", "No", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateApartment: public Ui_CreateApartment {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEAPARTMENT_H
