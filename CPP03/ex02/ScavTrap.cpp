/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiberna <luiberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:35:12 by luiberna          #+#    #+#             */
/*   Updated: 2024/10/22 22:45:36 by luiberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
    this->attackDamage = 20;
    this->energyPoints = 50;
    this->hitPoints = 100;
    std::cout << "Constructing default ScavTrap.\n";
}

ScavTrap::ScavTrap(std::string scavName) : ClapTrap(scavName) {
    this->attackDamage = 20;
    this->energyPoints = 50;
    this->hitPoints = 100;
    std::cout << "Constructing ScavTrap.\n";
}

ScavTrap::~ScavTrap() {
    std::cout << "Destructing ScavTrap.\n";
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other) {
    *this = other;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
    if (this != &other) {
        name = other.name;
        hitPoints = other.hitPoints;
        energyPoints = other.energyPoints;
        attackDamage = other.attackDamage;
    }
    return (*this);
}

void ScavTrap::attack(const std::string &target) {
    if (energyPoints && hitPoints) {
        energyPoints--;
        std::cout << "ScavTrap " << name << " attacks "<< target << " causing " << attackDamage << " points of damage!\n";
        std::cout << "ScavTrap " << name << " has " << energyPoints << " energy points!\n";
    }
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << name << " is now on Gate Keeper Mode.\n";
}