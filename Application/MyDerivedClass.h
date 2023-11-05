#pragma once

#include <iostream>
#include <string>
#include "MyBaseClass.h"

using namespace std;

class MyDerivedClass1 : public MyBaseClass {
public:
    void myVirtualMethod() override {
        cout << "Реалізація віртуального методу для MyDerivedClass1." << endl;
    }
};

class MyDerivedClass2 : public MyBaseClass {
public:
    void myVirtualMethod() override {
        cout << "Реалізація віртуального методу для MyDerivedClass2." << endl;
    }
};
