/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiberna <luiberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:43:58 by luiberna          #+#    #+#             */
/*   Updated: 2024/10/23 23:06:19 by luiberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal() {
    std::cout << "Dog constructor called.\n";
    brain = new Brain();
    type = "Dog";
}

Dog::~Dog() {
    delete brain;
    std::cout << "Dog destructor called.\n";
}

Dog::Dog(const Dog &other) : Animal(other) {
    brain = new Brain();
    *this = other;
}

Dog &Dog::operator=(const Dog &other) {
    if (this != &other) {
        type = other.getType();
        *brain = *(other.brain);
    }
    return *this;
}

void Dog::makeSound() const{
    std::cout << "*Bark!*\n";
}

void Dog::setIdeas(std::string idea, int i) {
    brain->setIdeas(idea, i);
}

void Dog::printIdea(int i) {
    brain->printIdeas(i);
}