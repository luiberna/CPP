/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiberna <luiberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:56:11 by luiberna          #+#    #+#             */
/*   Updated: 2024/10/23 18:01:39 by luiberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
    std::cout << "WrongAnimal constructor called.\n";
    type = "Weird Animal";
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal destructor called.\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) {
    *this = other;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other) {
    if (this != &other)
        type = other.getType();
    return *this;
}

std::string WrongAnimal::getType() const {
    return this->type;
}

void WrongAnimal::setType(std::string WronganimalType) {
    type = WronganimalType;
}

void WrongAnimal::makeSound() const{
    std::cout << "*Weird animal sound*\n";
}