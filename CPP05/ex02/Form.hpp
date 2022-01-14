/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 11:16:20 by gasselin          #+#    #+#             */
/*   Updated: 2022/01/14 14:05:59 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
private:
    const std::string name;
    const int signGrade;
    const int execGrade;
    bool is_signed;
    void checkGrades() const;

protected:
    void checkExecution(const Bureaucrat & executor) const;

public:
    Form();
    Form(const Form & rhs);
    Form(const std::string & _name, int sign_grade, int exec_grade);
    Form & operator=(const Form & rhs);
    virtual ~Form();

    virtual void execute(const Bureaucrat & executor) const = 0;

    const std::string & getName() const;
    int getSignGrade() const;
    int getExecGrade() const;
    bool isSigned() const;
    void beSigned(const Bureaucrat & brct);

    class GradeTooHighException : public std::exception {
        public:
            virtual const char * what() const throw();
    };

    class GradeTooLowException : public std::exception {
        public:
            virtual const char * what() const throw();
    };
};

std::ostream & operator<<(std::ostream & lhs, const Form & rhs);

#endif