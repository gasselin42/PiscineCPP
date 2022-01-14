/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 12:29:30 by gasselin          #+#    #+#             */
/*   Updated: 2022/01/10 13:16:54 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

#include <iostream>
#include <string>

class WrongCat : public WrongAnimal {
 public:
    WrongCat();
    WrongCat(const WrongCat & rhs);
    virtual ~WrongCat();

    WrongCat & operator=(const WrongCat & rhs);

    void makeSound() const;
};

#endif