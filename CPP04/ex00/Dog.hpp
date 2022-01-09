/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 14:10:34 by gasselin          #+#    #+#             */
/*   Updated: 2022/01/04 14:13:33 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
 public:
    Dog();
    Dog(const Dog & rhs);
    virtual ~Dog();

    Dog & operator=(const Dog & rhs);

    virtual void makeSound() const;
};

#endif