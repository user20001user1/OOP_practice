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

QListWidget* ShowApartment::getListWidget() {
    return (ui->listWidgetApart);
}


void ShowApartment::setList(const QVector<Apartment *> &apartments){
    for (Apartment* app : apartments) {
        QListWidgetItem* item = new QListWidgetItem(ui->listWidgetApart);
        item->setText(QString::fromStdString(app->getStreet()));
        item->setData(Qt::UserRole, QVariant::fromValue(app));
    }
}
