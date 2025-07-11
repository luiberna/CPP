/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiberna <luiberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 19:15:36 by luiberna          #+#    #+#             */
/*   Updated: 2024/10/09 19:46:50 by luiberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"
#include "Zombie.hpp"

int main(){
    Zombie* zombie;
    zombie = newZombie("Babuino");
    zombie->announce();
    randomChump("Gorilla");
    randomChump("Macaco");
    zombie->announce();
    delete zombie;
    return 0;
}