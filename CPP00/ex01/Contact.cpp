/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 10:17:03 by gasselin          #+#    #+#             */
/*   Updated: 2022/01/09 15:18:32 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {
	this->active = 0;
	this->index = 0;
}
Contact::~Contact() {}

int&	Contact::get_number(std::string var) {
	if (var == "index")
		return (index);
	return (active);
}

std::string&	Contact::get_str(std::string var) {
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