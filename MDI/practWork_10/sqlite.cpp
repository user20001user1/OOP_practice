#include "sqlite.h"

#include <QObject>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QFile>
#include <QDate>
#include <QDebug>

SqliteDBManager* SqliteDBManager::instance = nullptr;

SqliteDBManager::SqliteDBManager(){

}

SqliteDBManager* SqliteDBManager::getInstance()
{
    if(instance == nullptr){
        instance = new SqliteDBManager();
    }
    return instance;
}

void SqliteDBManager::connectToDataBase()
{
        if (QFile(DATABASE_NAME).exists()) {
            if (!this->openDataBase()) {
            }
        } else {
            if (!this->restoreDataBase()) {
            }
        }
}

QSqlDatabase SqliteDBManager::getDB()
{
    return db;
}

bool SqliteDBManager::restoreDataBase()
{
        if (this->openDataBase()) {
            if (!this->createTables()) {
                return false;
            } else {
                return true;
            }
        }
}

bool SqliteDBManager::openDataBase()
{
        db = QSqlDatabase::addDatabase("QSQLITE");
        db.setHostName(DATABASE_HOSTNAME);
        db.setDatabaseName(DATABASE_NAME);

        if (db.open()) {
            return true;
        }
}

void SqliteDBManager::closeDataBase()
{
    db.close();
}

bool SqliteDBManager::createTables()
{
    QSqlQuery query;
    bool b = true;
    if(!query.exec( "CREATE TABLE " TABLE_APART"("
                    TABLE_ID " INT NOT NULL, "
                    TABLE_NUMBER " INT NOT NULL,"
                    TABLE_AREA " FLOAT NOT NULL,"
                    TABLE_FLOOR " INT NOT NULL,"
                    TABLE_ROOMS " INT NOT NULL,"
                    TABLE_STREET " TEXT NOT NULL,"
                    TABLE_SIDE " BOOL NOT NULL,"
                    TABLE_CORNER " BOOL NOT NULL"
                    " )"
                    )){
        b = false;
    }
    if(!query.exec( "CREATE TABLE " TABLE_HOTEL"("
                    TABLE_ID " INT NOT NULL, "
                    TABLE_NUMBER " INT NOT NULL,"
                    TABLE_AREA " FLOAT NOT NULL,"
                    TABLE_FLOOR " INT NOT NULL,"
                    TABLE_ROOMS " INT NOT NULL,"
                    TABLE_STREET " TEXT NOT NULL,"
                    TABLE_PRICE " INT NOT NULL,"
                    TABLE_BAR " BOOL NOT NULL,"
                    TABLE_CLEANING " BOOL NOT NULL"
                    " )"
                    )){
        b = false;
    }
        return b;
}

bool SqliteDBManager::insertIntoApart(Apartment& apart)
{
        QSqlQuery query;
        query.prepare("INSERT INTO " TABLE_APART " ("
                      TABLE_ID ", "
                      TABLE_NUMBER ", "
                      TABLE_AREA ", "
                      TABLE_FLOOR ", "
                      TABLE_ROOMS ", "
                      TABLE_STREET ", "
                      TABLE_SIDE ", "
                      TABLE_CORNER ") "
                      "VALUES(:ID, :number, :area, :floor, :rooms, :street, :sunnySide, :corner)");
        query.bindValue(":ID", apart.getId());
        query.bindValue(":number", apart.getNumber());
        query.bindValue(":area",apart.getArea());
        query.bindValue(":floor", apart.getFloor());
        query.bindValue(":rooms", apart.getRooms());
        query.bindValue(":street", QString::fromStdString(apart.getStreet()));
        query.bindValue(":sunnySide", apart.getSunnySide());
        query.bindValue(":corner", apart.getCorner());

        if (!query.exec()) {
        qDebug() << "Error in insert to Apartment table: "; return false;
        } else return true;
}

bool SqliteDBManager::insertIntoHotel(HotelRoom& hotel)
{
    QSqlQuery query;
                query.prepare("INSERT INTO " TABLE_HOTEL " ("
                              TABLE_ID ", "
                              TABLE_NUMBER ", "
                              TABLE_AREA ", "
                              TABLE_FLOOR ", "
                              TABLE_ROOMS ", "
                              TABLE_STREET ", "
                              TABLE_PRICE ", "
                              TABLE_BAR ", "
                              TABLE_CLEANING ") "
                              "VALUES (:ID, :number, :area, :floor, :rooms, :street, :dayPrice, :bar, :cleaning)");
                query.bindValue(":ID", hotel.getId());
                query.bindValue(":number",hotel.getNumber());
                query.bindValue(":area", hotel.getArea());
                query.bindValue(":floor", hotel.getFloor());
                query.bindValue(":rooms", hotel.getRooms());
                query.bindValue(":street", QString::fromStdString(hotel.getStreet()));
                query.bindValue(":dayPrice", hotel.getDayPrice());
                query.bindValue(":bar", hotel.getBar());
                query.bindValue(":cleaning", hotel.getCleaning());

        if (!query.exec()) {
        qDebug() << "Error in insert to HotelRoom table: "; return false;
    } else return true;
}

