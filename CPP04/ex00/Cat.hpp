/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 14:07:46 by gasselin          #+#    #+#             */
/*   Updated: 2022/01/04 14:11:51 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
 public:
    Cat();
    Cat(const Cat & rhs);
    virtual ~Cat();

    Cat & operator=(const Cat & rhs);

    virtual void makeSound() const;
};

#endif