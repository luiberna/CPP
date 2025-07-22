#include "Array.hpp"
#include <iostream>
#include <cstdlib> 
#include <ctime> 

int main() {
    try {
        std::cout << "Creating an empty Array<int>...\n";
        Array<int> a;
        std::cout << "Size of a: " << a.getSize() << "\n\n";

        std::cout << "Creating Array<int> of size 5...\n";
        Array<int> b(5);
        for (int i = 0; i < b.getSize(); ++i)
            b[i] = i * 10;

        std::cout << "Contents of b:\n";
        for (int i = 0; i < b.getSize(); ++i)
            std::cout << b[i] << " ";
        std::cout << "\n\n";

        std::cout << "Copying b into c using copy constructor...\n";
        Array<int> c(b);
        std::cout << "Contents of c:\n";
        for (int i = 0; i < c.getSize(); ++i)
            std::cout << c[i] << " ";
        std::cout << "\n\n";

        std::cout << "Creating Array<int> d and assigning b to it...\n";
        Array<int> d;
        d = b;
        std::cout << "Contents of d:\n";
        for (int i = 0; i < d.getSize(); ++i)
            std::cout << d[i] << " ";
        std::cout << "\n\n";

        std::cout << "Trying out-of-bounds access...\n";
        std::cout << b[10] << "\n"; // should throw

    } catch (const std::exception &e) {
        std::cerr << "Exception caught: " << e.what() << "\n";
    }

    std::cout << "\nTesting with std::string...\n";
    Array<std::string> strArray(3);
    strArray[0] = "Hello";
    strArray[1] = "Array";
    strArray[2] = "World";

    for (int i = 0; i < strArray.getSize(); ++i)
        std::cout << strArray[i] << "\n";

    return 0;
}
