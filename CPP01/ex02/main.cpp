/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiberna <luiberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 13:33:06 by luiberna          #+#    #+#             */
/*   Updated: 2024/10/10 14:34:05 by luiberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void){
    std::string  str = "HI THIS IS BRAINS";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "Value of the string: " << str << std::endl;
    std::cout << "Value pointed too: " << *stringPTR << std::endl;
    std::cout << "Value held by ref: " << stringREF << std::endl << std::endl;
    
    std::cout << "Memory adress of string: " << &str << std::endl;
    std::cout << "Memory adress pointed too: " << stringPTR << std::endl;
    std::cout << "Memory adress held by ref: " << &stringREF << std::endl;
}