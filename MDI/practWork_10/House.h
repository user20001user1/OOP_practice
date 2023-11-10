#pragma once

#include <string>
#include <iostream>

class House {
    int id;
    int number;
    double area;
    int floor;
    int rooms;
    std::string street;

public:
    House();
    House(int id, int number, double area, int floor, int rooms, std::string street);
    House(const House& other);
    // virtual void method_() = 0;
    virtual int getId();
    virtual int getNumber();
    virtual double getArea();
    virtual int getFloor();
    virtual int getRooms();
    virtual std::string getStreet();
    virtual ~House();
};
