/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 21:17:07 by gasselin          #+#    #+#             */
/*   Updated: 2022/01/10 11:31:07 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef DIAMONDTRAP_CPP
#define DIAMONDTRAP_CPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

#include <iostream>
#include <string>

class DiamondTrap : public FragTrap, public ScavTrap {
 private:
   std::string name;

 public:
   DiamondTrap();
   DiamondTrap(const DiamondTrap & rhs);
   DiamondTrap(const std::string & _name);
   DiamondTrap & operator=(const DiamondTrap & rhs);
   virtual ~DiamondTrap();

   void whoAmI() const;

   virtual void attack(const std::string & target) const;
};

#endif