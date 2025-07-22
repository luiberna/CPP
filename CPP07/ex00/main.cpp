#include "whatever.hpp"

int main() {
    // Test with integers
    int a = 10;
    int b = 20;

    std::cout << "Before swap: a = " << a << ", b = " << b << std::endl;
    ::swap(a, b);
    std::cout << "After swap:  a = " << a << ", b = " << b << std::endl;
    std::cout << "min(a, b): " << ::min(a, b) << std::endl;
    std::cout << "max(a, b): " << ::max(a, b) << std::endl;

    std::cout << "--------------------------" << std::endl;

    // Test with strings
    std::string x = "apple";
    std::string y = "banana";

    std::cout << "Before swap: x = " << x << ", y = " << y << std::endl;
    ::swap(x, y);
    std::cout << "After swap:  x = " << x << ", y = " << y << std::endl;
    std::cout << "min(x, y): " << ::min(x, y) << std::endl;
    std::cout << "max(x, y): " << ::max(x, y) << std::endl;

    return 0;
}
