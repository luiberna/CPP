/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiberna <luiberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:18:16 by luiberna          #+#    #+#             */
/*   Updated: 2024/10/23 16:55:05 by luiberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal {
    protected:
        std::string type;
    public:
        Animal(); //Default constructor
        virtual ~Animal(); //Destructor
        Animal(const Animal &other); //Copy constructor
        Animal &operator=(const Animal &other); //Copy assignment operator

        void setType(std::string type);
        std::string getType() const;
        void makeSound() const;
};

#endif