#include "House.h"

House::House(){
    id = 0;
    number = 0;
    area = 0.0;
    floor = 0;
    rooms = 0;
    street = "\0";
}

int House::getId() { return id; }
int House::getNumber() { return number; }
double House::getArea() { return area; }
int House::getFloor() { return floor; }
int House::getRooms() { return rooms; }
std::string House::getStreet() { return street; }

House::House(int id, int number, double area,int floor,int rooms, std::string street) {
    this->id = id;
    this->number = number;
    this->area = area;
    this->floor = floor;
    this->rooms = rooms;
    this->street = street;
}

House::House(const House& other){
    id = other.id;
    number = other.number;
    area = other.area;
    floor = other.floor;
    rooms = other.rooms;
    street = other.street;
}

House::~House() {
}
