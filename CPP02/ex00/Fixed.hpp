/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 15:01:37 by gasselin          #+#    #+#             */
/*   Updated: 2021/12/14 09:29:46 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
 private:
    int FixedPoint;
    static const int FracBites = 8;

 public:
    Fixed();
    Fixed(Fixed& x);
    Fixed& operator=( Fixed& x );
    int getRawBits(void) const;
    void setRawBits(int const raw);
    ~Fixed();
};

#endif