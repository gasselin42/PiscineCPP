/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 12:47:37 by gasselin          #+#    #+#             */
/*   Updated: 2022/01/10 12:55:11 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal() {
    type = "Cat";

    std::cout << "Default Cat created" << std::endl;
}

Cat::Cat(const Cat & rhs) : Animal() {
    *this = rhs;

    std::cout << "Copy Cat created" << std::endl;
}

Cat::~Cat() {
    std::cout << "Cat destroyed" << std::endl;
}

Cat & Cat::operator=(const Cat & rhs) {
    type = rhs.type;

    return *this;
}

void Cat::makeSound() const {
    std::cout << "Meow" << std::endl;
}