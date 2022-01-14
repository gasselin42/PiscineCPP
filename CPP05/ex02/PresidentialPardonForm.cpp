/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 14:56:10 by gasselin          #+#    #+#             */
/*   Updated: 2022/01/14 15:02:57 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
    : Form(DEF_PARDON, 25, 5), target("Default")
{
}

PresidentialPardonForm::PresidentialPardonForm(const std::string & _target)
    : Form(DEF_PARDON, 25, 5), target(_target)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & rhs)
    : Form(rhs.getName(), rhs.getSignGrade(), rhs.getExecGrade()), target(rhs.target)
{
}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm & rhs){
    (void)rhs;
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void PresidentialPardonForm::execute(const Bureaucrat & executor) const {
    checkExecution(executor);
    
    std::cout << target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}