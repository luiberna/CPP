/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiberna <luiberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 14:35:49 by luiberna          #+#    #+#             */
/*   Updated: 2024/10/11 01:14:32 by luiberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(){
    std::cout << "Weapon created" << std::endl;
}

Weapon::~Weapon(){
    std::cout << "Weapon destroyed" << std::endl;
}

void  Weapon::setType(std::string newType){
    weaponType = newType;
}

const std::string &Weapon::getType(){
    return weaponType;
}

