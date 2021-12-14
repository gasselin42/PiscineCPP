/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 15:02:38 by gasselin          #+#    #+#             */
/*   Updated: 2021/12/13 16:24:11 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : FixedPoint(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed& x) {
    std::cout << "Copy constructor called" << std::endl;
    this->FixedPoint = x.getRawBits();
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=( Fixed& x ) {
    std::cout << "Assignation operator called" << std::endl;
    this->FixedPoint = x.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return FixedPoint;
}

void Fixed::setRawBits(int const raw) {
    FixedPoint = raw;
}