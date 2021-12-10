/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 11:21:24 by gasselin          #+#    #+#             */
/*   Updated: 2021/12/09 15:28:29 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB {
 private:
	std::string	name;
	Weapon *weapon;
 public:
	HumanB( std::string Name );
	~HumanB();

	void	attack(void);
	void	setWeapon(Weapon &NewWeapon);
};

#endif
