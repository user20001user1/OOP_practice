#include "createapartment.h"
#include "ui_createapartment.h"

CreateApartment::CreateApartment(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreateApartment)
{
    ui->setupUi(this);
}

CreateApartment::~CreateApartment()
{
    delete ui;
}

void CreateApartment::on_confirmDocPb_clicked()
{
    SqliteDBManager* db= SqliteDBManager::getInstance();
    id = ui->lnId->text();
    number = ui->lnAppNum->text();
    area = ui->lnArea->text();
    floor = ui->lnFloor->text();
    rooms = ui->lnRooms->text();
    street = ui->lnStreet->text();
    if(ui->rbSideYes->isChecked()) sunnySide = true;
    else if (ui->rbSideNo->isChecked())sunnySide = false;
    if(ui->rbCornerNo->isChecked()) corner = true;
    else if (ui->rbCornerYes->isChecked())corner = false;

    try{
    if(ui->lnId->text().isEmpty() || ui->lnAppNum->text().isEmpty() || ui->lnArea->text().isEmpty() || ui->lnFloor->text().isEmpty() || ui->lnRooms->text().isEmpty() || ui->lnStreet->text().isEmpty()){
        QMessageBox::warning(this, "Error", "Empty fields");
        throw std::runtime_error("Fields are empty in Apartments object");
    }
    else {
        Apartment apart;
        apart.setId(id.toInt());
        apart.setNumber(id.toInt());
        apart.setArea(area.toDouble());
        apart.setFloor(floor.toInt());
        apart.setRooms(rooms.toInt());
        apart.setStreet(street.toStdString());
        apart.setSunnySide(sunnySide);
        apart.setCorner(corner);

        if (db->insertIntoApart(apart)) {
            QMessageBox::information(this, "Success", "Created object");

        } else {
            QMessageBox::warning(this, "Error", "Error with the database!");
        }
    }
}catch(const std::runtime_error &e){
    qWarning()<<"Exception in creating: "<<e.what();
}
}



