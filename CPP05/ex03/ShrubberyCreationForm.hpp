/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 13:27:24 by gasselin          #+#    #+#             */
/*   Updated: 2022/01/14 14:34:58 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

#include <fstream>
#include <string>
#include <iostream>

#define DEF_SHRUB "Shrubbery Creation Form"

class ShrubberyCreationForm : public Form {
private:
    const std::string target;

public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(const std::string & _target);
    ShrubberyCreationForm(const ShrubberyCreationForm & rhs);
    ShrubberyCreationForm & operator=(const ShrubberyCreationForm & rhs);
    ~ShrubberyCreationForm();

    virtual void execute(const Bureaucrat & executor) const;
};

#endif