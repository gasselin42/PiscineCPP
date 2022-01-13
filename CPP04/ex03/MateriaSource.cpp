/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 14:47:33 by gasselin          #+#    #+#             */
/*   Updated: 2022/01/12 14:58:05 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
    for (int i = 0; i < 4; i++)
        materias[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource & rhs) {
    *this = rhs;
}

MateriaSource & MateriaSource::operator=(const MateriaSource & rhs) {
    for (int i = 0; i < 4; i++) {
        delete materias[i];
        if (rhs.materias[i])
            materias[i] = rhs.materias[i]->clone();
        else
            materias[i] = NULL;
    }
    return *this;
}

MateriaSource::~MateriaSource() {
    for (int i = 0; i < 4; i++)
        delete materias[i];
}

void MateriaSource::learnMateria(AMateria * m) {
    for (int i = 0; i < 4; i++) {
        if (!materias[i]) {
            materias[i] = m->clone();
            break ;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type) {
    for (int i = 0; i < 4; i++) {
        if (materias[i] && materias[i]->getType() == type) {
            return materias[i]->clone();
        }
    }
    return NULL;
}