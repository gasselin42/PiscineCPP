/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 14:36:47 by gasselin          #+#    #+#             */
/*   Updated: 2022/01/12 14:53:35 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <iostream>
#include <string>

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
private:
    AMateria * materias[4];

public:
    MateriaSource();
    MateriaSource(const MateriaSource & rhs);
    MateriaSource & operator=(const MateriaSource & rhs);
    virtual ~MateriaSource();

    virtual void learnMateria(AMateria * m);
    virtual AMateria* createMateria(std::string const & type);
};

#endif