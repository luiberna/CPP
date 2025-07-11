/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiberna <luiberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 21:37:11 by luiberna          #+#    #+#             */
/*   Updated: 2024/10/08 20:06:00 by luiberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    ContactCount = 0;
    list_checker = 0;
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::addContact(void)
{
    if (list_checker == 8)
        std::cout << "Contact list full, replacing oldest" << std::endl;
    Contact contact = getContactInfo();
    Contacts[ContactCount] = contact;
    ContactCount = (ContactCount + 1) % 8;
    if (list_checker < 8)
        list_checker++;
}

Contact PhoneBook::getContactInfo(void)
{
    Contact     new_contact;
    std::string input;

    while (input.empty()){
        std::cout << "Enter First Name: ";
        std::getline(std::cin, input);
    }
    new_contact.setFirstName(input);
    input.clear();
    while (input.empty()){
        std::cout << "Enter Last Name: ";
        std::getline(std::cin, input);
    }
    new_contact.setLastName(input);
    input.clear();
    while (input.empty()){
        std::cout << "Enter Nickname: ";
        std::getline(std::cin, input);
    }
    new_contact.setNickname(input);
    input.clear();
    while (input.empty()){
        std::cout << "Enter Phone Number: ";
        std::getline(std::cin, input);
    }
    new_contact.setPhoneNumber(input);
    input.clear();
    while (input.empty()){
        std::cout << "Enter Darkest Secret: ";
        std::getline(std::cin, input);
    }
    new_contact.setDarkestSecret(input);
    std::cout << "Contact added" << std::endl;
    return new_contact;
}

void    PhoneBook::displayContacts(void)
{
    int i = 0;

    std::cout << "    Index |  FstName | LastName |  Nickname" << std::endl;
    std::cout << "-------------------------------------------" << std::endl;
    while (i < list_checker)
    {
        std::cout << "        " << i + 1 << " | " 
            << truncate(Contacts[i].getInfo("FirstName")) << " | " 
            << truncate(Contacts[i].getInfo("LastName")) << " | "
            << truncate(Contacts[i].getInfo("Nickname")) << " | " << std::endl;
        i++;
    }

}

void    PhoneBook::displayContactDetails()
{
    int i;
    std::string command;
    while (1)
    {
        std::cout << "Enter index of the contact (1-8): ";
        std::getline(std::cin, command);
        if (command.length() > 1)
            std::cout << "Index needs to be a number between(1-8)..." << std::endl;
        else
        {
            i = command[0] - '0';
            break;
        }
    }
    if (i <= 0 || i > list_checker)
            std::cout << "Invalid index, do you even know how to count?" << std::endl;
    else
    {
        Contact& Contact = Contacts[i - 1];
        std::cout << "First Name: " << Contact.getInfo("FirstName") << std::endl;
        std::cout << "Last Name: " << Contact.getInfo("LastName") << std::endl;
        std::cout << "Nickname: " << Contact.getInfo("Nickname") << std::endl;
        std::cout << "Phone Number: " << Contact.getInfo("PhoneNumber") << std::endl;
        std::cout << "Darkest Secret: " << Contact.getInfo("DarkestSecret") << std::endl;
    }
}

std::string PhoneBook::truncate(std::string str)
{
    while (str.length() < 8)
        str = str.insert(0, " ");
    if (str.length() > 8)
        return str.substr(0, 7) + ".";
    return str;
}