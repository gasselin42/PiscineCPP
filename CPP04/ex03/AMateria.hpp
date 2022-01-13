/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 15:28:41 by gasselin          #+#    #+#             */
/*   Updated: 2022/01/11 13:26:41 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>

#include "ICharacter.hpp"
class ICharacter;

class AMateria {
 protected:
       std::string type;
       
 public:
       AMateria();
       AMateria(const AMateria & rhs);
       AMateria(std::string const & _type);
       AMateria & operator=(const AMateria & rhs);
       virtual ~AMateria();
       
       std::string const & getType() const;

       virtual AMateria * clone() const = 0;
       virtual void use(ICharacter & target);
};

#endif