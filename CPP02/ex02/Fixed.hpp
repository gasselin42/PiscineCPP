/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 15:21:22 by gasselin          #+#    #+#             */
/*   Updated: 2021/12/14 15:41:20 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
 private:
    int FixedPoint;
    static const int FracBites = 8;

 public:
    Fixed();
    Fixed(const Fixed& x);
	Fixed(const int nb);
	Fixed(const float flt);
	
    Fixed&	operator=(const Fixed& x);
	Fixed&	operator+(const Fixed& x);
	Fixed&	operator-(const Fixed& x);
	Fixed&	operator*(const Fixed& x);
	Fixed&	operator/(const Fixed& x);

	Fixed&	operator++(void);
	Fixed	operator++(int);
	Fixed&	operator--(void);
	Fixed	operator--(int);

	bool	operator>(const Fixed& x);
	bool	operator<(const Fixed& x);
	bool	operator>=(const Fixed& x);
	bool	operator<=(const Fixed& x);
	bool	operator==(const Fixed& x);
	bool	operator!=(const Fixed& x);

	static const Fixed	&min(const Fixed &x, const Fixed &y);
	static const Fixed	&max(const Fixed &x, const Fixed &y);
	
    int getRawBits(void) const;
    void setRawBits(int const raw);
	float toFloat(void) const;
	int	toInt(void) const;

    ~Fixed();
};

std::ostream & operator<<( std::ostream &lhs, Fixed const &rhs );

#endif