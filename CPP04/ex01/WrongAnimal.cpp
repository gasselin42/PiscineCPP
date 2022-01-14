/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 12:57:13 by gasselin          #+#    #+#             */
/*   Updated: 2022/01/10 13:00:33 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal") {
    std::cout << "Default WrongAnimal created" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal & rhs) {
    *this = rhs;

    std::cout << "Copy WrongAnimal created" << std::endl;
}
WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal destroyed" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal & rhs) {
    type = rhs.type;
    
    return *this;
}

void WrongAnimal::makeSound() const {
    std::cout << "WrongAnimal noise" << std::endl;
}

std::string WrongAnimal::getType() const {
    return type;
}