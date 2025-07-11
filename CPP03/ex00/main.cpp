/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiberna <luiberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 00:00:38 by luiberna          #+#    #+#             */
/*   Updated: 2024/10/22 20:33:52 by luiberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap A = ClapTrap("MK1");
	ClapTrap B = ClapTrap("MK2");

	A.attack(B.getName());
	B.takeDamage(A.getAttackDamage());
	B.beRepaired(2);
	
	B.attack(A.getName());
	A.beRepaired(2);

    A.takeDamage(20);
    A.attack(B.getName());
}