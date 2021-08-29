/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjammie <mjammie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 17:27:08 by mjammie           #+#    #+#             */
/*   Updated: 2021/08/24 18:01:57 by mjammie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	std::vector<int> v;

	v.push_back(10);
	v.push_back(4);
	v.push_back(42);
	v.push_back(21);
	try
	{
		std::vector<int>::iterator it = easyfind(v, 10);
		std::cout << "it = " << *it << std::endl;
		std::vector<int>::iterator it2 = easyfind(v, 777);
		std::cout << "it = " << *it2 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
