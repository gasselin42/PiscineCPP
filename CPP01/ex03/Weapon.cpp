/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 11:11:52 by gasselin          #+#    #+#             */
/*   Updated: 2021/12/09 11:29:31 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string	type ) { Type = type; }
Weapon::~Weapon() {}

std::string const&	Weapon::getType(void) {
	return Type;
}

void	Weapon::setType(std::string type) {
	Type = type;
}