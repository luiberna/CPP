/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiberna <luiberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 23:13:27 by luiberna          #+#    #+#             */
/*   Updated: 2024/10/13 23:39:42 by luiberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include "Weapon.hpp"

class HumanA{

    private:
        Weapon &Aweapon;
        std::string Aname;
    public:
        void attack();
        HumanA(std::string name, Weapon &weapon);
        ~HumanA();
};

#endif