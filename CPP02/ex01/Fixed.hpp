/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiberna <luiberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 17:08:21 by luiberna          #+#    #+#             */
/*   Updated: 2024/10/21 17:33:13 by luiberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <iostream>
#include <cmath>

class Fixed{
    private:
        int                 fixed;
        static int          fract;

    public:
        Fixed(); //Default constructor
        ~Fixed(); //Default destructor
        Fixed(const Fixed &other); //Copy constructor;
        Fixed &operator = (const Fixed &other); //Copy assignment operator
        
        Fixed(const int nb);
        Fixed(const float nb);
        int     getRawBits(void) const;
        void    setRawBits(const int raw);
        float   toFloat(void) const;
        int     toInt(void) const;
        
};

std::ostream& operator<<(std::ostream &ostr, const Fixed &fixed);

#endif