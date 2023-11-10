#include "HotelRoom.h"

HotelRoom::HotelRoom(){
    House(); 
    dayPrice = 0;
    bar = false;
    cleaning = false;
}

HotelRoom::HotelRoom(int id, int number, double area,int floor,int rooms, std::string street, int dayPrice, bool bar, bool cleaning) : House(id, number, area, floor, rooms, street) {
    this->dayPrice = dayPrice;
    this->bar = bar;
    this->cleaning = cleaning;
}

HotelRoom::HotelRoom(const HotelRoom& other) : House(other){
    dayPrice = other.dayPrice;
    bar = other.bar;
    cleaning = other.cleaning;
}

int HotelRoom::getId() { return House::getId(); }
int HotelRoom::getNumber() { return House::getNumber(); }
double HotelRoom::getArea() { return House::getArea(); }
int HotelRoom::getFloor() { return House::getFloor(); }
int HotelRoom::getRooms() { return House::getRooms(); }
std::string HotelRoom::getStreet() { return House::getStreet(); }
int HotelRoom::getDayPrice(){return dayPrice;}
bool HotelRoom::getBar(){return bar;}
bool HotelRoom::getCleaning(){return cleaning;}

HotelRoom::~HotelRoom() {
}
