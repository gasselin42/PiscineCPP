/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dop.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 12:47:35 by gasselin          #+#    #+#             */
/*   Updated: 2022/01/10 12:53:52 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal() {
    type = "Dog";

    std::cout << "Default Dog created" << std::endl;
}

Dog::Dog(const Dog & rhs) : Animal() {
    *this = rhs;

    std::cout << "Copy Dog created" << std::endl;
}

Dog::~Dog() {
    std::cout << "Dog destroyed" << std::endl;
}

Dog & Dog::operator=(const Dog & rhs) {
    type = rhs.type;

    return *this;
}

void Dog::makeSound() const {
    std::cout << "Woof" << std::endl;
}