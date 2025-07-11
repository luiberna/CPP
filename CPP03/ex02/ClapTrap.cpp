/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiberna <luiberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 21:18:50 by luiberna          #+#    #+#             */
/*   Updated: 2024/10/22 23:01:53 by luiberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : hitPoints(10), energyPoints(10), attackDamage(0) {
    std::cout << "Constructing default ClapTrap.\n";
}

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0) {
    std::cout << "Constructing ClapTrap.\n";
}

ClapTrap::~ClapTrap() {
    std::cout << "Destructing ClapTrap.\n";
}

ClapTrap::ClapTrap(const ClapTrap &other) {
    *this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
    if (this != &other) {
        name = other.name;
        hitPoints = other.hitPoints;
        energyPoints = other.energyPoints;
        attackDamage = other.attackDamage;
    }
    return (*this);
}

void ClapTrap::attack(const std::string &target) {
    if (energyPoints && hitPoints) {
        energyPoints--;
        std::cout << name << " attacks "<< target << " causing " << attackDamage << " points of damage!\n";
        std::cout << name << " has " << energyPoints << " energy points!\n";
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (hitPoints) {
        hitPoints -= amount;
        std::cout << name << " got attacked for " << amount << " points of damage!\n";
        std::cout << name << " now has " << hitPoints << " hit points!\n";
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (energyPoints && hitPoints) {
        hitPoints += amount;
        energyPoints--;
        std::cout << name << " repaired for " << amount << " points!\n";
        std::cout << name << " now has " << hitPoints << " hit points!\n";
    }
}

std::string ClapTrap::getName() {
    return name;
}

int ClapTrap::getAttackDamage() {
    return attackDamage;
}