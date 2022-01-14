/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 14:49:35 by gasselin          #+#    #+#             */
/*   Updated: 2022/01/14 15:32:23 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

#include <string>
#include <iostream>

#define DEF_PARDON "Presidential Pardon Form"

class PresidentialPardonForm : public Form {
private:
    const std::string target;

public:
    PresidentialPardonForm();
    PresidentialPardonForm(const std::string & _target);
    PresidentialPardonForm(const PresidentialPardonForm & rhs);
    PresidentialPardonForm & operator=(const PresidentialPardonForm & rhs);
   virtual ~PresidentialPardonForm();

    virtual void execute(const Bureaucrat & executor) const;
};

#endif