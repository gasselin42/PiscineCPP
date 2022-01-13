/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 14:15:31 by gasselin          #+#    #+#             */
/*   Updated: 2022/01/11 14:40:00 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include <string>

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter {
private:
    AMateria * materias[4];
    std::string name;

public:
    Character();
    Character(const Character & rhs);
    Character(const std::string & _name);
    Character & operator=(const Character & rhs);
    virtual ~Character();

    virtual const std::string & getName() const;
    virtual void                equip(AMateria * m);
    virtual void                unequip(int idx);
    virtual void                use(int idx, ICharacter & target);
};

#endif