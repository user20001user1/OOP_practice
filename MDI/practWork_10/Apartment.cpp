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

void Apartment::setId(int id) {
    House::setId(id);
}

void Apartment::setNumber(int number) {
    House::setNumber(number);
}

void Apartment::setArea(double area) {
    House::setArea(area);
}

void Apartment::setFloor(int floor) {
    House::setFloor(floor);
}

void Apartment::setRooms(int rooms) {
    House::setRooms(rooms);
}

void Apartment::setStreet(std::string street) {
    House::setStreet(street);
}

void Apartment::setSunnySide(bool sunnySide) {
    this->sunnySide = sunnySide;
}

void Apartment::setCorner(bool corner) {
    this->corner = corner;
}

Apartment::~Apartment() {
}
