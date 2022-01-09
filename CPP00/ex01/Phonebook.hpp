/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 10:10:35 by gasselin          #+#    #+#             */
/*   Updated: 2022/01/09 15:17:50 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include <cstring>

#include "Contact.hpp"

class Phonebook {
 private:
	Contact	contacts[8];

 public:
	Phonebook();
	~Phonebook();

	void	add_contact(void);
	void	search_contact(void);
	void	get_contact(void);
};

#endif