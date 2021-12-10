/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 11:22:11 by gasselin          #+#    #+#             */
/*   Updated: 2021/12/09 15:30:17 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string Name ) : name(Name), weapon(NULL) {}
HumanB::~HumanB() {}

void	HumanB::attack(void) {
	if (weapon)
		std::cout << name << " attcks with his " << weapon->getType() << std::endl;
	else
		std::cout << name << " attcks with his fists" << std::endl;
}

void	HumanB::setWeapon(Weapon &NewWeapon) {
	weapon = &NewWeapon;
}