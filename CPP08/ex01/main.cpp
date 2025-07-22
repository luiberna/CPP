#include "Span.hpp"

int main() {
    Span sp(10000);
    for (int i = 0; i < 10000; ++i)
        sp.addNumber(rand());

    std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
    std::cout << "Longest span: " << sp.longestSpan() << std::endl;
}
