/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 11:06:53 by gasselin          #+#    #+#             */
/*   Updated: 2022/02/03 10:12:16 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

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
    
	std::cout << "Sign grade 0, Exec grade 5 : ";
    try {
        Form f("Test", 0, 5);
    } catch (std::exception& e) {
        std::cout << e.what() << "\n";
    }

	std::cout << "Sign grade 1, Exec grade 151 : ";
	try {
        Form f("Test", 1, 151);
    } catch (std::exception& e) {
        std::cout << e.what() << "\n";
    }

	std::cout << "\n";

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
		std::cout << f << "\n";
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