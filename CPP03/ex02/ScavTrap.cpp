#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
    hitpoints = 100;
    energy = 50;
    damage = 20;

    std::cout << "ScavTrap " << name << " created" << std::endl;
}

ScavTrap::ScavTrap(const std::string & _name) {
    name = _name;
    hitpoints = 100;
    energy = 50;
    damage = 20;

    std::cout << "ScavTrap " << name << " created" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << name << " destroyed" << std::endl;
}

void ScavTrap::attack(const std::string & target) const {
    std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << damage << " points of damage" << std::endl;
}
