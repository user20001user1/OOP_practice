#pragma once

#include <string>
#include <iostream>
#include "House.h"

class HotelRoom : public House{
   
    int dayPrice;
    bool bar;
    bool cleaning;

public:
    HotelRoom();
    HotelRoom(int id, int number, double area, int floor, int rooms, std::string street, int dayPrice, bool bar, bool cleaning);
    HotelRoom(const HotelRoom& other);
    int getId() override;
    int getNumber() override;
    double getArea() override;
    int getFloor() override;
    int getRooms() override;
    std::string getStreet() override;
    int getDayPrice();
    bool getBar();
    bool getCleaning();
   ~HotelRoom();
};
