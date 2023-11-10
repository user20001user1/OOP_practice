#ifndef CREATEHOTELROOM_H
#define CREATEHOTELROOM_H

#include <QDialog>
#include <QMainWindow>
#include <QMessageBox>
#include <QLabel>
#include <QLayout>
#include <QPushButton>
#include <QCheckBox>
#include <QLineEdit>
#include <QWidget>
#include "Apartment.h"
#include "HotelRoom.h"
#include "createapartment.h"

namespace Ui {
class CreateHotelRoom;
}

class CreateHotelRoom : public QDialog
{
    Q_OBJECT

public:
    explicit CreateHotelRoom(QWidget *parent = nullptr);
    ~CreateHotelRoom();

signals:
    void hotelCreated(HotelRoom*);

private slots:
    void on_confirmHotelPb_clicked();

private:
    Ui::CreateHotelRoom *ui;
    HotelRoom* hotel;
    QString id, number, area, floor, rooms, street, dayPrice;
    bool bar, cleaning;
};

#endif // CREATEHOTELROOM_H
