#ifndef SHOWHOTELROOM_H
#define SHOWHOTELROOM_H

#include <QDialog>
#include <QListWidget>
#include "createhotelroom.h"

namespace Ui {
class ShowHotelRoom;
}

class ShowHotelRoom : public QDialog
{
    Q_OBJECT

public:
    explicit ShowHotelRoom(QWidget *parent = nullptr);
    void setList(const QVector<HotelRoom *> &hotelRooms);
    QListWidget* getListWidget();
    ~ShowHotelRoom();

private:
    Ui::ShowHotelRoom *ui;
    QVector<HotelRoom*> hotelRooms;
};

#endif // SHOWHOTELROOM_H
