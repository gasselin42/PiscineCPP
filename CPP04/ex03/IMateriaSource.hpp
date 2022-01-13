/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 15:26:10 by gasselin          #+#    #+#             */
/*   Updated: 2022/01/12 14:46:19 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

#include "AMateria.hpp"

#include <iostream>
#include <string>

class IMateriaSource
{
 public:
    virtual ~IMateriaSource() {}
    virtual void learnMateria(AMateria * m) = 0;
    virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif