#include <iostream>
#include <Windows.h>
#include "Apartment.h"
#include "HotelRoom.h"
#include "ApartmentBase.h"
#include "MyDerivedClass.h"
using namespace std;

void createObjectsAndCallMethod() {
    MyBaseClass* objects[5];
    cout << endl<< "Create 5 objects:\n";
    for (int i = 0; i < 5; i++) {
        cout << i+1 << ". Оберіть клас для створення об'єкта (1 або 2): ";
        int choice;
        cin >> choice;
        if (choice == 1) {
            objects[i] = new MyDerivedClass1;
        }
        else if (choice == 2) {
            objects[i] = new MyDerivedClass2;
        }
    }

    for (int i = 0; i < 5; i++) {
        objects[i]->myVirtualMethod();
    }
}

int main()
{
    SetConsoleCP(1251); 
    SetConsoleOutputCP(1251);
	/*Apartment object1, object2, object3;
	std::cin >> object1 >> object2 >> object3;

	std::cout << object1 << endl << object2 << endl << object3;*/

	HotelRoom a;
	a.Print();

	cout << endl;

	ApartmentBase b;
	b.Print();

    createObjectsAndCallMethod();
}

