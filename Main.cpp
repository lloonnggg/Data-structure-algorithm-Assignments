#include "OrderedArray.h"
#include "UnorderedArray.h"
#include <iostream>

int main() {
    OrderedArray<int> orderedArr;
    orderedArr.Push(5);
    orderedArr.Push(3);
    orderedArr.Push(8);
    orderedArr.Push(3); // Will not be added due to duplicate prevention

    UnorderedArray<int> unorderedArr;
    unorderedArr.Push(5);
    unorderedArr.Push(3);
    unorderedArr.Push(8);
    unorderedArr.Push(3);

    std::cout << "Ordered Array: ";
    orderedArr.Display();

    std::cout << "Unordered Array: ";
    unorderedArr.Display();

    return 0;
}