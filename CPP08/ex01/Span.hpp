#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <algorithm>
#include <iostream>
#include <limits>
#include <stdexcept>

class Span {
    private:
        unsigned int _size;
        std::vector<int> _numbers;
    public:
        Span();
        Span(unsigned int size);
        Span(const Span &other);
        Span &operator=(const Span &other);
        ~Span();

        //Methods
        void addNumber(int number);
        int shortestSpan();
        int longestSpan();
};

#endif