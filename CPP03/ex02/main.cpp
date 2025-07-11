/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiberna <luiberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 20:22:19 by luiberna          #+#    #+#             */
/*   Updated: 2024/10/22 23:02:49 by luiberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void) {
	ClapTrap a("Mk1");
    FragTrap b("FragMk2");
    ScavTrap c("ScavMk3");
    ScavTrap d(c);
    FragTrap e(b);

    std::cout << std::endl;
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

    e.attack("Mk1");
    a.takeDamage(e.getAttackDamage());
    e.attack("Mk1");
    a.takeDamage(e.getAttackDamage());
    a.beRepaired(10);
    e.highFivesguys();
    std::cout << std::endl;
}