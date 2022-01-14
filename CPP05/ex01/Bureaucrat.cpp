/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 11:36:52 by gasselin          #+#    #+#             */
/*   Updated: 2022/01/14 13:06:56 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Default"), grade(GRADE_LOW) {}

Bureaucrat::Bureaucrat(const Bureaucrat & rhs) : name(rhs.name), grade(rhs.grade) {
    checkGrade();
}

Bureaucrat::Bureaucrat(const std::string & _name, int _grade) : name(_name), grade(_grade) {
    checkGrade();
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat & rhs) {
    grade = rhs.grade;
    checkGrade();

    return *this;
} 

Bureaucrat::~Bureaucrat() {}

void Bureaucrat::incrementGrade() {
    --grade;
    checkGrade();
}

void Bureaucrat::decrementGrade() {
    ++grade;
    checkGrade();
}

void Bureaucrat::checkGrade() const {
    if (grade < GRADE_HIGH)
        throw GradeTooHighException();
    else if (grade > GRADE_LOW)
        throw GradeTooLowException();
}

const char * Bureaucrat::GradeTooHighException::what() const throw() {
    return "Grade too high\n";
}

const char * Bureaucrat::GradeTooLowException::what() const throw() {
    return "Grade too low\n";
}

void Bureaucrat::signForm(Form & form) const {
    try {
        form.beSigned(*this);
        std::cout << getName() << " signs " << form.getName() << std::endl;
    } catch (std::exception & e) {
        std::cout << getName() << " cannot sign " << form.getName()
                  << " because " << e.what() << "(" << getGrade()
                  << ")" << std::endl;
    }
}

const std::string & Bureaucrat::getName() const {
    return name;
}

int Bureaucrat::getGrade() const {
    return grade;
}

std::ostream & operator<<(std::ostream & lhs, const Bureaucrat & rhs) {
	lhs << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
	return lhs;
}
