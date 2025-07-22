#include "Span.hpp"

Span::Span() : _size(0) {}

Span::Span(unsigned int size) : _size(size) {}

Span::Span(const Span &other) : _size(other._size), _numbers(other._numbers) {}

Span &Span::operator=(const Span &other) {
    if (this != &other) {
        _size = other._size;
        _numbers = other._numbers;
    }
    return *this;
}

Span::~Span() {}

//Adds a number to the Span
void Span::addNumber (int number) {
    if (_numbers.size() >= _size)
        throw std::runtime_error("Span is full");
    _numbers.push_back(number);
}


int Span::shortestSpan() {
    if (_numbers.size() < 2)
        throw std::runtime_error("Not enough numbers to find a span");
    //Copy the vector to sort it
    std::vector<int> sortedNumbers = _numbers;
    //Sort the copied vector
    std::sort(sortedNumbers.begin(), sortedNumbers.end());
    //Initialize the minimum span to the maximum possible value
    int minSpan = std::numeric_limits<int>::max();
    //Iterate through the sorted vector to find the minimum span
    for (size_t i = 1; i < sortedNumbers.size(); ++i) {
        int span = sortedNumbers[i] - sortedNumbers[i - 1];
        if (span < minSpan)
            minSpan = span;
    }
    return minSpan;
}


int Span::longestSpan() {
    if (_numbers.size() < 2)
        throw std::runtime_error("Not enough numbers to find a span");
    //STL (Standard Template Library) algorithm to find minimum and maximum element
    std::vector<int>::iterator minIt = std::min_element(_numbers.begin(), _numbers.end());
    std::vector<int>::iterator maxIt = std::max_element(_numbers.begin(), _numbers.end());
    return *maxIt - *minIt;
}


