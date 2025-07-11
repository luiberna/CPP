/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiberna <luiberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 17:08:21 by luiberna          #+#    #+#             */
/*   Updated: 2024/10/21 20:55:47 by luiberna         ###   ########.fr       */
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

        //Arithmetic
        Fixed operator+(const Fixed &other) const;
        Fixed operator-(const Fixed &other) const;
        Fixed operator*(const Fixed &other) const;
        Fixed operator/(const Fixed &other) const;

        //Increment
        Fixed operator++(int); //Post-increment
        Fixed operator--(int); //Post-increment
        Fixed operator++(); //Pre-increment
        Fixed operator--(); //Pre-increment

        //Comparison
        bool operator==(const Fixed &other) const;
        bool operator!=(const Fixed &other) const;
        bool operator<(const Fixed &other) const;
        bool operator>(const Fixed &other) const;
        bool operator<=(const Fixed &other) const;
        bool operator>=(const Fixed &other) const;
        
        //Max & Min
        static Fixed& min(Fixed &a, Fixed &b);
		static const Fixed& min(const Fixed &a, const Fixed &b);
		static Fixed& max(Fixed &a, Fixed &b);
		static const Fixed& max(const Fixed &a, const Fixed &b);
        
        int     getRawBits(void) const;
        void    setRawBits(const int raw);
        float   toFloat(void) const;
        int     toInt(void) const;
        
};

std::ostream& operator<<(std::ostream &ostr, const Fixed &fixed);

#endif