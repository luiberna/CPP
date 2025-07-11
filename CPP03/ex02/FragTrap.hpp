/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiberna <luiberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 22:47:05 by luiberna          #+#    #+#             */
/*   Updated: 2024/10/22 22:50:15 by luiberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
    public:
        FragTrap(); //Default constructor
        FragTrap(std::string FragName); //Constructor
        ~FragTrap(); //Destructor
        FragTrap(const FragTrap &other); //Copy constructor
        FragTrap &operator=(const FragTrap &other); //Copy assignment operator

        void highFivesguys(void);
};

#endif