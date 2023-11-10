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
    if(ui->lnId->text().isEmpty() || ui->lnAppNum->text().isEmpty() || ui->lnArea->text().isEmpty() || ui->lnFloor->text().isEmpty() || ui->lnRooms->text().isEmpty() || ui->lnStreet->text().isEmpty()){
        QMessageBox::warning(this, "Error", "Empty fields");
    }
    else {
        apart = new Apartment(id.toInt(), number.toInt(), area.toDouble(), floor.toInt(), rooms.toInt(), street.toStdString(), sunnySide, corner);
        emit apartCreated(apart);
}
}


