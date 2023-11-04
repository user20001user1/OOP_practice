#define _CRT_SECURE_NO_WARNINGS
#include "Apartment.h"
#include <cstring>
#include <iostream>
using namespace std;

// ��������� ������������
Apartment::Apartment() {
    // ����������� �� �������������
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
    // ���������������� �����������
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

// ��������� ������������ ���������
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

// ��������� �����������
Apartment::~Apartment() {
    // ������� ����������, �� ���� ������� ���'��
}

// �������� ���������� ��'���� � ����������� ������
istream& operator>>(istream& in, Apartment& apartment) {
    cout << "������ ��� ��� ��������:" << endl;
    cout << "ID: ";
    in >> apartment.id;
    cout << "����� ��������: ";
    in >> apartment.number;
    cout << "�����: ";
    in >> apartment.area;
    cout << "������: ";
    in >> apartment.floor;
    cout << "ʳ������ �����: ";
    in >> apartment.rooms;
    cout << "������: ";
    in.ignore();  // ��� �������� ������ ����� ��������� �����
    in.getline(apartment.street, 100);
    cout << "������� ������� (1 - ���, 0 - �): ";
    in >> apartment.sunnySide;
    cout << "������ �������� (1 - ���, 0 - �): ";
    in >> apartment.corner;
    return in;
}

// �������� ������ ��'���� � ����
ostream& operator<<(ostream& out, const Apartment& apartment) {
    out << "ID: " << apartment.id << endl;
    out << "����� ��������: " << apartment.number << endl;
    out << "�����: " << apartment.area << endl;
    out << "������: " << apartment.floor << endl;
    out << "ʳ������ �����: " << apartment.rooms << endl;
    out << "������: " << apartment.street << endl;
    out << "������� �������: " << (apartment.sunnySide ? "���" : "ͳ") << endl;
    out << "������ ��������: " << (apartment.corner ? "���" : "ͳ") << endl;
    return out;
}



