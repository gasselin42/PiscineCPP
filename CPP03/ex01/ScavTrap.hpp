#ifndef CLAVTRAP_HPP
#define CLAVTRAV_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
 public:
    ScavTrap();
    ScavTrap(const std::string & _name);
    ~ScavTrap();

    void guardGate() const;
    void attack(const std::string & target) const;
};

#endif
