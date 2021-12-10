/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 11:10:10 by gasselin          #+#    #+#             */
/*   Updated: 2021/12/09 15:17:11 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon {
 private:
	std::string	Type;
 public:
	Weapon( std::string	type );
	~Weapon();

	std::string const&	getType(void);
	void	setType(std::string type);
};

#endif