/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 21:17:07 by gasselin          #+#    #+#             */
/*   Updated: 2022/01/03 21:29:34 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_CPP
#define DIAMONDTRAP_CPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
 public:
    DiamondTrap();
    DiamondTrap(const DiamondTrap & rhs);
    DiamondTrap(const std::string & _name);
    DiamondTrap & operator=(const DiamondTrap & rhs);
    ~DiamondTrap();

    void whoAmI() const;

    void attack(const std::string & target) const;

 private:
    std::string name;
};

#endif