/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 12:33:19 by gasselin          #+#    #+#             */
/*   Updated: 2022/01/10 15:09:16 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal") {
    std::cout << "Default Animal created" << std::endl;
}

Animal::Animal(const Animal & rhs) {
    *this = rhs;

    std::cout << "Copy Animal created" << std::endl;
}
Animal::~Animal() {
    std::cout << "Animal destroyed" << std::endl;
}

Animal & Animal::operator=(const Animal & rhs) {
    type = rhs.type;
    
    return *this;
}

void Animal::makeSound() const {
    std::cout << "Animal noise" << std::endl;
}

const std::string & Animal::getType() const {
    return type;
}