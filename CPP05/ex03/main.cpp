/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 11:06:53 by gasselin          #+#    #+#             */
/*   Updated: 2022/01/14 16:48:04 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

#include <cstdlib>

int main()
{
    srand((unsigned int)time(NULL));

    {
        Intern someRandomIntern;
        Form*  rrf;

        {
            Bureaucrat b("Jim", 72);
            Bureaucrat b1("Jake", 45);
            rrf = someRandomIntern.makeForm("robotomy request", "Bender");
            b.executeForm(*rrf);
            b.signForm(*rrf);
            b1.executeForm(*rrf);
        }
        delete rrf;
        std::cout << "~~~~~~~~~~~" << std::endl;
        {
            Bureaucrat b("Jim", 145);
            Bureaucrat b1("Jake", 137);
            rrf = someRandomIntern.makeForm("shrubbery creation", "Homer");
            b.executeForm(*rrf);
            b.signForm(*rrf);
            b1.executeForm(*rrf);
        }
        delete rrf;
        std::cout << "~~~~~~~~~~~" << std::endl;
        {
            Bureaucrat b("Jim", 6);
            Bureaucrat b1("Jake", 5);
            rrf = someRandomIntern.makeForm("presidential pardon", "Mickey");
            b.executeForm(*rrf);
            b.signForm(*rrf);
            b1.executeForm(*rrf);
        }
        delete rrf;
        std::cout << "~~~~~~~~~~~" << std::endl;
        {
            Bureaucrat b("Jim", 6);
            Bureaucrat b1("Jake", 5);
            rrf = someRandomIntern.makeForm("pikachu", "Ash");
        }
    }
}