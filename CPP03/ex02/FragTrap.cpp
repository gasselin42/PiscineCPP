#include "FragTrap.hpp"

FragTrap::FragTrap() {
    hitpoints = 100;
    energy = 100;
    damage = 30;

    std::cout << "FragTrap " << name << " created" << std::endl;
}

FragTrap::FragTrap(const std::string & _name) {
    name = _name;
    hitpoints = 100;
    energy = 100;
    damage = 30;

    std::cout << "FragTrap " << name << " created" << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << name << " destroyed" << std::endl;
}

void FragTrap::attack(const std::string & target) const {
    std::cout << "FragTrap " << name << " attacks " << target << ", causing " << damage << " points of damage" << std::endl;
}

void FragTrap::highFivesGuys() {
    std::cout << "FragTrap " << name << " has given you a high five" << std::endl;
}
