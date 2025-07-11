/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiberna <luiberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:21:04 by luiberna          #+#    #+#             */
/*   Updated: 2024/10/23 16:47:35 by luiberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : virtual public Animal {
    public:
        Cat(); //Default constructor
        ~Cat(); //Destructor
        Cat(const Cat &other); //Copy constructor
        Cat &operator=(const Cat &other); //Copy assignment operator

        void makeSound() const;
};

#endif