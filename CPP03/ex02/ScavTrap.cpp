/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 13:52:36 by gasselin          #+#    #+#             */
/*   Updated: 2022/01/04 13:52:37 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
    hitpoints = 100;
    energy = 50;
    damage = 20;

    std::cout << "ScavTrap " << name << " created" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap & rhs) : ClapTrap(rhs.name) {
    *this = rhs;

    std::cout << "ScavTrap " << name << " created" << std::endl;
}

ScavTrap::ScavTrap(const std::string & _name) : ClapTrap(_name) {
    hitpoints = 100;
    energy = 50;
    damage = 20;

    std::cout << "ScavTrap " << name << " created" << std::endl;
}

ScavTrap & ScavTrap::operator=(const ScavTrap & rhs) {
    name = rhs.name;
    hitpoints = rhs.hitpoints;
    energy = rhs.energy;
    damage = rhs.damage;

    return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << name << " destroyed" << std::endl;
}

void ScavTrap::attack(const std::string & target) const {
    std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << damage << " points of damage" << std::endl;
}

void ScavTrap::guardGate() const {
    std::cout << "ScavTrap " << name << " has entered the Gate keeper mode" << std::endl;
}
