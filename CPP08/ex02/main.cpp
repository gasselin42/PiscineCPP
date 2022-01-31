/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 15:29:10 by gasselin          #+#    #+#             */
/*   Updated: 2022/01/28 15:42:50 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

int main()
{
    MutantStack<int> mstack;
    
    mstack.push(5); // insert element at the top of the stack
    mstack.push(17);
    
    std::cout << "Stack top: " << mstack.top() << std::endl;
    
    mstack.pop(); // remove the top element (17)
    
    std::cout << "Stack size: " << mstack.size() << std::endl;
    
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    
    ++it;
    --it;
    
    while (it != ite) {
        std::cout << *it << std::endl;
        ++it;
    }
    
    std::stack<int> s(mstack);
    
    return 0;
}