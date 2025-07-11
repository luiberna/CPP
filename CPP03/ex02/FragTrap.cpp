/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiberna <luiberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 22:50:37 by luiberna          #+#    #+#             */
/*   Updated: 2024/10/22 22:57:23 by luiberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {
    std::cout << "Constructing default FragTrap.\n";
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
}

FragTrap::FragTrap(std::string fragName) : ClapTrap(fragName) {
    this->attackDamage = 20;
    this->energyPoints = 50;
    this->hitPoints = 100;
    std::cout << "Constructing FragTrap.\n";
}

FragTrap::~FragTrap() {
    std::cout << "Destructing FragTrap.\n";
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other) {
    *this = other;
}

FragTrap &FragTrap::operator=(const FragTrap &other) {
    if (this != &other) {
        name = other.name;
        hitPoints = other.hitPoints;
        energyPoints = other.energyPoints;
        attackDamage = other.attackDamage;
    }
    return (*this);
}

void FragTrap::highFivesguys() {
    std::cout << "High five guys?\n";
}