/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiberna <luiberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:24:34 by luiberna          #+#    #+#             */
/*   Updated: 2024/10/23 18:01:52 by luiberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal (){
    std::cout << "WrongCat constructor called.\n";
    type = "Weird Cat";
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat destructor called.\n";
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other){
    *this = other;
}

WrongCat &WrongCat::operator=(const WrongCat &other) {
    if (this != &other)
        type = other.getType();
    return *this;
}

void WrongCat::makeSound() const{
    std::cout << "*Strange cat noise*\n";
}