/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 23:35:11 by gasselin          #+#    #+#             */
/*   Updated: 2022/02/21 12:24:49 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template <typename T>
void fill_vector(T &cont)
{
	for (int i = 0; i < 20; i++)
		cont.push_back(i + 1);
}

int main(void)
{
	// https://www.geeksforgeeks.org/deque-vs-vector-in-c-stl/

	const int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};

	std::vector<int> vec; // https://en.cppreference.com/w/cpp/container/vector
	std::vector<int>::iterator value_vec; // Like a pointer, dereference to access value at its address.
	
	std::cout << "\nVECTORS" << std::endl;
	// Vectors offer poor performance when adding or deleting elements at the front of it

	fill_vector(vec);
	
	try {
		value_vec = easyfind(vec, 5);
		std::cout << "Value found: " << *value_vec << std::endl;
	} catch (std::exception &e) {
		std::cerr << "Number not found : 5" << '\n';
	}

	try {
		value_vec = easyfind(vec, 0);
		std::cout << "Value found: " << *value_vec << std::endl;
	} catch (std::exception &e) {
		std::cerr << "Number not found : 0" << '\n';
	}

	std::cout << std::endl;

	std::deque<int> deq(arr, arr + 20); // https://en.cppreference.com/w/cpp/container/deque
	std::deque<int>::iterator value_deq;

	std::cout << "DOUBLE-ENDED QUEUE" << std::endl;
	// Deques offer good performances when items must be added or deleted at the beginning, middle or end of it
	
	try {
		value_deq = easyfind(deq, 15);
		std::cout << "Value found: " << *value_deq << std::endl;
	} catch (std::exception &e) {
		std::cerr << "Number not found : 15" << '\n';
	}

	try {
		value_deq = easyfind(deq, 0);
		std::cout << "Value found: " << *value_deq << std::endl;
	} catch (std::exception &e) {
		std::cerr << "Number not found : 0" << '\n';
	}

	std::cout << std::endl;
	
	std::list<int> lst(arr, arr + 20); // https://en.cppreference.com/w/cpp/container/list
	std::list<int>::iterator value_lst;

	std::cout << "LINKED LIST" << std::endl;

	try {
		value_lst = easyfind(lst, 10);
		std::cout << "Value found: " << *value_lst << std::endl;
	} catch (std::exception &e) {
		std::cerr << "Number not found : 10" << '\n';
	}

	try {
		value_lst = easyfind(lst, 0);
		std::cout << "Value found: " << *value_lst << std::endl;
	} catch (std::exception &e) {
		std::cerr << "Number not found : 0" << '\n';
	}
	
	std::cout << std::endl;

}

// Sequential access means the cost of accessing the 5th element is 5 times the cost
// of accessing the first element, or at least that there is an increasing cost 
// associated with an elements position in the set. This is because to access the 
// 5th element of the set, you must first perform an operation to find the 1st, 2nd, 
// 3rd, and 4th elements, so accessing the 5th element requires 5 operations.

// Random access means that accessing any element in the set has the same cost as 
// any other element in the set. Finding the 5th element of a set is still only a single operation.