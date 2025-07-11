/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiberna <luiberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 18:04:48 by luiberna          #+#    #+#             */
/*   Updated: 2024/10/21 18:22:34 by luiberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int Fixed::fract = 8;

Fixed::Fixed() : fixed(0) {
    std::cout << "Default constructor called.\n";
}

Fixed::~Fixed() {
    std::cout << "Destructor called.\n";
}

Fixed::Fixed(const Fixed &other) {
    std::cout << "Copy constructor called.\n";
    *this = other;
}

Fixed& Fixed::operator=(const Fixed& other) {
   std::cout << "Copy assignment operator called.\n";
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
    std::cout << "Int constructor called.\n";
    this->setRawBits(nb << fract);
}

Fixed::Fixed(const float nb) {
     std::cout << "Float constructor called.\n";
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