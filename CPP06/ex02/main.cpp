#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void) {
    int randomValue = rand() % 3;
    if (randomValue == 0) {
        std::cout << "Generated A" << std::endl;
        return new A();
    }
    else if (randomValue == 1) {
        std::cout << "Generated B" << std::endl;
        return new B();
    }
    else {
        std::cout << "Generated C" << std::endl;
        return new C();
    }
}

void identify(Base *p) {
    if (dynamic_cast<A *>(p))
        std::cout << "Type A" << std::endl;
    else if (dynamic_cast<B *>(p))
        std::cout << "Type B" << std::endl;
    else if (dynamic_cast<C *>(p))
        std::cout << "Type C" << std::endl;
    else
        std::cout << "Unknown" << std::endl;
}

void identify(Base &p) {
    try {
        A &a = dynamic_cast<A &>(p);
        std::cout << "Type A" << std::endl;
        (void)a;
    }
    catch (std::bad_cast &) {
        try {
            B &b = dynamic_cast<B &>(p);
            std::cout << "Type B" << std::endl;
            (void)b;
        }
        catch (std::bad_cast &) {
            try {
                C &c = dynamic_cast<C &>(p);
                std::cout << "Type C" << std::endl;
                (void)c;
            }
            catch (std::bad_cast &) {
                std::cout << "Unknown" << std::endl;
            }
        }
    }
}

int main() {
    srand(time(NULL));

    Base *basePtr = generate();
    std::cout << "Identifying using pointer:" << std::endl;
    identify(basePtr);
    std::cout << "Identifying using reference:" << std::endl;
    identify(*basePtr);
    delete basePtr;
    return 0;
}