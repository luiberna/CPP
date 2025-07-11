/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiberna <luiberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 18:18:13 by luiberna          #+#    #+#             */
/*   Updated: 2024/10/17 22:14:51 by luiberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {
    std::cout << "Harl is ready to complain\n";
    
    levels[0] = "DEBUG";
    levels[1] = "INFO";
    levels[2] = "WARNING";
    levels[3] = "ERROR";

    complaint[0] = &Harl::debug;
    complaint[1] = &Harl::info;
    complaint[2] = &Harl::warning;
    complaint[3] = &Harl::error;
}

Harl::~Harl() {
    std::cout << "Harl decided to take a vacation\n";
}

void Harl::debug(void) {
    std::cout << "DEBUG: I love programming in a new language.\n";
}

void Harl::info(void) {
    std::cout << "INFO: I cant believe how strange this new language is.\n";
}

void Harl::warning(void) {
    std::cout << "WARNING: Im serioulsy thinking in breaking this computer.\n";
}

void Harl::error(void) {
    std::cout << "ERROR: *BREAKING THE COMPUTER* I hate C++\n";
}

void Harl::complain(std::string level) {
    int i = 0;

    while (i < 4) {
        if (level == levels[i]) {
            (this->*complaint[i])();
            return;
        }
        i++;
    }
    std::cout << "No reason for Harl to complain, even though he wants too.\n";
}