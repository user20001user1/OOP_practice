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
#include "sqlite.h"


namespace Ui {
class CreateHotelRoom;
}

class CreateHotelRoom : public QDialog
{
    Q_OBJECT

public:
    explicit CreateHotelRoom(QWidget *parent = nullptr);
    ~CreateHotelRoom();

private slots:
    void on_confirmHotelPb_clicked();

private:
    Ui::CreateHotelRoom *ui;
    QString id, number, area, floor, rooms, street, dayPrice;
    bool bar, cleaning;
    DBManager *db;
    QSqlTableModel  *model;
};

#endif // CREATEHOTELROOM_H
