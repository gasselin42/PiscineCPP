/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 23:35:11 by gasselin          #+#    #+#             */
/*   Updated: 2022/01/28 15:30:32 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template <typename T>
void populate_container(T &cont)
{
	for (int i = 0; i < 25; i++)
		cont.push_back(i + 1);
}

template <typename T>
void print_vector(T &cont)
{
	std::vector<int>::iterator index;

	std::cout << "Array: ";

	// Using iterator, we don't need to keep track of the number of elements in the array
	for(index = cont.begin(); index != cont.end(); index++)
		std::cout << *index << " ";							  			
	std::cout << std::endl;
}

int main(void)
{
    int search;
	std::vector<int> vec0; // https://en.cppreference.com/w/cpp/container/vector
	std::vector<int>::iterator value; // Like a pointer, dereference to access value at its address.

	populate_container(vec0);
	
	std::cout << "\nVECTORS" << std::endl;
	print_vector(vec0);
	
	try {
        search = 10;
		value = easyfind(vec0, search);
		std::cout << "Value found: " << *value << std::endl;
	} catch (std::exception &e) {
		std::cout << "Value not found" << std::endl;
	}

	try {
        search = 0;
		value = easyfind(vec0, search);
		std::cout << "Value found: " << *value << std::endl;
	} catch (std::exception &e) {
		std::cout << "Value not found" << std::endl;
	}

	std::cout << std::endl;



	std::list<int> list1; // https://en.cppreference.com/w/cpp/container/list

	std::cout << "LINKED LIST" << std::endl;
	populate_container(list1);

	try {
		value = easyfind(vec0, 15);
		std::cout << "Value found: " << *value << std::endl;
	} catch (std::exception &e) {
		std::cout << "Value not found" << std::endl;
	}

	try {
		value = easyfind(vec0, 0);
		std::cout << "Value found: " << *value << std::endl;
	} catch (std::exception &e) {
		std::cout << "Value not found" << std::endl;
	}
	
	std::cout << std::endl;



	std::deque<int> deq1; // https://en.cppreference.com/w/cpp/container/deque

	std::cout << "DOUBLE-ENDED QUEUE" << std::endl;
	populate_container(deq1);
	
	try {
		value = easyfind(vec0, 23);
		std::cout << "Value found: " << *value << std::endl;
	} catch (std::exception &e) {
		std::cout << "Value not found" << std::endl;
	}

	try {
		value = easyfind(vec0, 0);
		std::cout << "Value found: " << *value << std::endl;
	} catch (std::exception &e) {
		std::cout << "Value not found" << std::endl;
	}

	std::cout << std::endl;

}