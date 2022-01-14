/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 12:47:37 by gasselin          #+#    #+#             */
/*   Updated: 2022/01/10 14:36:08 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal(), brain(new Brain) {
    type = "Cat";

    std::cout << "Default Cat created" << std::endl;
}

Cat::Cat(const Cat & rhs) : Animal(), brain(new Brain) {
    *this = rhs;

    std::cout << "Copy Cat created" << std::endl;
}

Cat::~Cat() {
    delete brain;

    std::cout << "Cat destroyed" << std::endl;
}

Cat & Cat::operator=(const Cat & rhs) {
    type = rhs.type;
    brain = new Brain(*rhs.brain);
    return *this;
}

void Cat::makeSound() const {
    std::cout << "Meow" << std::endl;
}