/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 13:35:55 by gasselin          #+#    #+#             */
/*   Updated: 2021/12/10 14:00:23 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
#define KAREN_HPP

#include <iostream>
#include <string>

class Karen {
 private:
	void (Karen:: *functptr[4])();
	std::string	comment[4];

	void debug( void );
	void info( void );
	void warning( void );
	void error( void );

 public:
	Karen();
	~Karen();

	void complain( std::string level );
};

#endif