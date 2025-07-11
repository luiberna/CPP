/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiberna <luiberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:35:09 by luiberna          #+#    #+#             */
/*   Updated: 2024/10/22 22:44:51 by luiberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
    public:
        ScavTrap(); //Default constructor
        ScavTrap(std::string scavName); //Constructor
        ~ScavTrap(); //Destructor
        ScavTrap(const ScavTrap &other); //Copy constructor
        ScavTrap &operator=(const ScavTrap &other); //Copy assignment operator

        void attack(const std::string &target);
        void guardGate();
};

#endif