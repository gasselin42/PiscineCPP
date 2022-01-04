/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 21:17:02 by gasselin          #+#    #+#             */
/*   Updated: 2022/01/03 21:42:19 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap() {
    name = "Default";
    hitpoints = FragTrap::hitpoints;
    energy = ScavTrap::energy;
    damage = FragTrap::damage;

    std::cout << "DiamondTrap " << name << " created" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap & rhs) : ClapTrap(rhs.name) {
    *this = rhs;

    std::cout << "DiamondTrap " << name << " created" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string & _name) : ClapTrap(_name + "_clap_name"), name(_name) {
    hitpoints = FragTrap::hitpoints;
    energy = ScavTrap::energy;
    damage = FragTrap::damage;

    std::cout << "DiamondTrap " << name << " created" << std::endl;
}

DiamondTrap & DiamondTrap::operator=(const DiamondTrap & rhs) {
    name = rhs.name;
    hitpoints = rhs.hitpoints;
    energy = rhs.energy;
    damage = rhs.damage;

    return *this;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap " << name << " destroyed" << std::endl;
}

void DiamondTrap::attack(const std::string & target) const {
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() const {
    std::cout << "ClapTrap name : " << ClapTrap::name << "; DiamondTrap name : " << name << std::endl;
}