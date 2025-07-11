/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiberna <luiberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:25:17 by luiberna          #+#    #+#             */
/*   Updated: 2024/10/23 18:01:09 by luiberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
    std::cout << "Animal constructor called.\n";
    type = "Animal";
}

Animal::~Animal() {
    std::cout << "Animal destructor called.\n";
}

Animal::Animal(const Animal &other) {
    *this = other;
}

Animal &Animal::operator=(const Animal &other) {
    if (this != &other)
        type = other.getType();
    return *this;
}

std::string Animal::getType() const {
    return this->type;
}

void Animal::setType(std::string animalType) {
    type = animalType;
}

void Animal::makeSound() const{
    std::cout << "*Animal sound*\n";
}
