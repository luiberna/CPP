#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <iterator>
#include <stdexcept>

template <typename T>
typename T::iterator easyfind (T &container, int value) {
    typename T::iterator iter = std::find(container.begin(), container.end(), value);
    if (iter == container.end()) {
        throw std::runtime_error("Value not found in the container");
    }
    return iter;
}

#endif