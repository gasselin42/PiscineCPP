/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 16:48:49 by gasselin          #+#    #+#             */
/*   Updated: 2022/01/18 17:18:07 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include <iostream>
#include <string>

struct Data { int n; float f; const std::string str; };

uintptr_t serialize(Data * ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data * deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data *>(raw);
}

int main()
{
    struct Data data = { 42, 3.1416, "Bonjour" };
    std::cout << "Initial values :" << std::endl;
    std::cout << "Int: " << data.n << std::endl;
    std::cout << "Float: " << data.f << std::endl;
    std::cout << "String: " << data.str << std::endl;

    uintptr_t   raw = serialize(&data);
    Data *      ptr = deserialize(raw);
    
    std::cout << std::endl;

    std::cout << "Serialized Int: " << raw << std::endl;
    std::cout << "Serialized Hex: 0x" << std::hex << raw << std::endl;
    std::cout << "Deserialized:   " << ptr << std::endl;

    std::cout << std::endl;
    
    std::cout << "Int: " << std::dec << ptr->n << std::endl;
    std::cout << "Float: " << ptr->f << std::endl;
    std::cout << "String: " << ptr->str << std::endl;
}