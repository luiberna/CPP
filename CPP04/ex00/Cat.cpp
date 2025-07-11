/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiberna <luiberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:33:55 by luiberna          #+#    #+#             */
/*   Updated: 2024/10/23 18:00:52 by luiberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal () {
    std::cout << "Cat constructor called.\n";
    type = "Cat";
}

Cat::~Cat() {
    std::cout << "Cat destructor called.\n";
}

Cat::Cat(const Cat &other) : Animal(other){
    *this = other;
}

Cat &Cat::operator=(const Cat &other) {
    if (this != &other)
        type = other.getType();
    return *this;
}

void Cat::makeSound() const{
    std::cout << "*Miau!*\n";
}
