#pragma once
#include <iostream>  
#include <string>    
#include <vector>    

using namespace std;

class HotelRoom {
public:
    int id;
    int roomNumber;
    int floor;
    int numberOfRooms;
    string street;
    double dailyRate;
    vector<string> amenities;

    HotelRoom() : id(0), roomNumber(0), floor(0), numberOfRooms(0), street(""), dailyRate(0.0) {}
    HotelRoom(int id, int roomNumber, int floor, int numberOfRooms, const string& street, double dailyRate, const vector<string>& amenities) : id(id), roomNumber(roomNumber), floor(floor), numberOfRooms(numberOfRooms), street(street), dailyRate(dailyRate), amenities(amenities) {}

    void Print()
    {
        std::cout << "Hello, HotelRoom";
    }
};
