#define _CRT_SECURE_NO_WARNINGS
#include "Apartment.h"
#include <cstring>

// ��������� ������������
Apartment::Apartment() {
    // ������������ �� �������������
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

// ��������� �����������
Apartment::~Apartment() {
    // �������� ����������, �� ���� ������� ���'��
}