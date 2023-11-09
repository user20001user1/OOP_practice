#include "Apartment.h"

int id;
int number;
double area;
int floor;
int rooms;
std::string street;
bool sunnySide;
bool corner;

Apartment::Apartment(){
    id = 0;
    number = 0;
    area = 0.0;
    floor = 0;
    rooms = 0;
    street = "\0";
    sunnySide = false;
    corner = false;
}

Apartment::Apartment(int id, int number, double area,int floor,int rooms, std::string street,bool sunnySide, bool corner) {
    this->id = id;
    this->number = number;
    this->area = area;
    this->floor = floor;
    this->rooms = rooms;
    this->street = street;
    this->sunnySide = sunnySide;
    this->corner = corner;
}

Apartment::Apartment(const Apartment& other){
    id = other.id;
    number = other.number;
    area = other.area;
    floor = other.floor;
    rooms = other.rooms;
    street = other.street;
    sunnySide = other.sunnySide;
    corner = other.corner;
}

Apartment::~Apartment() {
}
