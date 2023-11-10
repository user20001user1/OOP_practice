#ifndef CREATEAPARTMENT_H
#define CREATEAPARTMENT_H

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
#include "createhotelroom.h"

namespace Ui {
class CreateApartment;
}

class CreateApartment : public QDialog
{
    Q_OBJECT

public:
    explicit CreateApartment(QWidget *parent = nullptr);
    ~CreateApartment();

signals:
    void apartCreated(Apartment*);

private slots:
    void on_confirmDocPb_clicked();

private:
    Ui::CreateApartment *ui;
    Apartment* apart;
    QString id, number, area, floor, rooms, street;
    bool sunnySide, corner;
};

#endif // CREATEAPARTMENT_H
