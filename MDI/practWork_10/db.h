#ifndef DBMANAGER_H
#define DBMANAGER_H

#include <QtSql/QSqlTableModel>
#include "Apartment.h"
#include "HotelRoom.h"

class DBManager
{
public:
    virtual void connectToDataBase() = 0;
    virtual QSqlDatabase getDB() = 0;
    virtual bool insertIntoApart(Apartment& apart) = 0;
    virtual bool insertIntoHotel(HotelRoom& hotel) = 0;
};

#endif // DBMANAGER_H
