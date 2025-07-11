/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiberna <luiberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:57:25 by luiberna          #+#    #+#             */
/*   Updated: 2024/10/23 17:24:24 by luiberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : virtual public WrongAnimal {
    public:
        WrongCat(); //Default constructor
        ~WrongCat(); //Destructor
        WrongCat(const WrongCat &other); //Copy constructor
        WrongCat &operator=(const WrongCat &other); //Copy assignment operator

        void makeSound() const;
};

#endif