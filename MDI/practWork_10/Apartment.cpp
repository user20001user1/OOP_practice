#include "Apartment.h"

Apartment::Apartment(){
    House();
    sunnySide = false;
    corner = false;
}

Apartment::Apartment(int id, int number, double area,int floor,int rooms, std::string street,bool sunnySide, bool corner) :  House(id, number, area, floor, rooms, street) {
    this->sunnySide = sunnySide;
    this->corner = corner;
}

Apartment::Apartment(const Apartment& other) : House(other){
    sunnySide = other.sunnySide;
    corner = other.corner;
}

int Apartment::getId() { return House::getId(); }
int Apartment::getNumber() { return House::getNumber(); }
double Apartment::getArea() { return House::getArea(); }
int Apartment::getFloor() { return House::getFloor(); }
int Apartment::getRooms() { return House::getRooms(); }
std::string Apartment::getStreet() { return House::getStreet(); }
bool Apartment::getSunnySide(){return sunnySide;}
bool Apartment::getCorner(){return corner;}

Apartment::~Apartment() {
}
