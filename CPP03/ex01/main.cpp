/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiberna <luiberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 20:22:19 by luiberna          #+#    #+#             */
/*   Updated: 2024/10/22 22:43:27 by luiberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void) {
	ClapTrap a;
    ScavTrap b("ScavMk2");
    ScavTrap c("ScavMk3");
    ScavTrap d(b);

    a.attack("ScavMk2");
    b.takeDamage(a.getAttackDamage());
    b.beRepaired(10);
    std::cout << std::endl;

    b.attack("ScavMk3");
    c.takeDamage(b.getAttackDamage());
    c.guardGate();
    std::cout << std::endl;

    a.attack("ScavMk2");
    d.takeDamage(a.getAttackDamage());
    d.beRepaired(15);
    d.guardGate();
    std::cout << std::endl;
    
}