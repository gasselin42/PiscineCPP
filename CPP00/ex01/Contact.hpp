/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 10:08:40 by gasselin          #+#    #+#             */
/*   Updated: 2022/01/09 15:18:53 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>

class Contact {
 private:
	int	active;
	int	index;
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_nb;
	std::string	secret;

 public:
	Contact();
	~Contact();

	int&	get_number(std::string var);
	std::string&	get_str(std::string var);
};

#endif