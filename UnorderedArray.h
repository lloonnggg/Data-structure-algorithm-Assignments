#pragma once
#include "Array.h"

template <typename T>
class UnorderedArray : public Array<T> {
public:
    UnorderedArray(int initialCapacity = 2) : Array<T>(initialCapacity) {}
};