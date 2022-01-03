#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : Name("Eric"), hitpoints(10), energy(10), damage(0) {
    std::cout << "ClapTrap " << Name << " created" << std::endl;
}

ClapTrap::ClapTrap(std::string _Name) : Name(_Name), hitpoints(10), energy(10), damage(0) {
    std::cout << "ClapTrap " << Name << " created" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << Name << " destroyed" << std::endl;
}

void ClapTrap::attack(std::string const & target) {
    std::cout << "ClapTrap " << Name << " attacks " 
}

void ClapTrap::takeDamage(unsigned int amount) {

}

void ClapTrap::beRepaired(unsigned int amount) {

}
