#ifndef SHOWAPARTMENT_H
#define SHOWAPARTMENT_H

#include <QDialog>
#include <QListWidget>
#include "createapartment.h"

namespace Ui {
class ShowApartment;
}

class ShowApartment : public QDialog
{
    Q_OBJECT

public:
    explicit ShowApartment(QWidget *parent = nullptr);
    void setList(const QVector<Apartment *> &apartments);
    QListWidget* getListWidget();
    ~ShowApartment();

private:
    Ui::ShowApartment *ui;
    QVector<Apartment*> apartments;
};

#endif // SHOWAPARTMENT_H
