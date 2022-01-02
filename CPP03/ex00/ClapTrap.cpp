#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string _Name) : Name(_Name) {
    std::cout << "Constructor of " << _Name << " has been called" << std::endl;
    HitPoints = 10;
    EnergyPoints = 10;
    Damage = 0;
}

ClapTrap::~ClapTrap() {
    std::cout << "Destructor of " << this->Name << " has been called" << std::endl;
}

void ClapTrap::attack(std::string const & target) {

}
