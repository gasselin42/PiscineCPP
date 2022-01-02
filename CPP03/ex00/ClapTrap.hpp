#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {
 private:


 public:
    ClapTrap();
    ~ClapTrap();

    void attack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
}

#endif
