#include "mainwindow.h"
#include "db.h"
#include "sqlite.h"
#include <QtSql/QSqlTableModel>
#include <QDateTime>
#include "ui_mainwindow.h"


MainWindow::MainWindow(DBManager* dbManager, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    dbManager->connectToDataBase();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_createApartmentPb_clicked()
{
    CreateApartment createApp;
    createApp.setModal(true);
    //QObject::connect(&createApp, &CreateApartment::apartCreated, this, &MainWindow::on_apartCreated);
    createApp.exec();
}


void MainWindow::on_createHotelPb_clicked()
{
    CreateHotelRoom createHotel;
    createHotel.setModal(true);
    //QObject::connect(&createHotel, &CreateHotelRoom::hotelCreated, this, &MainWindow::on_hotelCreated);
    createHotel.exec();
}


void MainWindow::on_showApartmentPb_clicked()
{
    showApp = new ShowApartment(this);
    showApp->show();
    showApp->setList();
    //connect(showApp->getListWidget(), &QListWidget::itemDoubleClicked, this, &MainWindow::on_itemAppDoubleClicked);
}


void MainWindow::on_showHotelPb_clicked()
{
    showHotel = new ShowHotelRoom(this);
    showHotel->show();
    showHotel->setList();
    //connect(showHotel->getListWidget(), &QListWidget::itemDoubleClicked, this, &MainWindow::on_itemHotelDoubleClicked);
}


void MainWindow::on_exitPb_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Exit", "Exiting programme", QMessageBox::Yes | QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        QCoreApplication::exit(0);
    }
}

