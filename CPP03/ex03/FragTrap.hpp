/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 13:53:46 by gasselin          #+#    #+#             */
/*   Updated: 2022/02/02 15:45:30 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

#include <iostream>
#include <string>

class FragTrap : virtual public ClapTrap {
 public:
    FragTrap();
    FragTrap(const FragTrap & rhs);
    FragTrap(const std::string & _name);
    FragTrap & operator=(const FragTrap & rhs);
    virtual ~FragTrap();

    void highFivesGuys() const;
};

#endif
