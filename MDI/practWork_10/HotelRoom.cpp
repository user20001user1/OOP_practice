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

void HotelRoom::setDayPrice(int dayPrice) {
    this->dayPrice = dayPrice;
}

void HotelRoom::setBar(bool bar) {
    this->bar = bar;
}

void HotelRoom::setCleaning(bool cleaning) {
    this->cleaning = cleaning;
}

void HotelRoom::setId(int id) {
    House::setId(id);
}

void HotelRoom::setNumber(int number) {
    House::setNumber(number);
}

void HotelRoom::setArea(double area) {
    House::setArea(area);
}

void HotelRoom::setFloor(int floor) {
    House::setFloor(floor);
}

void HotelRoom::setRooms(int rooms) {
    House::setRooms(rooms);
}

void HotelRoom::setStreet(std::string street) {
    House::setStreet(street);
}

HotelRoom::~HotelRoom() {
}
