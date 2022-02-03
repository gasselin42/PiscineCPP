/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 11:53:22 by gasselin          #+#    #+#             */
/*   Updated: 2022/02/03 11:06:09 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main() {
    const Animal *meta = new Animal();
    const Animal *j = new Dog();
    const Animal *i = new Cat();

    std::cout << std::endl;

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();

    std::cout << std::endl;

	{
	    const WrongAnimal *ptr = new WrongCat();
	    ptr->makeSound();
	    delete ptr;
	}

	std::cout << std::endl;

	{
	    const WrongCat *ptr = new WrongCat();
	    ptr->makeSound();
	    delete ptr;
	}

    std::cout << std::endl;

    delete i;
    delete j;
    delete meta;
}