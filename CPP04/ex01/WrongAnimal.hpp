/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 12:24:52 by gasselin          #+#    #+#             */
/*   Updated: 2022/01/10 12:47:01 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal {
 protected:
    std::string type;

 public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal & rhs);
    virtual ~WrongAnimal();

    WrongAnimal & operator=(const WrongAnimal & rhs);

    virtual void makeSound() const;
    std::string getType() const;
};

#endif