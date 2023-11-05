#pragma once

#include <iostream>
using namespace std;

template <class T>
class Vector {
private:
    T* array = new T[10];
    int size;
    int capacity;

public:
    Vector() : size(0), capacity(10) {}

    int getSize() {
        return size;
    }

    int getCapacity() {
        return capacity;
    }

    void push_back(T element) {
        if (size == capacity) {
            // Створення нового масиву з більшим розміром
            capacity *= 2;
            T* newArray = new T[capacity];
            for (int i = 0; i < size; i++) {
                newArray[i] = array[i];
            }
            delete[] array;
            array = newArray;
        }
        array[size] = element;
        size++;
    }

    void pop_back() {
        if (size > 0) {
            size--;
        }
    }

    T at(int index) {
        if (index >= 0 && index < size) {
            return array[index];
        }
        throw out_of_range("Index out of range");
    }

    T operator[](int index) {
        return at(index);
    }
};