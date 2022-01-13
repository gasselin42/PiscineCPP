/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 14:40:13 by gasselin          #+#    #+#             */
/*   Updated: 2022/01/12 14:48:45 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : name() {
    for (int i = 0; i < 4; i++)
        materias[i] = NULL;
}

Character::Character(const Character & rhs) {
    *this = rhs;
}

Character::Character(const std::string & _name) : name(_name) {
    for (int i = 0; i < 4; i++)
        materias[i] = NULL;
}

Character & Character::operator=(const Character & rhs) {
    name = rhs.getName();
    for (int i = 0; i < 4; i++) {
        delete materias[i];
        if (rhs.materias[i])
            materias[i] = rhs.materias[i]->clone();
        else
            materias[i] = NULL;
    }
    return *this;
}

Character::~Character() {
    for (int i = 0; i < 4; i++)
        delete materias[i];
}

const std::string & Character::getName() const {
    return name;
}

void Character::equip(AMateria * m) {
    for (int i = 0; i < 4; i++) {
        if (!materias[i]) {
            materias[i] = m;
            break ;
        }
    }
}

void Character::unequip(int idx) {
    if (idx < 0 || idx > 3)
        return;
    
    materias[idx] = NULL;
}

void Character::use(int idx, ICharacter & target) {
    if (idx < 0 || idx > 3)
        return;
    
    if (materias[idx])
        materias[idx]->use(target);
}