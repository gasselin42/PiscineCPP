/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 14:07:46 by gasselin          #+#    #+#             */
/*   Updated: 2022/01/10 15:12:39 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

#include <iostream>
#include <string>

class Cat : public Animal {
 private:
    Brain * brain;

 public:
    Cat();
    Cat(const Cat & rhs);
    virtual ~Cat();

    Cat & operator=(const Cat & rhs);

    virtual void makeSound() const;
};

#endif