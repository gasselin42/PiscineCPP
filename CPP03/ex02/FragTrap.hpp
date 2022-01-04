#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
 public:
    FragTrap();
    FragTrap(const FragTrap & rhs);
    FragTrap(const std::string & _name);
    FragTrap & operator=(const FragTrap & rhs);
    virtual ~FragTrap();

    void highFivesGuys() const;
};

#endif
