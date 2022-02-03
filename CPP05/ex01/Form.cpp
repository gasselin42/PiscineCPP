/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 12:10:16 by gasselin          #+#    #+#             */
/*   Updated: 2022/02/03 10:07:56 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("Default"), signGrade(GRADE_LOW), execGrade(GRADE_LOW), is_signed(false) {}

Form::Form(const Form & rhs) 
    : name(rhs.name),
      signGrade(rhs.signGrade),
      execGrade(rhs.execGrade),
      is_signed(rhs.is_signed) {
    checkGrades();          
}

Form::Form(const std::string & _name, int sign_grade, int exec_grade)
    : name(_name), signGrade(sign_grade), execGrade(exec_grade), is_signed(false) {
    checkGrades();
}

Form::~Form() {}

Form & Form::operator=(const Form & rhs) {
    is_signed = rhs.is_signed;
    checkGrades();

    return *this;
}

const std::string & Form::getName() const { return name; }

int Form::getSignGrade() const { return signGrade; }

int Form::getExecGrade() const { return execGrade; }

bool Form::isSigned() const { return is_signed; }

void Form::beSigned(const Bureaucrat & brct) {
    if (brct.getGrade() > signGrade)
        throw Form::GradeTooLowException();
    is_signed = true;
}

const char * Form::GradeTooHighException::what() const throw() {
    return "grade too high";
}

const char * Form::GradeTooLowException::what() const throw() {
    return "grade too low";
}

void Form::checkGrades() const {
    if (signGrade < GRADE_HIGH) {
        std::cout << "signGrade : ";
        throw GradeTooHighException();
    }
    else if (signGrade > GRADE_LOW) {
        std::cout << "signGrade : ";
        throw GradeTooLowException();
    }

    if (execGrade < GRADE_HIGH) {
        std::cout << "execGrade : ";
        throw GradeTooHighException();
    }
    else if (execGrade > GRADE_LOW) {
        std::cout << "execGrade : ";
        throw GradeTooLowException();
    }
}

std::ostream & operator<<(std::ostream & lhs, const Form & rhs) {
	lhs << rhs.getName() << " form, signing grade " << rhs.getSignGrade() << ", executing grade "
        << rhs.getExecGrade() << (rhs.isSigned() ? ", is signed" : ", isn't signed") << std::endl;
	return lhs;
}