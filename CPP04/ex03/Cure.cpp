/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 15:26:13 by gasselin          #+#    #+#             */
/*   Updated: 2022/01/12 15:31:43 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::Cure(const Cure & rhs) {
    *this = rhs;
}

Cure & Cure::operator=(const Cure & rhs) {
    (void)rhs;
    return *this;
}

Cure::~Cure() {}

AMateria * Cure::clone() const {
    return new Cure();
}