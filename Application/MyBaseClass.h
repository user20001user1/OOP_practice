#pragma once

#include <iostream>
#include <string>

using namespace std;

class MyBaseClass {
public:
    virtual void myVirtualMethod() {
        cout << "Це віртуальний метод базового класу." << endl;
    }
};
