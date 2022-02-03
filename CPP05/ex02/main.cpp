/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 11:06:53 by gasselin          #+#    #+#             */
/*   Updated: 2022/02/03 10:45:09 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

#include <cstdlib>

int main()
{
    std::cout << "~~~~~~~~~~\n" << "Bureaucrat\n" << "~~~~~~~~~~\n" << std::endl;
    std::cout << "Test Grade 0 : ";
    try {
        Bureaucrat c("Exception", 0);
    } catch (std::exception& e) {
        std::cout << e.what();
    }

	std::cout << "Test Grade 151 : ";
    try {
        Bureaucrat c("Exception", 151);
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    Bureaucrat a("John", 1);
    Bureaucrat b("Joe", 150);

    try {
        std::cout << "Init grade : " << a;
        a.decrementGrade();
        std::cout << "Decrement grade : " << a;
        a.incrementGrade();
        std::cout << "Increment grade : " << a;
        a.incrementGrade();
    } catch (std::exception& e) {
        std::cout << "Increment grade : " << e.what() << std::endl;
    }

    try {
        std::cout << "Init grade : " << b;
        b.incrementGrade();
        std::cout << "Increment grade : " << b;
        b.decrementGrade();
        std::cout << "Decrement grade : " << b;
        b.decrementGrade();
    } catch (std::exception& e) {
        std::cout << "Decrement grade : " << e.what() << std::endl;
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

	std::cout << "\n";

    test1.executeForm(f);
    test1.executeForm(f1);
    test1.executeForm(f2);

	std::cout << "\n";

    test2.executeForm(f);
    test2.executeForm(f1);
    test2.executeForm(f2);
}