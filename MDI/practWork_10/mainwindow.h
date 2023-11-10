#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QListWidgetItem>
#include <QListWidget>
#include <QLabel>
#include <QLayout>
#include <QPushButton>
#include <QCheckBox>
#include <QLineEdit>
#include <QWidget>
#include "House.h"
#include "Apartment.h"
#include "HotelRoom.h"
#include "createapartment.h"
#include "createhotelroom.h"
#include "showapartment.h"
#include "showhotelroom.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_createApartmentPb_clicked();

    void on_createHotelPb_clicked();

    void on_apartCreated(Apartment *);

    void on_hotelCreated(HotelRoom *);

    void on_showApartmentPb_clicked();

    void on_showHotelPb_clicked();

    void on_exitPb_clicked();

    void on_itemAppDoubleClicked(QListWidgetItem* item);

    void on_itemHotelDoubleClicked(QListWidgetItem* item);

private:
    Ui::MainWindow *ui;
    ShowApartment *showApp;
    ShowHotelRoom *showHotel;
    QVector<Apartment*> apartments;
    QVector<HotelRoom*> hotelRooms;
};
#endif // MAINWINDOW_H
