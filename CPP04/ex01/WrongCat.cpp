/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 12:59:14 by gasselin          #+#    #+#             */
/*   Updated: 2022/01/10 13:01:09 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {
    type = "WrongCat";

    std::cout << "Default WrongCat created" << std::endl;
}

WrongCat::WrongCat(const WrongCat & rhs) : WrongAnimal() {
    *this = rhs;

    std::cout << "Copy WrongCat created" << std::endl;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat destroyed" << std::endl;
}

WrongCat & WrongCat::operator=(const WrongCat & rhs) {
    type = rhs.type;

    return *this;
}

void WrongCat::makeSound() const {
    std::cout << "Wrong Meow" << std::endl;
}