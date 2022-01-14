/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 12:47:35 by gasselin          #+#    #+#             */
/*   Updated: 2022/01/10 14:34:09 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal(), brain(new Brain) {
    type = "Dog";

    std::cout << "Default Dog created" << std::endl;
}

Dog::Dog(const Dog & rhs) : Animal(), brain(new Brain) {
    *this = rhs;

    std::cout << "Copy Dog created" << std::endl;
}

Dog::~Dog() {
    delete brain;

    std::cout << "Dog destroyed" << std::endl;
}

Dog & Dog::operator=(const Dog & rhs) {
    type = rhs.type;
    brain = new Brain(*rhs.brain);
    return *this;
}

void Dog::makeSound() const {
    std::cout << "Woof" << std::endl;
}