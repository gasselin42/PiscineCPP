#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("Eric"), hitpoints(10), energy(10), damage(0) {
    std::cout << "ClapTrap " << name << " created" << std::endl;
}

ClapTrap::ClapTrap(const std::string _name) : name(_name), hitpoints(10), energy(10), damage(0) {
   std::cout << "ClapTrap " << name << " created" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << name << " destroyed" << std::endl;
}

void ClapTrap::attack(const std::string & target) const {
    std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << damage << " points of damage" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (amout > hitpoints)
        amount = hitpoints;
    hitpoints -= amount;

    std::cout << "ClapTrap " << name << "is bleeding, lost " << amount << " points of damage" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (amount > energy)
        amount = energy;
    hitpoints += amount;
    energy -= amount;

    std::cout << "ClapTrap " << name << " has regenerated " << amount << " points of damage" << std::endl;
}
