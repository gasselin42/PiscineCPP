/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 11:53:22 by gasselin          #+#    #+#             */
/*   Updated: 2022/01/10 14:51:36 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main() {
    Animal * animals[100];

    for (int i = 0; i < 100; i += 2) {
        animals[i] = new Dog();
        animals[i + 1] = new Cat();
    }

    for (int i = 0; i < 100; i++)
        animals[i]->makeSound();
        
    for (int i = 0; i < 100; i++)
        delete animals[i];
    
    std::cout << std::endl;
    
    Cat basic;
	Cat tmp = basic;

    std::cout << std::endl;

    const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete j;
    delete i;
    
    std::cout << std::endl;

}