#ifndef APARTMENT_H
#define APARTMENT_H

#endif // APARTMENT_H

#pragma once

#include <string>
#include <iostream>
#include "House.h"

class Apartment : public House {
    bool sunnySide;
    bool corner;

public:
    Apartment();
    Apartment(int id, int number, double area, int floor, int rooms, std::string street, bool sunnySide, bool corner);
    Apartment(const Apartment& other);
    int getId() override;
    int getNumber() override;
    double getArea() override;
    int getFloor() override;
    int getRooms() override;
    std::string getStreet() override;
    bool getSunnySide();
    bool getCorner();
    void setId(int id) override;
    void setNumber(int number) override;
    void setArea(double area) override;
    void setFloor(int floor) override;
    void setRooms(int rooms) override;
    void setStreet(std::string street) override;
    void setSunnySide(bool sunnySide);
    void setCorner(bool corner);

   ~Apartment();
};
