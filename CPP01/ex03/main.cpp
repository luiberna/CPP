/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiberna <luiberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 01:11:01 by luiberna          #+#    #+#             */
/*   Updated: 2024/10/14 14:35:50 by luiberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
    {
        Weapon weaponA;
        weaponA.setType("crude spiked club");
        HumanA Daan("Daan", weaponA);
        Daan.attack();
        weaponA.setType("some other type of club");
        Daan.attack();
    }
    {
        Weapon weaponB;
        weaponB.setType("baseball bat");
        HumanB Jim("Jim");
        Jim.attack();
        Jim.getWeapon(weaponB);
        Jim.attack();
        weaponB.setType("club");
        Jim.attack();
    }
    return 0;
}