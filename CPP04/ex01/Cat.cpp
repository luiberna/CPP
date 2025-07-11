/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiberna <luiberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:33:55 by luiberna          #+#    #+#             */
/*   Updated: 2024/10/23 23:05:55 by luiberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal () {
    std::cout << "Cat constructor called.\n";
    brain = new Brain();
    type = "Cat";
}

Cat::~Cat() {
    delete brain;
    std::cout << "Cat destructor called.\n";
}

Cat::Cat(const Cat &other) : Animal(other) {
    brain = new Brain();
    *this = other;
}

Cat &Cat::operator=(const Cat &other) {
    if (this != &other) {
        type = other.getType();
        *brain = *(other.brain);
    }
    return *this;
}

void Cat::makeSound() const{
    std::cout << "*Miau!*\n";
}

void Cat::setIdeas(std::string idea, int i) {
    brain->setIdeas(idea, i);
}

void Cat::printIdea(int i) {
    brain->printIdeas(i);
}