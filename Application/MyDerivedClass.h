#pragma once

#include <iostream>
#include <string>
#include "MyBaseClass.h"

using namespace std;

class MyDerivedClass1 : public MyBaseClass {
public:
    void myVirtualMethod() override {
        cout << "��������� ����������� ������ ��� MyDerivedClass1." << endl;
    }
};

class MyDerivedClass2 : public MyBaseClass {
public:
    void myVirtualMethod() override {
        cout << "��������� ����������� ������ ��� MyDerivedClass2." << endl;
    }
};
