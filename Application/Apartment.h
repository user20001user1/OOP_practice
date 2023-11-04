#pragma once

class Apartment {
public:
    // ������������
    Apartment();  // ����������� �� �������������
    Apartment(int id, int number, double area, int floor, int rooms, const char* street, bool sunnySide, bool corner);

    // ����������
    ~Apartment();

private:
    int id;
    int number;
    double area;
    int floor;
    int rooms;
    char street[100];
    bool sunnySide;
    bool corner;
};
