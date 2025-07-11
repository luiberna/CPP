/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiberna <luiberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 17:08:21 by luiberna          #+#    #+#             */
/*   Updated: 2024/10/19 18:08:33 by luiberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <iostream>

class Fixed{
    private:
        int                 fixed;
        static int          fract;

    public:
        Fixed(); //Default constructor
        ~Fixed(); //Default destructor
        Fixed(const Fixed &other); //Copy constructor;
        Fixed &operator = (const Fixed &other); //Copy assignment operator
        int     getRawBits(void) const;
        void    setRawBits(const int raw);
};

#endif