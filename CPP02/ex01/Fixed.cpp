/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 09:31:18 by gasselin          #+#    #+#             */
/*   Updated: 2021/12/14 11:54:22 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : FixedPoint(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& x) {
    std::cout << "Copy constructor called" << std::endl;
    *this = x ;
}

Fixed::Fixed(const int nb) {
	std::cout << "Int constructor called" << std::endl;
	FixedPoint = nb << FracBites;
}

Fixed::Fixed(const float flt) {
	std::cout << "Float constructor called" << std::endl;
	FixedPoint = roundf(flt * (1 << FracBites));
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=( const Fixed& x ) {
    std::cout << "Assignation operator called" << std::endl;
    FixedPoint = x.FixedPoint;
    return *this;
}

std::ostream & operator<<( std::ostream &lhs, Fixed const &rhs ) {
	lhs << rhs.toFloat();
	return lhs;
}

float Fixed::toFloat(void) const {
	return ((float)FixedPoint / (1 << FracBites));
}

int	Fixed::toInt(void) const {
	return FixedPoint >> FracBites;
}

int Fixed::getRawBits(void) const {
    return FixedPoint;
}

void Fixed::setRawBits(int const raw) {
    FixedPoint = raw;
}
