/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 11:07:31 by gasselin          #+#    #+#             */
/*   Updated: 2022/01/14 14:19:41 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>

#define GRADE_HIGH 1
#define GRADE_LOW 150

#include "Form.hpp"

class Form;

class Bureaucrat {
private:
    const std::string name;
    int grade;
    void checkGrade() const;
    
public:
    Bureaucrat();
    Bureaucrat(const Bureaucrat & rhs);
    Bureaucrat(const std::string & _name, int _grade);
    Bureaucrat & operator=(const Bureaucrat & rhs);
    ~Bureaucrat();

    void incrementGrade();
    void decrementGrade();

    const std::string & getName() const;
    int getGrade() const;

    void signForm(Form & form) const;
    void executeForm(const Form & form) const;

    class GradeTooHighException : public std::exception {
        public:
            virtual const char * what() const throw();
    };

    class GradeTooLowException : public std::exception {
        public:
            virtual const char * what() const throw();
    };
};

std::ostream & operator<<(std::ostream & lhs, const Bureaucrat & rhs);

#endif