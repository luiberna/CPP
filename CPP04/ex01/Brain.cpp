/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiberna <luiberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:23:32 by luiberna          #+#    #+#             */
/*   Updated: 2024/10/23 23:02:46 by luiberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Constructing Brain.\n";
}

Brain::~Brain() {
    std::cout << "Destructing Brain.\n";
}

Brain::Brain(const Brain &other) {
    *this = other;
}

Brain &Brain::operator=(const Brain &other) {
    if (this != &other) {
        for (int i = 0; i < 100; i++)
            ideas[i] = other.ideas[i];
    }
    return *this;
}

void Brain::setIdeas(std::string idea, int i) {
        ideas[i] = idea;
}

void Brain::printIdeas(int i) {
    std::cout << ideas[i] << std::endl;
}