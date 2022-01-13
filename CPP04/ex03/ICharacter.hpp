/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 16:58:50 by gasselin          #+#    #+#             */
/*   Updated: 2022/01/11 14:39:51 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include <string>

class AMateria;

class ICharacter {
 public:
    virtual ~ICharacter() {}
    virtual std::string const & getName() const = 0;
    virtual void                equip(AMateria * m) = 0;
    virtual void                unequip(int idx) = 0;
    virtual void                use(int idx, ICharacter & target) = 0;
};

#endif