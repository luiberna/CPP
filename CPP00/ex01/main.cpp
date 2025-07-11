/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiberna <luiberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 22:24:54 by luiberna          #+#    #+#             */
/*   Updated: 2024/10/08 19:15:40 by luiberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
    PhoneBook  phonebook;
    std::string command;
    
    while (1)
    {
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        std::getline(std::cin, command);
        if (command == "ADD")
            phonebook.addContact();
        else if (command == "SEARCH")
        {
            phonebook.displayContacts();
            phonebook.displayContactDetails();
        }
        else if (command == "EXIT")
        {
            std::cout << "Exiting the PhoneBook..." << std::endl;
            break;
        }
        else
            std::cout << "Not a command you dumb baboon" << std::endl;
    }
}