#include "iter.hpp"
#include <iostream>
#include <string>

void printInt(int &x) {
    std::cout << "Int: " << x << std::endl;
}

template <typename T>
void printGeneric(T &x) {
    std::cout << "Generic: " << x << std::endl;
}

void incrementInt(int &x) {
    x++;
}

template <typename T>
void doubleValue(T &x) {
    x *= 2;
}

int main() {
    int intArray[] = {1, 2, 3, 4, 5};
    size_t intSize = sizeof(intArray) / sizeof(intArray[0]);

    std::cout << "---Original---\n";
    iter(intArray, intSize, printInt);

    std::cout << "---Incremented---\n";
    iter(intArray, intSize, incrementInt);
    iter(intArray, intSize, printInt);

    std::cout << "---Doubled---\n";
    iter(intArray, intSize, doubleValue<int>);
    iter(intArray, intSize, printGeneric<int>);

    return 0;
}
