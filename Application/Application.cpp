#include <iostream>
#include <vector>
#include <Windows.h>
#include <algorithm>
#include <list>
#include <map>
#include <ctime>
#include <cstdlib>
#include "Apartment.h"
#include "HotelRoom.h"
#include "ApartmentBase.h"
#include "MyDerivedClass.h"
#include "Vector.h"
#include "MyBaseClass.h"
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

	/*HotelRoom a;
	a.Print();

	cout << endl;

	ApartmentBase b;
	b.Print();

    createObjectsAndCallMethod();*/

    /*Vector<int> intVector;
    intVector.push_back(1);
    intVector.push_back(2);
    intVector.push_back(3);
    cout << "Vector size: " << intVector.getSize() << endl;
    cout << "Vector capacity: " << intVector.getCapacity() << endl;

    for (int i = 0; i < intVector.getSize(); i++) {
        cout << intVector[i] << " ";
    }
    cout << endl;

    Vector<string> stringVector;
    stringVector.push_back("Hello");
    stringVector.push_back("World");
    cout << "Vector size: " << stringVector.getSize() << endl;
    cout << "Vector capacity: " << stringVector.getCapacity() << endl;

    for (int i = 0; i < stringVector.getSize(); i++) {
        cout << stringVector[i] << " ";
    }
    cout << endl;

    return 0;*/

    
    /*srand(time(nullptr));
    vector<int> oddNumbers;
    vector<int> evenNumbers;

    // Fill the vectors with random numbers
    for (int i = 0; i < 10; ++i) {
        int randomNumber = rand() % 100;
        if (randomNumber % 2 == 0) {
            evenNumbers.push_back(randomNumber);
        }
        else {
            oddNumbers.push_back(randomNumber);
        }
    }

    // Sort the vectors
    sort(oddNumbers.begin(), oddNumbers.end());
    sort(evenNumbers.begin(), evenNumbers.end());

    // Print the contents of the vectors
    cout << "Odd Numbers: ";
    for (int number : oddNumbers) {
        cout << number << " ";
    }
    cout << endl;

    cout << "Even Numbers: ";
    for (int number : evenNumbers) {
        cout << number << " ";
    }
    cout << endl;

    return 0;*/

    // Завдання 1
    // Створимо два контейнери list для зберігання цілих чисел
    list<int> oddNumbers;
    list<int> evenNumbers;

    // Заповнимо перший контейнер непарними числами
    for (int i = 1; i <= 10; i += 2) {
        oddNumbers.push_back(i);
    }

    // Виведемо вміст першого контейнера
    cout << "oddNumbers: ";
    for (int num : oddNumbers) {
        cout << num << " ";
    }
    cout << endl;

    // Завдання 2
    // Заповнимо другий контейнер парними числами за допомогою генератора випадкових чисел
    srand(static_cast<unsigned int>(time(nullptr)));
    for (int i = 0; i < 10; i++) {
        evenNumbers.push_back(rand() % 100 * 2);
    }

    // Виведемо вміст другого контейнера
    cout << "evenNumbers: ";
    for (int num : evenNumbers) {
        cout << num << " ";
    }
    cout << endl;

    // Завдання 3
    // Створимо третій контейнер для об'єднання двох попередніх
    list<int> mergedNumbers;

    // Відсортуємо перші два контейнери
    oddNumbers.sort();
    evenNumbers.sort();

    // Об'єднаємо відсортовані контейнери
    merge(oddNumbers.begin(), oddNumbers.end(), evenNumbers.begin(), evenNumbers.end(),
        back_inserter(mergedNumbers));

    // Виведемо вміст третього контейнера
    cout << "mergedNumbers: ";
    for (int num : mergedNumbers) {
        cout << num << " ";
    }
    cout << endl;

    // Завдання 4
    // Створимо асоціативний контейнер map для зберігання вказівників на базовий клас
    map<int, BaseClass*> objectMap;

    // Завдання 5 - Заповнити map об'єктами похідних класів

    cout << "Enter the number of objects to create and store in the map: ";
    int numObjects;
    cin >> numObjects;

    for (int i = 0; i < numObjects; i++) {
        int id;
        cout << "Enter ID for object " << i + 1 << ": ";
        cin >> id;

        int choice;
        cout << "Select the derived class type (1 - DerivedClass1, 2 - DerivedClass2): ";
        cin >> choice;

        BaseClass* object;

        if (choice == 1) {
            object = new DerivedClass1();
        }
        else if (choice == 2) {
            object = new DerivedClass2();
        }
        else {
            cout << "Invalid choice. Using default (DerivedClass1)." << endl;
            object = new DerivedClass1();
        }

        objectMap[id] = object;
    }

    // Завдання 6 - Вивести об'єкти з map за ідентифікатором

    cout << "Enter the ID of the object you want to display: ";
    int displayId;
    cin >> displayId;

    if (objectMap.find(displayId) != objectMap.end()) {
        BaseClass* objToDisplay = objectMap[displayId];
        objToDisplay->display();
    }
    else {
        cout << "Object with ID " << displayId << " not found in the map." << endl;
    }

    // Завдання 7 - Знайти та видалити всі об'єкти першого підкласу (DerivedClass1)

    for (auto it = objectMap.begin(); it != objectMap.end(); ) {
        if (dynamic_cast<DerivedClass1*>(it->second) != nullptr) {
            delete it->second;
            it = objectMap.erase(it);
        }
        else {
            ++it;
        }
    }

    // Завдання 8 - Знайти та видалити всі об'єкти другого підкласу (DerivedClass2)

    for (auto it = objectMap.begin(); it != objectMap.end(); ) {
        if (dynamic_cast<DerivedClass2*>(it->second) != nullptr) {
            delete it->second;
            it = objectMap.erase(it);
        }
        else {
            ++it;
        }

    }

    // Після завершення роботи виведемо залишок об'єктів у мапі

    cout << "Objects remaining in the map:" << endl;
    for (const auto& pair : objectMap) {
        cout << "ID: " << pair.first << " - ";
        pair.second->display();
    }

    return 0;
}

