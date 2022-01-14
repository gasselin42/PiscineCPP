/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 11:06:53 by gasselin          #+#    #+#             */
/*   Updated: 2022/01/14 15:25:38 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

#include <cstdlib>

int main()
{
    std::cout << "~~~~~~~~~~\n" << "Bureaucrat\n" << "~~~~~~~~~~\n" << std::endl;
    try {
        Bureaucrat c("Exception", 0);
    } catch (std::exception& e) {
        std::cout << e.what() << "\n";
    }

    try {
        Bureaucrat c("Exception", 151);
    } catch (std::exception& e) {
        std::cout << e.what() << "\n";
    }

    Bureaucrat a("John", 1);
    Bureaucrat b("Joe", 150);

    try {
        std::cout << a << "\n";
        a.decrementGrade();
        std::cout << a << "\n";
        a.incrementGrade();
        std::cout << a << std::endl;
        a.incrementGrade();
    } catch (std::exception& e) {
        std::cout << e.what() << "\n";
    }

    try {
        std::cout << b << "\n";
        b.incrementGrade();
        std::cout << b << "\n";
        b.decrementGrade();
        std::cout << b << std::endl;
        b.decrementGrade();
    } catch (std::exception& e) {
        std::cout << e.what() << "\n";
    }

    std::cout << "\n~~~~\n" << "Form\n" << "~~~~\n" << std::endl;
    
    Bureaucrat test("Jack", 150);
    Bureaucrat test1("Jim", 35);
    Bureaucrat test2("Joe", 1);

    ShrubberyCreationForm  f("home");
    RobotomyRequestForm    f1("dog");
    PresidentialPardonForm f2("Amazon");

    try {
        test.signForm(f);
    } catch (std::exception& e) {
        std::cout << e.what() << "\n";
    }

    try {
        test1.signForm(f);
    } catch (std::exception& e) {
        std::cout << e.what() << "\n";
    }

    try {
        test2.signForm(f);
    } catch (std::exception& e) {
        std::cout << e.what() << "\n";
    }

    std::cout << std::endl;
    
    try {
        test.signForm(f1);
    } catch (std::exception& e) {
        std::cout << e.what() << "\n";
    }

    try {
        test1.signForm(f1);
    } catch (std::exception& e) {
        std::cout << e.what() << "\n";
    }

    try {
        test2.signForm(f1);
    } catch (std::exception& e) {
        std::cout << e.what() << "\n";
    }

    std::cout << std::endl;
    
    try {
        test.signForm(f2);
    } catch (std::exception& e) {
        std::cout << e.what() << "\n";
    }

    try {
        test1.signForm(f2);
    } catch (std::exception& e) {
        std::cout << e.what() << "\n";
    }

    try {
        test2.signForm(f2);
    } catch (std::exception& e) {
        std::cout << e.what() << "\n";
    }
    
    std::cout << std::endl;
    srand((unsigned int)time(NULL));

    test.executeForm(f);
    test.executeForm(f1);
    test.executeForm(f2);

    test1.executeForm(f);
    test1.executeForm(f1);
    test1.executeForm(f2);

    test2.executeForm(f);
    test2.executeForm(f1);
    test2.executeForm(f2);
}