#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void iter(T *array, size_t arrayLength, void (*f)(T &t)) {
    for (size_t i = 0; i < arrayLength; ++i) {
        f(array[i]);
    }
}

#endif