#ifndef SHOWHOTELROOM_H
#define SHOWHOTELROOM_H

#include <QDialog>
#include <QListWidget>
#include "createhotelroom.h"
#include "sqlite.h"

namespace Ui {
class ShowHotelRoom;
}

class ShowHotelRoom : public QDialog
{
    Q_OBJECT

public:
    explicit ShowHotelRoom(QWidget *parent = nullptr);
    void setList();
    ~ShowHotelRoom();

private:
    Ui::ShowHotelRoom *ui;
    void setupModel(const QString &tableName, const QStringList &headers);
    void createUI();
    DBManager *db;
    QSqlTableModel  *model;
};

#endif // SHOWHOTELROOM_H
