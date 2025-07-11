/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiberna <luiberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:52:57 by luiberna          #+#    #+#             */
/*   Updated: 2024/10/23 16:55:53 by luiberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal {
    protected:
        std::string type;
    public:
        WrongAnimal(); //Default constructor
        virtual ~WrongAnimal(); //Destructor
        WrongAnimal(const WrongAnimal &other); //Copy constructor
        WrongAnimal &operator=(const WrongAnimal &other); //Copy assignment operator

        void setType(std::string type);
        std::string getType() const;
        void makeSound() const;
};

#endif