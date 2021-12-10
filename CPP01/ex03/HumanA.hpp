/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 11:23:04 by gasselin          #+#    #+#             */
/*   Updated: 2021/12/09 15:28:45 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include <string>

#include "Weapon.hpp"

class HumanA {
 private:
	std::string name;
	Weapon& weapon;
 public:
	HumanA( std::string Name, Weapon &Weapon);
	~HumanA();
	
	void	attack(void);
};

#endif