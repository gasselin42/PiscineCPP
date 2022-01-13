/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 15:20:56 by gasselin          #+#    #+#             */
/*   Updated: 2022/01/12 15:31:57 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::Ice(const Ice & rhs) {
    *this = rhs;
}

Ice & Ice::operator=(const Ice & rhs) {
    (void)rhs;
    return *this;
}

Ice::~Ice() {}

AMateria * Ice::clone() const {
    return new Ice();
}