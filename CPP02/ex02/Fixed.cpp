/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiberna <luiberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 18:04:48 by luiberna          #+#    #+#             */
/*   Updated: 2024/10/21 20:57:37 by luiberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int Fixed::fract = 8;

Fixed::Fixed() : fixed(0) {
    //std::cout << "Default constructor called.\n";
}

Fixed::~Fixed() {
    //std::cout << "Destructor called.\n";
}

Fixed::Fixed(const Fixed &other) {
    //std::cout << "Copy constructor called.\n";
    *this = other;
}

Fixed& Fixed::operator=(const Fixed& other) {
   //std::cout << "Copy assignment operator called.\n";
   if (this != &other) {
        fixed = other.getRawBits();
        fract = other.fract;
   }
   return *this;
}

int Fixed::getRawBits() const {
    return this->fixed;
}

void Fixed::setRawBits(const int raw) {
    this->fixed = raw;
}

Fixed::Fixed(const int nb) {
    //std::cout << "Int constructor called.\n";
    this->setRawBits(nb << fract);
}


//ex01
Fixed::Fixed(const float nb) {
     //std::cout << "Float constructor called.\n";
     this->setRawBits(roundf(nb * (1 << fract)));
}

float Fixed::toFloat(void) const {
    return (float)this->getRawBits() / (1 << fract);
}

int Fixed::toInt(void) const {
    return (this->getRawBits() >> fract);
}

std::ostream& operator<<(std::ostream &ostr, const Fixed &fixed) {
    ostr << fixed.toFloat();
    return ostr;
}

//ex02
//Arithmetic
Fixed Fixed::operator+(const Fixed &other) const {
    return Fixed(toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed &other) const {
    return Fixed(toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed &other) const {
    return Fixed(toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed &other) const {
    return Fixed(toFloat() / other.toFloat());
}

//Increment
Fixed Fixed::operator++() {
    fixed++;
    return *this;
}

Fixed Fixed::operator++(int){
    Fixed temp(*this);
    fixed++;
    return temp;
}

Fixed Fixed::operator--() {
    fixed--;
    return *this;
}

Fixed Fixed::operator--(int) {
    Fixed temp(*this);
    fixed--;
    return temp;
}

//Comparison
bool Fixed::operator==(const Fixed &other) const {
    return fixed == other.fixed;
}

bool Fixed::operator!=(const Fixed &other) const {
    return fixed != other.fixed;
}

bool Fixed::operator<(const Fixed &other) const {
    return fixed < other.fixed;
}

bool Fixed::operator>(const Fixed &other) const {
    return fixed > other.fixed;
}

bool Fixed::operator<=(const Fixed &other) const {
    return fixed <= other.fixed;
}

bool Fixed::operator>=(const Fixed &other) const {
    return fixed >= other.fixed;
}

//Min & Max
Fixed& Fixed::min(Fixed &a, Fixed &b)  {
    return (a < b ? a : b);
}
const Fixed& Fixed::min(const Fixed &a, const Fixed &b) {
    return (a < b ? a : b);
}

Fixed& Fixed::max(Fixed &a, Fixed &b) {
    return (a > b ? a : b);
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b) {
    return (a > b ? a : b);
}
