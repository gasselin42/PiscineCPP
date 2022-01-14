/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 16:05:29 by gasselin          #+#    #+#             */
/*   Updated: 2022/01/14 16:23:14 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {
    forms[0] = "presidential pardon";
    forms[1] = "robotomy request";
    forms[2] = "shrubbery creation";
    funcTab[0] = &Intern::makePPForm;
    funcTab[1] = &Intern::makeRRForm;
    funcTab[2] = &Intern::makeSCForm;
}

Intern::Intern(const Intern & rhs) {
    *this = rhs;
}

Intern & Intern::operator=(const Intern & rhs) {
    for (int i = 0; i < 3; i++) {
        forms[i] = rhs.forms[i];
        funcTab[i] = funcTab[i];
    }
    return *this;
}

Intern::~Intern() {}

Form * Intern::makeForm(const std::string & form, const std::string & target) const {
    for (int i = 0; i < 3; i++) {
        if (form == forms[i]) {
            std::cout << "Intern creates " << form << std::endl;
            return (this->*funcTab[i])(target);
        }
    }
    
    std::cout << "Form " << form << " is unknown" << std::endl;
    return NULL;
}

Form * Intern::makePPForm(const std::string & target) const {
    return new PresidentialPardonForm(target);
}

Form * Intern::makeRRForm(const std::string & target) const {
    return new RobotomyRequestForm(target);
}

Form * Intern::makeSCForm(const std::string & target) const {
    return new ShrubberyCreationForm(target);
}