/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 14:00:57 by gasselin          #+#    #+#             */
/*   Updated: 2022/01/04 14:06:55 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string.h>

class Animal {
 protected:
    std::string type;

 public:
    Animal();
    Animal(const Animal & rhs);
    virtual ~Animal();

    Animal & operator=(const Animal & rhs);

    virtual void makeSound() const;
};

#endif