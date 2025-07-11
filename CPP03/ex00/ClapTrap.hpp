/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiberna <luiberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 21:19:07 by luiberna          #+#    #+#             */
/*   Updated: 2024/10/22 00:02:53 by luiberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap {
    private:
        std::string name;
        int hitPoints;
        int energyPoints;
        int attackDamage;
        
    public:
        ClapTrap(); //Default constructor
        ClapTrap(std::string name); //Constructor
        ~ClapTrap(); //Destructor
        ClapTrap(const ClapTrap &other); //Copy constructor
        ClapTrap &operator=(const ClapTrap &other); //Copy assignment operator
        
        void attack(const std::string &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        std::string getName();
        int getAttackDamage();
};

#endif