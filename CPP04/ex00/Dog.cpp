/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiberna <luiberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:43:58 by luiberna          #+#    #+#             */
/*   Updated: 2024/10/23 18:01:21 by luiberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal() {
    std::cout << "Dog constructor called.\n";
    type = "Dog";
}

Dog::~Dog() {
    std::cout << "Dog destructor called.\n";
}

Dog::Dog(const Dog &other) : Animal(other){
    *this = other;
}

Dog &Dog::operator=(const Dog &other) {
    if (this != &other)
        type = other.getType();
    return *this;
}

void Dog::makeSound() const{
    std::cout << "*Bark!*\n";
}