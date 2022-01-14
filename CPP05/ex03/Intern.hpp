/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 15:49:42 by gasselin          #+#    #+#             */
/*   Updated: 2022/01/14 16:34:10 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef INTERN_HPP
#define INTERN_HPP

#include <string>
#include <iostream>

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {
private:
    typedef Form * (Intern::* funcPtr)(const std::string & target) const;
    funcPtr funcTab[3];
    std::string forms[3];

    /*
    struct {
        std::string form_type;
        Form* (Intern::*form_maker)(const std::string&) const;
    } lookup[3];
    */
    
public:
    Intern();
    Intern(const Intern & rhs);
    Intern & operator=(const Intern & rhs);
    ~Intern();

    Form * makeForm(const std::string & form, const std::string & target) const;

    Form * makePPForm(const std::string & target) const;
    Form * makeRRForm(const std::string & target) const;
    Form * makeSCForm(const std::string & target) const;
};

#endif