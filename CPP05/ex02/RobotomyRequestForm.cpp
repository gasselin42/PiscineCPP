/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 14:49:24 by gasselin          #+#    #+#             */
/*   Updated: 2022/01/14 15:13:22 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
    : Form(DEF_ROBOT, 72, 45), target("Default")
{
}

RobotomyRequestForm::RobotomyRequestForm(const std::string & _target)
    : Form(DEF_ROBOT, 72, 45), target(_target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & rhs)
    : Form(rhs.getName(), rhs.getSignGrade(), rhs.getExecGrade()), target(rhs.target)
{
}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm & rhs){
    (void)rhs;
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::execute(const Bureaucrat & executor) const {
    checkExecution(executor);
    
    std::cout << "* Drilling noises *" << std::endl;

    if (rand() % 2 == 0)
        std::cout << target << " has been robotized successfully!" << std::endl;
    else
        std::cout << target << " has failed to be robotized!" << std::endl;
}