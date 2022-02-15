/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 23:35:11 by gasselin          #+#    #+#             */
/*   Updated: 2022/02/15 11:28:01 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template <typename T>
void fill_container(T &cont)
{
	for (int i = 0; i < 25; i++)
		cont.push_back(i + 1);
}

int main(void)
{
	// Same thing as std::find
	// https://www.geeksforgeeks.org/deque-vs-vector-in-c-stl/

	std::vector<int> vec; // https://en.cppreference.com/w/cpp/container/vector
	std::vector<int>::iterator value_vec; // Like a pointer, dereference to access value at its address.

	fill_container(vec);
	
	std::cout << "\nVECTORS" << std::endl;
	// Vectors offer poor performance when adding or deleting elements at the front of it
	
	try {
		value_vec = easyfind(vec, 5);
		std::cout << "Value found: " << *value_vec << std::endl;
	} catch (std::exception &e) {
		std::cerr << e.what() << '\n';
	}

	try {
		value_vec = easyfind(vec, 0);
		std::cout << "Value found: " << *value_vec << std::endl;
	} catch (std::exception &e) {
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;

	std::deque<int> deq; // https://en.cppreference.com/w/cpp/container/deque
	std::deque<int>::iterator value_deq;

	fill_container(deq);

	std::cout << "DOUBLE-ENDED QUEUE" << std::endl;
	// Deques offer good performances when items must be added or deleted at the beginning, middle or end of it
	
	try {
		value_deq = easyfind(deq, 15);
		std::cout << "Value found: " << *value_deq << std::endl;
	} catch (std::exception &e) {
		std::cerr << e.what() << '\n';
	}

	try {
		value_deq = easyfind(deq, 0);
		std::cout << "Value found: " << *value_deq << std::endl;
	} catch (std::exception &e) {
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;
	
	std::list<int> lst; // https://en.cppreference.com/w/cpp/container/list
	std::list<int>::iterator value_lst;

	fill_container(lst);

	std::cout << "LINKED LIST" << std::endl;

	try {
		value_lst = easyfind(lst, 10);
		std::cout << "Value found: " << *value_lst << std::endl;
	} catch (std::exception &e) {
		std::cerr << e.what() << '\n';
	}

	try {
		value_lst = easyfind(lst, 0);
		std::cout << "Value found: " << *value_lst << std::endl;
	} catch (std::exception &e) {
		std::cerr << e.what() << '\n';
	}
	
	std::cout << std::endl;

}