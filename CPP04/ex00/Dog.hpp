/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiberna <luiberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:42:01 by luiberna          #+#    #+#             */
/*   Updated: 2024/10/23 16:47:29 by luiberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : virtual public Animal {
    public:
        Dog(); //Default constructor
        ~Dog(); //Destructor
        Dog(const Dog &other); //Copy constructor
        Dog &operator=(const Dog &other); //Copy assignment operator

        void makeSound() const;
            
};


#endif