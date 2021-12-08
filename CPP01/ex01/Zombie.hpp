/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 14:40:10 by gasselin          #+#    #+#             */
/*   Updated: 2021/12/08 14:43:43 by gasselin         ###   ########.fr       */
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
	Zombie* zombieHorde( int N, std::string name );
};

#endif