/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 13:52:06 by gasselin          #+#    #+#             */
/*   Updated: 2022/01/10 11:29:55 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

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
   ClapTrap(const ClapTrap & rhs);
   ClapTrap(const std::string & _name);
   ClapTrap & operator=(const ClapTrap & rhs);
   virtual ~ClapTrap();

   virtual void attack(const std::string & target) const;
   void takeDamage(unsigned int amount);
   void beRepaired(unsigned int amount);
};

#endif
