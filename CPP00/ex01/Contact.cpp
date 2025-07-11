/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiberna <luiberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 20:44:16 by luiberna          #+#    #+#             */
/*   Updated: 2024/10/08 19:17:29 by luiberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void    Contact::setFirstName(std::string str)
{
    FirstName = str;
}

void    Contact::setLastName(std::string str)
{
    LastName = str;
}

void    Contact::setNickname(std::string str)
{
    Nickname = str;
}

void    Contact::setPhoneNumber(std::string str)
{
    PhoneNumber = str;
}

void    Contact::setDarkestSecret(std::string str)
{
    DarkestSecret = str;
}

std::string Contact::getInfo(std::string str)
{
    if (str == "FirstName")
        return FirstName;
    if (str == "LastName")
        return LastName;
    if (str == "Nickname")
        return Nickname;
    if (str == "PhoneNumber")
        return PhoneNumber;
    if (str == "DarkestSecret")
        return DarkestSecret;
    else
        return "";
}

bool    Contact::isEmpty(void)
{
    return FirstName.empty() && LastName.empty() && Nickname.empty() && PhoneNumber.empty() && DarkestSecret.empty();
}