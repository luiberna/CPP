/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiberna <luiberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 00:52:48 by luiberna          #+#    #+#             */
/*   Updated: 2024/10/11 01:09:40 by luiberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_CPP
#define WEAPON_CPP

#include <string>
#include <iostream>

class Weapon{
    
    private:
        std::string weaponType;
    public:
        void  setType(std::string newType);
        const std::string &getType();
        Weapon();
        ~Weapon();

    
};

#endif