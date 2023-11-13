#include "showapartment.h"
#include "ui_showapartment.h"

ShowApartment::ShowApartment(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ShowApartment)
{
    ui->setupUi(this);
}

ShowApartment::~ShowApartment()
{
    delete ui;
}

void ShowApartment::setupModel(const QString &tableName, const QStringList &headers)
{
    SqliteDBManager* db= SqliteDBManager::getInstance();
    model = new QSqlTableModel(this, db->getDB());
    model->setTable(tableName);
    for(int i = 0, j = 0; i < model->columnCount(); i++, j++){
        model->setHeaderData(i, Qt::Horizontal, headers[j]);
    }
    model->setSort(0,Qt::AscendingOrder);
}


void ShowApartment::createUI()
{
    ui->apartTableView->setModel(model);
    ui->apartTableView->setColumnHidden(0, true);
    ui->apartTableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->apartTableView->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->apartTableView->resizeColumnsToContents();
    ui->apartTableView->setEditTriggers(QAbstractItemView::DoubleClicked);
    ui->apartTableView->horizontalHeader()->setStretchLastSection(true);

    model->select();
}

void ShowApartment::setList(){
    this->setupModel(TABLE_APART,
                     QStringList() << tr("ID")
                                   << tr("Number")
                                   << tr("Area")
                                   << tr("Floor")
                                   << tr("Rooms")
                                   << tr("Street")
                                   << tr("Sunny Side")
                                   << tr("Corner Apartment")
                     );

    this->createUI();
}
