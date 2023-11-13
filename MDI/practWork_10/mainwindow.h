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

class QSqlTableModel;
class DBManager;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(DBManager* dbManager, QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_createApartmentPb_clicked();

    void on_createHotelPb_clicked();

    void on_showApartmentPb_clicked();

    void on_showHotelPb_clicked();

    void on_exitPb_clicked();

private:
    Ui::MainWindow *ui;
    ShowApartment *showApp;
    ShowHotelRoom *showHotel;
    DBManager *db;
    QSqlTableModel  *model;
};
#endif // MAINWINDOW_H
