/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 13:54:06 by gasselin          #+#    #+#             */
/*   Updated: 2022/01/04 13:54:07 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
 public:
    ScavTrap();
    ScavTrap(const ScavTrap & rhs);
    ScavTrap(const std::string & _name);
    ScavTrap & operator=(const ScavTrap & rhs);
    virtual ~ScavTrap();

    void guardGate() const;
    virtual void attack(const std::string & target) const;
};

#endif
