/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 11:06:53 by gasselin          #+#    #+#             */
/*   Updated: 2022/02/03 09:55:46 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
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
}