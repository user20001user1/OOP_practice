/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actioncreate;
    QAction *actionshow;
    QAction *actionexit;
    QWidget *centralwidget;
    QLabel *label;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pbCreate;
    QPushButton *pbShow;
    QPushButton *pbExit;
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
    QPushButton *pbConfirm;
    QWidget *formWidget_2;
    QFormLayout *formLayout_6;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QMenuBar *menubar;
    QMenu *menumenu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(750, 553);
        actioncreate = new QAction(MainWindow);
        actioncreate->setObjectName("actioncreate");
        actionshow = new QAction(MainWindow);
        actionshow->setObjectName("actionshow");
        actionexit = new QAction(MainWindow);
        actionexit->setObjectName("actionexit");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 10, 281, 81));
        QFont font;
        font.setPointSize(22);
        font.setBold(true);
        font.setItalic(false);
        label->setFont(font);
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(70, 110, 201, 201));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pbCreate = new QPushButton(verticalLayoutWidget);
        pbCreate->setObjectName("pbCreate");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI")});
        font1.setPointSize(18);
        font1.setBold(false);
        font1.setItalic(false);
        pbCreate->setFont(font1);

        verticalLayout->addWidget(pbCreate);

        pbShow = new QPushButton(verticalLayoutWidget);
        pbShow->setObjectName("pbShow");
        pbShow->setFont(font1);

        verticalLayout->addWidget(pbShow);

        pbExit = new QPushButton(verticalLayoutWidget);
        pbExit->setObjectName("pbExit");
        pbExit->setFont(font1);

        verticalLayout->addWidget(pbExit);

        formWidget = new QWidget(centralwidget);
        formWidget->setObjectName("formWidget");
        formWidget->setGeometry(QRect(350, 70, 321, 361));
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

        pbConfirm = new QPushButton(centralwidget);
        pbConfirm->setObjectName("pbConfirm");
        pbConfirm->setGeometry(QRect(430, 450, 171, 41));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Segoe UI")});
        font4.setPointSize(16);
        pbConfirm->setFont(font4);
        formWidget_2 = new QWidget(centralwidget);
        formWidget_2->setObjectName("formWidget_2");
        formWidget_2->setGeometry(QRect(320, 430, 16, 16));
        formLayout_6 = new QFormLayout(formWidget_2);
        formLayout_6->setObjectName("formLayout_6");
        formLayout_6->setVerticalSpacing(20);
        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(330, 10, 341, 51));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(verticalLayoutWidget_2);
        label_2->setObjectName("label_2");
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Segoe UI")});
        font5.setPointSize(22);
        label_2->setFont(font5);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 750, 21));
        menumenu = new QMenu(menubar);
        menumenu->setObjectName("menumenu");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menumenu->menuAction());
        menumenu->addAction(actioncreate);
        menumenu->addAction(actionshow);
        menumenu->addAction(actionexit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actioncreate->setText(QCoreApplication::translate("MainWindow", "create", nullptr));
        actionshow->setText(QCoreApplication::translate("MainWindow", "show", nullptr));
        actionexit->setText(QCoreApplication::translate("MainWindow", "exit", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "PR9 - Apartments", nullptr));
        pbCreate->setText(QCoreApplication::translate("MainWindow", "CREATE", nullptr));
        pbShow->setText(QCoreApplication::translate("MainWindow", "SHOW", nullptr));
        pbExit->setText(QCoreApplication::translate("MainWindow", "EXIT", nullptr));
        lbSide->setText(QCoreApplication::translate("MainWindow", "Has sunny side?:", nullptr));
        lbCorner->setText(QCoreApplication::translate("MainWindow", "Is corner app?:", nullptr));
        lbId->setText(QCoreApplication::translate("MainWindow", "Input ID: ", nullptr));
        lbAppNum->setText(QCoreApplication::translate("MainWindow", "Input app number:", nullptr));
        lbArea->setText(QCoreApplication::translate("MainWindow", "Input area:", nullptr));
        lbFloor->setText(QCoreApplication::translate("MainWindow", "Input floor:", nullptr));
        lbRooms->setText(QCoreApplication::translate("MainWindow", "Input num of rooms:", nullptr));
        lbStreet->setText(QCoreApplication::translate("MainWindow", "Input street:", nullptr));
        rbSideYes->setText(QCoreApplication::translate("MainWindow", "Yes", nullptr));
        rbSideNo->setText(QCoreApplication::translate("MainWindow", "No", nullptr));
        rbCornerYes->setText(QCoreApplication::translate("MainWindow", "Yes", nullptr));
        rbCornerNo->setText(QCoreApplication::translate("MainWindow", "No", nullptr));
        pbConfirm->setText(QCoreApplication::translate("MainWindow", "\320\241reate", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Input data:", nullptr));
        menumenu->setTitle(QCoreApplication::translate("MainWindow", "menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
