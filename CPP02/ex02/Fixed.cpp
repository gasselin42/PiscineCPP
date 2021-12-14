/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 15:22:18 by gasselin          #+#    #+#             */
/*   Updated: 2021/12/14 16:12:10 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*------------------------CONSTRUCTORS---DESTRUCTOR---------------------------*/

Fixed::Fixed() : FixedPoint(0) {
    // std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& x) {
    // std::cout << "Copy constructor called" << std::endl;
    *this = x ;
}

Fixed::Fixed(const int nb) {
	// std::cout << "Int constructor called" << std::endl;
	FixedPoint = nb << FracBites;
}

Fixed::Fixed(const float flt) {
	// std::cout << "Float constructor called" << std::endl;
	FixedPoint = roundf(flt * (1 << FracBites));
}

Fixed::~Fixed() {
    // std::cout << "Destructor called" << std::endl;
}

/*---------------------------ARITHMETIC-OPERATORS-----------------------------*/

Fixed& Fixed::operator=( const Fixed& x ) {
    // std::cout << "Assignation operator called" << std::endl;
    FixedPoint = x.FixedPoint;
    return *this;
}

Fixed&	Fixed::operator+(const Fixed& x) {
	FixedPoint += x.FixedPoint;
    return *this;
}

Fixed&	Fixed::operator-(const Fixed& x) {
	FixedPoint -= x.FixedPoint;
    return *this;
}

Fixed&	Fixed::operator*(const Fixed& x) {
	FixedPoint = roundf(toFloat() * x.toFloat() * (1 << FracBites));
    return *this;
}

Fixed&	Fixed::operator/(const Fixed& x) {
	FixedPoint = roundf(toFloat() / x.toFloat() * (1 << FracBites));
    return *this;
}

/*-----------------INCREMENTATION-&-DECREMENTATION-OPERATORS------------------*/

Fixed&	Fixed::operator++(void) {
	
}

Fixed	Fixed::operator++(int) {

}

Fixed&	Fixed::operator--(void) {
	
}

Fixed	Fixed::operator--(int) {
	
}

/*---------------------------COMPARISON-OPERATORS-----------------------------*/

bool	Fixed::operator>(const Fixed& x) {
	return FixedPoint > x.FixedPoint;
}

bool	Fixed::operator<(const Fixed& x) {
	return this.FixedPoint < x.FixedPoint;
}

bool	Fixed::operator>=(const Fixed& x) {
	return this.FixedPoint >= x.FixedPoint;
}

bool	Fixed::operator<=(const Fixed& x) {
	return this.FixedPoint <= x.FixedPoint;
}

bool	Fixed::operator==(const Fixed& x) {
	return this.FixedPoint == x.FixedPoint;
}

bool	Fixed::operator!=(const Fixed& x) {
	return this.FixedPoint != x.FixedPoint;
}

/*---------------------------------MIN-MAX------------------------------------*/

const Fixed &Fixed::min(const Fixed &x, const Fixed &y) {
	
}

const Fixed	&Fixed::max(const Fixed &x, const Fixed &y) {
	
}

/*-----------------------------BASIC-FUNCTIONS--------------------------------*/

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
