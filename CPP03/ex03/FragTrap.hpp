/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 13:53:46 by gasselin          #+#    #+#             */
/*   Updated: 2022/01/04 13:53:47 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

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
