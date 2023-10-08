#pragma once
#include "Array.h"

template <typename T>
class OrderedArray : public Array<T> {
public:
    OrderedArray(int initialCapacity = 2) : Array<T>(initialCapacity) {}

    void Push(T value, bool allowDuplicates = false) {
        if (!allowDuplicates) {
            for (int i = 0; i < this->size; i++) {
                if (this->data[i] == value) {
                    return; // Don't add duplicate value
                }
            }
        }

        if (this->size == this->capacity) {
            this->Expand();
        }

        int i = this->size - 1;
        while (i >= 0 && this->data[i] > value) {
            this->data[i + 1] = this->data[i];
            i--;
        }
        this->data[i + 1] = value;
        this->size++;
    }
};