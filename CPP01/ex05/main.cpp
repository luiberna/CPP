/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiberna <luiberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 18:18:19 by luiberna          #+#    #+#             */
/*   Updated: 2024/10/17 22:32:55 by luiberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

#include "Harl.hpp"

int main(void)
{
    Harl maluco;
    std::string messages[7];
    int i = 0;
    
    messages[0] = "DEBUG";
    messages[1] = "INFO";
    messages[2] = "WARNING";
    messages[3] = "ERROR";
    messages[4] = "OLA";
    messages[5] = "OI";
    messages[6] = "";

    while (i < 7){
        maluco.complain(messages[i]);
        i++;
    }
}