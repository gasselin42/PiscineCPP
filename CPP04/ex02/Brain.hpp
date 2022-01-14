/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 13:15:18 by gasselin          #+#    #+#             */
/*   Updated: 2022/01/10 13:38:45 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain {
 private:
    std::string ideas[100];

 public:
    Brain();
    Brain(const Brain & rhs);
    ~Brain();

    Brain & operator=(const Brain & rhs);

    const std::string&  getIdea(const size_t index) const;
    void                setIdea(const std::string& idea, const size_t index);
};

#endif