/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiberna <luiberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 21:51:25 by luiberna          #+#    #+#             */
/*   Updated: 2024/10/08 19:26:43 by luiberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include "Contact.hpp"

class PhoneBook
{
    private:
        int ContactCount;
        int list_checker;
        Contact Contacts[8];
        
    public:
        Contact getContactInfo(void);
        void addContact(void);
        void displayContacts(void);
        std::string truncate(std::string str);
        void displayContactDetails();
        PhoneBook();
        ~PhoneBook();
        
};

#endif