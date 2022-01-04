#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
 public:
    ScavTrap();
    ScavTrap(const ScavTrap & rhs);
    ScavTrap(const std::string & _name);
    ScavTrap & operator=(const ScavTrap & rhs);
    ~ScavTrap();

    void guardGate() const;
    void attack(const std::string & target) const;
};

#endif
