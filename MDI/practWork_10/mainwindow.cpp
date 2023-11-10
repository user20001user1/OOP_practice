#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_createApartmentPb_clicked()
{
    CreateApartment createApp;
    createApp.setModal(true);
    QObject::connect(&createApp, &CreateApartment::apartCreated, this, &MainWindow::on_apartCreated);
    createApp.exec();
}


void MainWindow::on_createHotelPb_clicked()
{
    CreateHotelRoom createHotel;
    createHotel.setModal(true);
    QObject::connect(&createHotel, &CreateHotelRoom::hotelCreated, this, &MainWindow::on_hotelCreated);
    createHotel.exec();
}


void MainWindow::on_showApartmentPb_clicked()
{
    showApp = new ShowApartment(this);
    showApp->show();
    showApp->setList(apartments);
    connect(showApp->getListWidget(), &QListWidget::itemDoubleClicked, this, &MainWindow::on_itemAppDoubleClicked);
}


void MainWindow::on_showHotelPb_clicked()
{
    showHotel = new ShowHotelRoom(this);
    showHotel->show();
    showHotel->setList(hotelRooms);
    connect(showHotel->getListWidget(), &QListWidget::itemDoubleClicked, this, &MainWindow::on_itemHotelDoubleClicked);
}

void MainWindow::on_itemAppDoubleClicked(QListWidgetItem* item)
{
    QFont newFont;
    newFont.setFamily("Segue UI");
    newFont.setPointSize(14);
    if (item) {
        Apartment *apart= item->data(Qt::UserRole).value<Apartment *>();
        if (apart) {
            QString side, corner;
            if(apart->getSunnySide()) side = "yes";
            else side = "no";
            if(apart->getCorner()) corner = "yes";
            else corner = "no";
            QString itemText = "ID: " + QString::number(apart->getId()) +
                               ", Apartment number: " + QString::number(apart->getNumber()) +
                               ", Area: " + QString::number(apart->getArea()) +
                               ", Floor: " + QString::number(apart->getFloor()) +
                               ", Rooms: " + QString::number(apart->getRooms()) +
                               ", Street: " + QString::fromStdString(apart->getStreet()) +
                               ", Sunny side: " + side +
                               ", Corner apartment: " + corner;
            item->setFont(newFont);
            QMessageBox::information(this, "Apartment", itemText, QMessageBox::Ok);
        }
    }
}

void MainWindow::on_itemHotelDoubleClicked(QListWidgetItem* item)
{
    QFont newFont;
    newFont.setFamily("Segue UI");
    newFont.setPointSize(14);
    if (item) {
        HotelRoom *hotel= item->data(Qt::UserRole).value<HotelRoom *>();
        if (hotel) {
            QString bar, cleaning;
            if(hotel->getBar()) bar = "yes";
            else bar = "no";
            if(hotel->getCleaning()) cleaning = "yes";
            else cleaning = "no";
            QString itemText = "ID: " + QString::number(hotel->getId()) +
                               ", Apartment number: " + QString::number(hotel->getNumber()) +
                               ", Area: " + QString::number(hotel->getArea()) +
                               ", Floor: " + QString::number(hotel->getFloor()) +
                               ", Rooms: " + QString::number(hotel->getRooms()) +
                               ", Street: " + QString::fromStdString(hotel->getStreet()) +
                               ", Day price: " + QString::number(hotel->getDayPrice()) +
                               ", Bar: " + bar +
                               ", Cleaning: " + cleaning;
            item->setFont(newFont);
            QMessageBox::information(this, "Hotel Room", itemText, QMessageBox::Ok);
        }
    }
}


void MainWindow::on_exitPb_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Exit", "Exiting programme", QMessageBox::Yes | QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        QCoreApplication::exit(0);
    }
}

void MainWindow::on_apartCreated(Apartment* app)
{
    apartments.push_back(app);
}

void MainWindow::on_hotelCreated(HotelRoom* hotel)
{
    hotelRooms.push_back(hotel);
}

