#ifndef SHOWAPARTMENT_H
#define SHOWAPARTMENT_H

#include <QDialog>
#include <QListWidget>
#include "createapartment.h"
#include "sqlite.h"

namespace Ui {
class ShowApartment;
}

class ShowApartment : public QDialog
{
    Q_OBJECT

public:
    explicit ShowApartment(QWidget *parent = nullptr);
    void setList();
    ~ShowApartment();

private:
    Ui::ShowApartment *ui;
    void setupModel(const QString &tableName, const QStringList &headers);
    void createUI();
    DBManager *db;
    QSqlTableModel  *model;
};

#endif // SHOWAPARTMENT_H
