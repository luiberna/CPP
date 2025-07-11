/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiberna <luiberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 23:17:09 by luiberna          #+#    #+#             */
/*   Updated: 2024/10/14 14:30:43 by luiberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): Aweapon(weapon), Aname(name) {
}

HumanA::~HumanA() {
    std::cout << Aname << " died!" << std::endl;
}

void HumanA::attack()
{
    std::cout << Aname << " attackes with their " << Aweapon.getType() << std::endl;
}

