/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 13:34:19 by gasselin          #+#    #+#             */
/*   Updated: 2021/12/08 14:32:02 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie {
 private:
	std::string	name;
	
 public:
	Zombie();
	~Zombie();

	void	announce(void) const;
	Zombie* newZombie( std::string name );
	void	randomChump( std::string name );
};

#endif