/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiberna <luiberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 19:15:36 by luiberna          #+#    #+#             */
/*   Updated: 2024/10/09 20:19:26 by luiberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"
#include "Zombie.hpp"

int main() {
    int i = 0;
	Zombie *horde1 = zombieHorde(10, "Macaco");
	Zombie *horde2 = zombieHorde(5, "Gorila");
	while (i < 10) {
        std::cout << i + 1 << " :";
		horde1[i].announce();
        i++;
    }
    std::cout << "First Horde created" << std::endl << std::endl;
    i = 0;
	while (i < 5) {
        std::cout << i + 1 << " :";
		horde2[i].announce();
        i++;
    }
    std::cout << "Second Horde created" << std::endl << std::endl;
	delete[] horde1;
    std::cout << std::endl;
	delete[] horde2;
}