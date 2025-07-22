#include <iostream>
#include <vector>
#include <list>
#include "easyfind.hpp"

int main() {
    std::cout << "Testing with std::vector<int>\n";
    std::vector<int> vec;
    for (int i = 0; i < 10; ++i)
        vec.push_back(i * 10);

    try {
        std::vector<int>::iterator it = easyfind(vec, 30);
        std::cout << "Found in vector: " << *it << "\n";
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << "\n";
    }

    try {
        easyfind(vec, 42); //Not in vector
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << "\n";
    }

    std::cout << "\nTesting with std::list<int>\n";
    std::list<int> lst;
    for (int i = 1; i <= 5; ++i)
        lst.push_back(i * 100);

    try {
        std::list<int>::iterator it = easyfind(lst, 400);
        std::cout << "Found in list: " << *it << "\n";
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << "\n";
    }

    try {
        easyfind(lst, 999); //Not in list
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << "\n";
    }

    return 0;
}
