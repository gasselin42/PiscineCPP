/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 13:30:52 by gasselin          #+#    #+#             */
/*   Updated: 2022/01/10 14:53:18 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Default Brain created" << std::endl;
}

Brain::Brain(const Brain & rhs) {
    for (int i = 0; i < 100; i++)
        ideas[i] = rhs.ideas[i];
    
    std::cout << "Copy Brain created" << std::endl;
}

Brain::~Brain() {
    std::cout << "Brain destroyed" << std::endl;
}

Brain & Brain::operator=(const Brain & rhs) {
    for (int i = 0; i < 100; i++)
        ideas[i] = rhs.ideas[i];
    return *this;
}

const std::string&  Brain::getIdea(const size_t index) const {
    return ideas[index];
}

void Brain::setIdea(const std::string& idea, const size_t index) {
    ideas[index] = idea;
}