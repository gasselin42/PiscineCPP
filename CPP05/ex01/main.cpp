/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 11:06:53 by gasselin          #+#    #+#             */
/*   Updated: 2022/01/14 13:01:40 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

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
    
    try {
        Form f("Test", 0, 5);
    } catch (std::exception& e) {
        std::cout << e.what() << "\n";
    }

    try {
        Form f("Test", 1, 151);
    } catch (std::exception& e) {
        std::cout << e.what() << "\n";
    }

    Form f("Test", 35, 6);
    std::cout << f << "\n";

    Bureaucrat test("Jack", 40);
    Bureaucrat test1("Jim", 35);
    Bureaucrat test2("Joe", 1);

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
        std::cout << f << "\n";
    } catch (std::exception& e) {
        std::cout << e.what() << "\n";
    }
}