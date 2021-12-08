/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 10:08:40 by gasselin          #+#    #+#             */
/*   Updated: 2021/12/07 14:18:09 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>
using namespace std;

class Contact {
 private:
	int	active;
	int	index;
	string	first_name;
	string	last_name;
	string	nickname;
	string	phone_nb;
	string	secret;

 public:
	Contact();
	~Contact();

	int&	get_number(string var);
	string&	get_str(string var);
};

#endif