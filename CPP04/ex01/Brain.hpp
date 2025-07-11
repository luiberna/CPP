/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiberna <luiberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:20:36 by luiberna          #+#    #+#             */
/*   Updated: 2024/10/23 23:03:06 by luiberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

class Brain {
    private:
        std::string ideas[100];
    public:
        Brain(); //Default constructor
        ~Brain(); //Destructor
        Brain(const Brain &other); //Copy constructor
        Brain &operator=(const Brain &other); //Copy assignment operator
        
        void setIdeas(std::string idea, int i);
        void printIdeas(int i);
};

#endif