#ifndef DATABASE_H
#define DATABASE_H

#include <QtSql/QSqlTableModel>
#include <QVariantList>

#include <db.h>

#define DATABASE_HOSTNAME "example"
#define DATABASE_NAME "newdb.sqlite"

#define TABLE_APART "Apartments"
#define TABLE_HOTEL "HotelRooms"
#define TABLE_ID "ID"
#define TABLE_NUMBER "number"
#define TABLE_AREA "area"
#define TABLE_FLOOR "floor"
#define TABLE_ROOMS "rooms"
#define TABLE_STREET "street"
#define TABLE_PRICE "dayPrice"
#define TABLE_BAR "bar"
#define TABLE_CLEANING "cleaning"
#define TABLE_SIDE "sunnySide"
#define TABLE_CORNER "corner"


class SqliteDBManager : public DBManager {

public:
    static SqliteDBManager* getInstance();

    void connectToDataBase();
    QSqlDatabase getDB();
    bool insertIntoApart(Apartment& apart);
    bool insertIntoHotel(HotelRoom& hotel);

private:
    QSqlDatabase db;
    static SqliteDBManager* instance;
    SqliteDBManager();
    bool openDataBase();
    bool restoreDataBase();
    void closeDataBase();
    bool createTables();
};



#endif // DATABASE_H
