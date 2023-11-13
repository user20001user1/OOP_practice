#include "createhotelroom.h"
#include "ui_createhotelroom.h"

CreateHotelRoom::CreateHotelRoom(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreateHotelRoom)
{
    ui->setupUi(this);
}

CreateHotelRoom::~CreateHotelRoom()
{
    delete ui;
}

void CreateHotelRoom::on_confirmHotelPb_clicked()
{
    id = ui->lnId->text();
    number = ui->lnAppNum->text();
    area = ui->lnArea->text();
    floor = ui->lnFloor->text();
    rooms = ui->lnRooms->text();
    street = ui->lnStreet->text();
    dayPrice = ui->lnDayPrice->text();
    if(ui->rbBarYes->isChecked()) bar = true;
    else if (ui->rbBarNo->isChecked())bar = false;
    if(ui->rbCleaningYes->isChecked()) cleaning = true;
    else if (ui->rbCleaningNo->isChecked())cleaning = false;

    try{
    if(ui->lnId->text().isEmpty() || ui->lnAppNum->text().isEmpty() || ui->lnArea->text().isEmpty() || ui->lnFloor->text().isEmpty() || ui->lnRooms->text().isEmpty() || ui->lnStreet->text().isEmpty() || ui->lnDayPrice->text().isEmpty()){
        QMessageBox::warning(this, "Error", "Empty fields");
        throw std::runtime_error("Fields are empty in HotelRoom object");
    }     else {
        HotelRoom hotel;
        hotel.setId(id.toInt());
        hotel.setNumber(id.toInt());
        hotel.setArea(area.toDouble());
        hotel.setFloor(floor.toInt());
        hotel.setRooms(rooms.toInt());
        hotel.setStreet(street.toStdString());
        hotel.setDayPrice(dayPrice.toInt());
        hotel.setBar(bar);
        hotel.setCleaning(cleaning);
        if (db->insertIntoHotel(hotel)) {
             QMessageBox::information(this, "Success", "Created object");
        }

    else {
        QMessageBox::warning(this, "Error", "Error with the database!");
    }
}
}catch(const std::runtime_error &e){
    qWarning()<<"Exception in creating: "<<e.what();
}

}

