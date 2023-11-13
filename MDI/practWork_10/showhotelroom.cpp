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

void ShowHotelRoom::setupModel(const QString &tableName, const QStringList &headers)
{
    SqliteDBManager* db= SqliteDBManager::getInstance();
    model = new QSqlTableModel(this, db->getDB());
    model->setTable(tableName);
    for(int i = 0, j = 0; i < model->columnCount(); i++, j++){
        model->setHeaderData(i, Qt::Horizontal, headers[j]);
    }
    model->setSort(0,Qt::AscendingOrder);
}


void ShowHotelRoom::createUI()
{
    ui->hotelTableView->setModel(model);
    ui->hotelTableView->setColumnHidden(0, true);
    ui->hotelTableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->hotelTableView->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->hotelTableView->resizeColumnsToContents();
    ui->hotelTableView->setEditTriggers(QAbstractItemView::DoubleClicked);
    ui->hotelTableView->horizontalHeader()->setStretchLastSection(true);

    model->select();
}

void ShowHotelRoom::setList(){
    this->setupModel(TABLE_HOTEL,
                     QStringList() << tr("ID")
                                   << tr("Number")
                                   << tr("Area")
                                   << tr("Floor")
                                   << tr("Rooms")
                                   << tr("Street")
                                   << tr("Day price")
                                   << tr("MiniBar")
                                   << tr("Cleaning")
                     );

    this->createUI();
}
