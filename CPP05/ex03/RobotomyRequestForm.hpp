/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 14:52:14 by gasselin          #+#    #+#             */
/*   Updated: 2022/01/14 15:13:38 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

#include <string>
#include <iostream>
#include <cstdlib>

#define DEF_ROBOT "Robotomy Request Form"

class RobotomyRequestForm : public Form {
private:
    const std::string target;

public:
    RobotomyRequestForm();
    RobotomyRequestForm(const std::string & _target);
    RobotomyRequestForm(const RobotomyRequestForm & rhs);
    RobotomyRequestForm & operator=(const RobotomyRequestForm & rhs);
    ~RobotomyRequestForm();

    virtual void execute(const Bureaucrat & executor) const;
};

#endif