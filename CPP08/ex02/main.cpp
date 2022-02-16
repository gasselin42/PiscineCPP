/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 15:29:10 by gasselin          #+#    #+#             */
/*   Updated: 2022/02/16 12:03:42 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

int main()
{	
	std::cout << std::endl;

    MutantStack<int> mstack;
    
    mstack.push(5); // insert element at the top of the stack
    mstack.push(17);
    
    std::cout << "Stack top: " << mstack.top() << std::endl;
    
    mstack.pop(); // remove the top element (17)
    
    std::cout << "Stack size: " << mstack.size() << std::endl;
    
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);

	std::cout << "\n\033[0;31mFORWARD ITERATOR\033[0m\n\n";
    
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    
    ++it;
    --it;
    
    while (it != ite) {
        std::cout << *it << std::endl;
        ++it;
    }

	std::cout << "\n\033[0;31mCONST FORWARD ITERATOR\033[0m\n\n";
    
    const MutantStack<int> s(mstack);
	
	MutantStack<int>::const_iterator it2 = s.begin();
	MutantStack<int>::const_iterator ite2 = s.end();

	while (it2 != ite2) {
        std::cout << *it2 << std::endl;
        ++it2;
    }
	
    // s.push() -> Throw error

	std::cout << "\n\033[0;31mREVERSE ITERATOR\033[0m\n\n";

	MutantStack<int> rev;

	rev.push(17);
    rev.push(3);
    rev.push(5);
    rev.push(737);

	MutantStack<int>::reverse_iterator rev_it = rev.rbegin();
    MutantStack<int>::reverse_iterator rev_ite = rev.rend();

	while (rev_it != rev_ite) {
        std::cout << *rev_it << std::endl;
        ++rev_it;
    }

	std::cout << "\n\033[0;31mCONST REVERSE ITERATOR\033[0m\n\n";
    
    const MutantStack<int> rev2(rev);

	MutantStack<int>::const_reverse_iterator rev_it2 = rev2.rbegin();
	MutantStack<int>::const_reverse_iterator rev_ite2 = rev2.rend();

	while (rev_it2 != rev_ite2) {
        std::cout << *rev_it2 << std::endl;
        ++rev_it2;
    }

	std::cout << std::endl;

    return 0;
}