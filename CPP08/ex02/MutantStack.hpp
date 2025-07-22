#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <string>
#include "stack"
#include "vector"

template<class T>
class MutantStack : public std::stack<T> {
    public:
        MutantStack() {};
        MutantStack(const MutantStack &other) {
            *this = other;
        };
        MutantStack &operator=(const MutantStack &other) {
            if (this != &other) {
                this->c = other.c;
                return *this;
            }
        }
        ~MutantStack() {};
        typedef typename std::stack<T>::container_type::iterator iterator;
        typedef typename std::stack<T>::container_type::const_iterator const_iterator;
        iterator begin() {
            return this->c.begin();
        };
        iterator end() {
            return this->c.end();
        };
        iterator cbegin() {
            return this->c.begin();
        };
        iterator cend() {
            return this->c.end();
        };
};


#endif