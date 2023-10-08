#pragma once
#include <iostream>
template <typename T>
class Array {
protected:
    T* data;
    int size;
    int capacity;

public:
    Array(int initialCapacity = 2) : size(0), capacity(initialCapacity) {
        data = new T[capacity];
    }

    ~Array() {
        delete[] data;
    }

    void Expand() {
        capacity *= 2;
        T* newData = new T[capacity];
        for (int i = 0; i < size; i++) {
            newData[i] = data[i];
        }
        delete[] data;
        data = newData;
    }

    void Push(T value) {
        if (size == capacity) {
            Expand();
        }
        data[size++] = value;
    }

    void Display() {
        for (int i = 0; i < size; i++) {
            std::cout << data[i] << " ";
        }
        std::cout << std::endl;
    }
};