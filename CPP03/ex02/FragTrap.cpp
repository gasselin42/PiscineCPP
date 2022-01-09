/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 13:52:11 by gasselin          #+#    #+#             */
/*   Updated: 2022/01/04 13:52:12 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
    hitpoints = 100;
    energy = 100;
    damage = 30;

    std::cout << "FragTrap " << name << " created" << std::endl;
}

FragTrap::FragTrap(const FragTrap & rhs) : ClapTrap(rhs.name) {
    *this = rhs;

    std::cout << "FragTrap " << name << " created" << std::endl;
}

FragTrap::FragTrap(const std::string & _name) : ClapTrap(_name) {
    hitpoints = 100;
    energy = 100;
    damage = 30;

    std::cout << "FragTrap " << name << " created" << std::endl;
}

FragTrap & FragTrap::operator=(const FragTrap & rhs) {
    name = rhs.name;
    hitpoints = rhs.hitpoints;
    energy = rhs.energy;
    damage = rhs.damage;

    return *this;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << name << " destroyed" << std::endl;
}

void FragTrap::highFivesGuys() const {
    std::cout << "FragTrap " << name << " has given you a high five" << std::endl;
}
