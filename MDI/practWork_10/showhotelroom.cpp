#include "showhotelroom.h"
#include "ui_showhotelroom.h"

ShowHotelRoom::ShowHotelRoom(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ShowHotelRoom)
{
    ui->setupUi(this);
}

ShowHotelRoom::~ShowHotelRoom()
{
    delete ui;
}

QListWidget* ShowHotelRoom::getListWidget() {
    return (ui->listWidgetHotel);
}


void ShowHotelRoom::setList(const QVector<HotelRoom *> &hotelRooms){
    for (HotelRoom* hotel : hotelRooms) {
        QListWidgetItem* item = new QListWidgetItem(ui->listWidgetHotel);
        item->setText(QString::fromStdString(hotel->getStreet()));
        item->setData(Qt::UserRole, QVariant::fromValue(hotel));
    }
}
