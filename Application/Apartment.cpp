#define _CRT_SECURE_NO_WARNINGS
#include "Apartment.h"
#include <cstring>
#include <iostream>
using namespace std;

// Реалізація конструкторів
Apartment::Apartment() {
    // Ініціалізація за замовчуванням
    id = 0;
    number = 0;
    area = 0.0;
    floor = 0;
    rooms = 0;
    street[0] = '\0';
    sunnySide = false;
    corner = false;
}

Apartment::Apartment(int id, int number, double area, int floor, int rooms, const char* street, bool sunnySide, bool corner) {
    // Параметризований конструктор
    this->id = id;
    this->number = number;
    this->area = area;
    this->floor = floor;
    this->rooms = rooms;
    strncpy(this->street, street, 99);
    this->street[99] = '\0';
    this->sunnySide = sunnySide;
    this->corner = corner;
}

// Реалізація конструктора копіювання
Apartment::Apartment(const Apartment& other) {
    id = other.id;
    number = other.number;
    area = other.area;
    floor = other.floor;
    rooms = other.rooms;
    strncpy(street, other.street, 99);
    street[99] = '\0';
    sunnySide = other.sunnySide;
    corner = other.corner;
}

// Реалізація деструктора
Apartment::~Apartment() {
    // Порожній деструктор, бо немає виділеної пам'яті
}

// Оператор зчитування об'єкту з консольного потоку
istream& operator>>(istream& in, Apartment& apartment) {
    cout << "Введіть дані для квартири:" << endl;
    cout << "ID: ";
    in >> apartment.id;
    cout << "Номер квартири: ";
    in >> apartment.number;
    cout << "Площа: ";
    in >> apartment.area;
    cout << "Поверх: ";
    in >> apartment.floor;
    cout << "Кількість кімнат: ";
    in >> apartment.rooms;
    cout << "Вулиця: ";
    in.ignore();  // Для очищення буфера перед введенням рядка
    in.getline(apartment.street, 100);
    cout << "Сонячна сторона (1 - так, 0 - ні): ";
    in >> apartment.sunnySide;
    cout << "Кутова квартира (1 - так, 0 - ні): ";
    in >> apartment.corner;
    return in;
}

// Оператор виводу об'єкта в потік
ostream& operator<<(ostream& out, const Apartment& apartment) {
    out << "ID: " << apartment.id << endl;
    out << "Номер квартири: " << apartment.number << endl;
    out << "Площа: " << apartment.area << endl;
    out << "Поверх: " << apartment.floor << endl;
    out << "Кількість кімнат: " << apartment.rooms << endl;
    out << "Вулиця: " << apartment.street << endl;
    out << "Сонячна сторона: " << (apartment.sunnySide ? "Так" : "Ні") << endl;
    out << "Кутова квартира: " << (apartment.corner ? "Так" : "Ні") << endl;
    return out;
}



