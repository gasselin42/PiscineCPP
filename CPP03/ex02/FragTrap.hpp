#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
 public:
    FragTrap();
    FragTrap(const std::string & _name);
    ~FragTrap();

    void highFivesGuys() const;
};

#endif
