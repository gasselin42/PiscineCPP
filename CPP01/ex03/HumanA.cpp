/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 11:23:37 by gasselin          #+#    #+#             */
/*   Updated: 2021/12/09 15:09:19 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string Name, Weapon &Weapon ) : name(Name), weapon(Weapon) {}
HumanA::~HumanA() {}

void	HumanA::attack(void) {
	std::cout << name << " attcks with his " << weapon.getType() << std::endl;
}