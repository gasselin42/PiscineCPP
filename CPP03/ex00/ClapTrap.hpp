#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {
 private:
    std::string const name;
    unsigned int hitpoints;
    unsigned int energy;
    unsigned int damage;

 public:
    ClapTrap();
    ClapTrap(std::string _Name);
    ~ClapTrap();

    void attack(std::string const & target) const;
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif
