/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 17:32:00 by gasselin          #+#    #+#             */
/*   Updated: 2022/01/18 17:46:54 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include <iostream>
#include <time.h>

Base * generate(void) {
    switch ((rand() % 3)) {
        case 0:
            return new A();
        case 1:
            return new B();
        case 2:
            return new C();
    }
    return NULL;
}

void identify(Base * p) {
    std::cout << "Pointer : ";
}

void identify(Base & p) {
    std::cout << "Reference : ";
}

int main(void) {
    srand((unsigned int)time(NULL));

    Base * base = generate();

    identify(base);
    identify(*base);
}