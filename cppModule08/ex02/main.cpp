/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjammie <mjammie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 15:09:21 by mjammie           #+#    #+#             */
/*   Updated: 2021/08/26 15:58:32 by mjammie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include <list>

void testList(void)
{
	std::list<int> list;
	list.push_back(5);
	list.push_back(17);
	std::cout << list.front() << std::endl;
	list.pop_back();
	std::cout << list.size() << std::endl;
	list.push_back(3);
	list.push_back(5);
	list.push_back(737);
	list.push_back(0);
	std::list<int>::iterator it = list.begin();
	std::list<int>::iterator ite = list.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
}

int main()
{
	std::cout << "*** Main Test list***" << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::cout << "***Test list***" << std::endl;
	testList();

	std::cout << "***Test empty***" << std::endl;

	std::list<int> list;
	MutantStack<int> mstack1;
	std::cout << "List empty? " << list.empty() << std::endl;
	std::cout << "MutantStack empty? " << mstack1.empty() << std::endl;
	mstack1 = mstack;
	std::cout << "MutantStack empty? " << mstack1.empty() << std::endl;
	return 0;
}