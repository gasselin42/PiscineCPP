#ifndef FRAGTRAP_HPP
#define FRAGTRAV_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
 public:
    FragTrap();
    FragTrap(const std::string & _name);
    ~FragTrap();

    void highFivesGuys() const;
    void attack(const std::string & target) const;
};

#endif
