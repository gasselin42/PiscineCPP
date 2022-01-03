#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {
 protected:
    std::string name;
    unsigned int hitpoints;
    unsigned int energy;
    unsigned int damage;

 public:
    ClapTrap();
    ClapTrap(const std::string & _name);
    ~ClapTrap();

    virtual void attack(const std::string & target) const;
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif
