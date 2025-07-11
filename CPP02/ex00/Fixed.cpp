/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiberna <luiberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 18:04:48 by luiberna          #+#    #+#             */
/*   Updated: 2024/10/19 18:11:40 by luiberna         ###   ########.fr       */
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
    std::cout << "getRawBits member function called.\n";
    return this->fixed;
}

void Fixed::setRawBits(const int raw) {
    this->fixed = raw;
}