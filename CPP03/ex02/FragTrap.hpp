/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 13:52:17 by gasselin          #+#    #+#             */
/*   Updated: 2022/01/10 11:30:54 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

#include <iostream>
#include <string>

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
