/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 10:17:03 by gasselin          #+#    #+#             */
/*   Updated: 2021/12/07 14:19:15 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {
	this->active = 0;
	this->index = 0;
}
Contact::~Contact() {}

int&	Contact::get_number(string var) {
	if (var == "index")
		return (index);
	return (active);
}

string&	Contact::get_str(string var) {
	if (var == "first_name")
		return (first_name);
	if (var == "last_name")
		return (last_name);
	if (var == "nickname")
		return (nickname);
	if (var == "phone_nb")
		return (phone_nb);
	return (secret);
}