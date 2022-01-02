#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {
 private:
    std::string Name;
    int HitPoints;
    int EnergyPoints;
    int Damage;

 public:
    ClapTrap(std::string _Name);
    ~ClapTrap();

    void attack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
}

#endif
