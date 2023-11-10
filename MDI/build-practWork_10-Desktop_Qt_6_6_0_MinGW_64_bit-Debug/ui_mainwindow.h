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
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLabel *label;
    QWidget *verticalLayoutWidget_6;
    QVBoxLayout *verticalLayout_7;
    QPushButton *exitPb;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_5;
    QPushButton *createApartmentPb;
    QPushButton *showApartmentPb;
    QWidget *verticalLayoutWidget_5;
    QVBoxLayout *verticalLayout_6;
    QPushButton *createHotelPb;
    QPushButton *showHotelPb;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(30, 50, 721, 80));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setPointSize(16);
        horizontalLayoutWidget->setFont(font);
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName("label_2");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI")});
        font1.setPointSize(22);
        font1.setBold(true);
        font1.setItalic(true);
        label_2->setFont(font1);
        label_2->setFrameShape(QFrame::NoFrame);
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_2);

        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName("label");
        label->setFont(font1);
        label->setFrameShape(QFrame::NoFrame);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label);

        verticalLayoutWidget_6 = new QWidget(centralwidget);
        verticalLayoutWidget_6->setObjectName("verticalLayoutWidget_6");
        verticalLayoutWidget_6->setGeometry(QRect(330, 410, 121, 61));
        verticalLayoutWidget_6->setFont(font);
        verticalLayout_7 = new QVBoxLayout(verticalLayoutWidget_6);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        exitPb = new QPushButton(verticalLayoutWidget_6);
        exitPb->setObjectName("exitPb");
        exitPb->setFont(font);

        verticalLayout_7->addWidget(exitPb);

        verticalLayoutWidget_4 = new QWidget(centralwidget);
        verticalLayoutWidget_4->setObjectName("verticalLayoutWidget_4");
        verticalLayoutWidget_4->setGeometry(QRect(90, 150, 211, 211));
        verticalLayoutWidget_4->setFont(font);
        verticalLayout_5 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        createApartmentPb = new QPushButton(verticalLayoutWidget_4);
        createApartmentPb->setObjectName("createApartmentPb");
        createApartmentPb->setFont(font);
        createApartmentPb->setAutoFillBackground(false);

        verticalLayout_5->addWidget(createApartmentPb);

        showApartmentPb = new QPushButton(verticalLayoutWidget_4);
        showApartmentPb->setObjectName("showApartmentPb");
        showApartmentPb->setFont(font);
        showApartmentPb->setAutoFillBackground(false);

        verticalLayout_5->addWidget(showApartmentPb);

        verticalLayoutWidget_5 = new QWidget(centralwidget);
        verticalLayoutWidget_5->setObjectName("verticalLayoutWidget_5");
        verticalLayoutWidget_5->setGeometry(QRect(470, 150, 211, 211));
        verticalLayoutWidget_5->setFont(font);
        verticalLayout_6 = new QVBoxLayout(verticalLayoutWidget_5);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        createHotelPb = new QPushButton(verticalLayoutWidget_5);
        createHotelPb->setObjectName("createHotelPb");
        createHotelPb->setFont(font);
        createHotelPb->setAutoFillBackground(false);

        verticalLayout_6->addWidget(createHotelPb);

        showHotelPb = new QPushButton(verticalLayoutWidget_5);
        showHotelPb->setObjectName("showHotelPb");
        showHotelPb->setFont(font);
        showHotelPb->setAutoFillBackground(false);

        verticalLayout_6->addWidget(showHotelPb);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Apartment", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Hotel Room", nullptr));
        exitPb->setText(QCoreApplication::translate("MainWindow", "Exit ", nullptr));
        createApartmentPb->setText(QCoreApplication::translate("MainWindow", "Create Apartment", nullptr));
        showApartmentPb->setText(QCoreApplication::translate("MainWindow", "Show Apartment", nullptr));
        createHotelPb->setText(QCoreApplication::translate("MainWindow", "Create Hotel Room", nullptr));
        showHotelPb->setText(QCoreApplication::translate("MainWindow", "Show Hotel Room", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
