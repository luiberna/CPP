/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiberna <luiberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 13:32:46 by luiberna          #+#    #+#             */
/*   Updated: 2024/10/14 14:30:55 by luiberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name){
    Bname = name;
    Bweapon = 0;
}

HumanB::~HumanB() {
    std::cout << Bname << " died!" << std::endl;
}

void HumanB::getWeapon(Weapon &weapon){
    Bweapon = &weapon;
}

void HumanB::attack()
{
    if (!Bweapon)
        std::cout << Bname << " attackes with nothing" << std::endl;
    else
        std::cout << Bname << " attackes with their " << Bweapon->getType() << std::endl;
}