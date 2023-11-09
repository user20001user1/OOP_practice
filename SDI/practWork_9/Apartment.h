#ifndef APARTMENT_H
#define APARTMENT_H

#endif // APARTMENT_H

#pragma once

#include <string>
#include <iostream>

class Apartment {
    int id;
    int number;
    double area;
    int floor;
    int rooms;
    std::string street;
    bool sunnySide;
    bool corner;

public:
    Apartment();
    Apartment(int id, int number, double area, int floor, int rooms, std::string street, bool sunnySide, bool corner);
    Apartment(const Apartment& other);
   ~Apartment();
};
