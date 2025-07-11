/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiberna <luiberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:42:01 by luiberna          #+#    #+#             */
/*   Updated: 2024/10/23 23:06:56 by luiberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
    private:
        Brain *brain;
    public:
        Dog(); //Default constructor
        ~Dog(); //Destructor
        Dog(const Dog &other); //Copy constructor
        Dog &operator=(const Dog &other); //Copy assignment operator

        void makeSound() const;
        void setIdeas(std::string idea, int i);
        void printIdea(int i);
};


#endif