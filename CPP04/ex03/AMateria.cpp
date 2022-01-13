/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 13:25:59 by gasselin          #+#    #+#             */
/*   Updated: 2022/01/11 14:41:53 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : type() {}

AMateria::AMateria(const AMateria & rhs) {
    *this = rhs;
}

AMateria::AMateria(const std::string & _type) : type(_type) {}

AMateria & AMateria::operator=(const AMateria & rhs) {
    type = rhs.type;

    return *this;
}

AMateria::~AMateria() {}

std::string const & AMateria::getType() const {
    return type;
}

void AMateria::use(ICharacter & target) {
    if (type == "ice")
        std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
    else if (type == "cure")
        std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
