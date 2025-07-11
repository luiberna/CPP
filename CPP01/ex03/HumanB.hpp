/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiberna <luiberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 23:38:40 by luiberna          #+#    #+#             */
/*   Updated: 2024/10/14 14:23:49 by luiberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB{

    private:
        Weapon *Bweapon;
        std::string Bname;
    public:
        void attack();
        void getWeapon(Weapon &weapon);
        HumanB(std::string name);
        ~HumanB();
};

#endif