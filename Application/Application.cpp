#include <iostream>
#include "Apartment.h"
#include "HotelRoom.h"
#include "ApartmentBase.h"
using namespace std;

int main()
{
	/*Apartment object1, object2, object3;
	std::cin >> object1 >> object2 >> object3;

	std::cout << object1 << endl << object2 << endl << object3;*/

	HotelRoom a;
	a.Print();

	cout << endl;

	ApartmentBase b;
	b.Print();
}