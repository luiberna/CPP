/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiberna <luiberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 18:18:24 by luiberna          #+#    #+#             */
/*   Updated: 2024/10/17 21:09:28 by luiberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <string>
#include <iostream>

class Harl{
    public:
        void complain(std::string level);
        Harl();
        ~Harl();

    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
        std::string levels[4];
        void (Harl::*complaint[4])(void);

};

#endif