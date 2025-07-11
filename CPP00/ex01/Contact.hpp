/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiberna <luiberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 20:53:47 by luiberna          #+#    #+#             */
/*   Updated: 2024/10/06 20:12:41 by luiberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include "PhoneBook.hpp"

class Contact
{
    private:
        std::string FirstName;
        std::string LastName;
        std::string Nickname;
        std::string PhoneNumber;
        std::string DarkestSecret;
        
    public:
        void setFirstName(std::string str);
        void setLastName(std::string str);
        void setPhoneNumber(std::string str);
        void setNickname(std::string str);
        void setDarkestSecret(std::string str);  
        std::string getInfo(std::string str);  
        bool isEmpty(void);
};

#endif