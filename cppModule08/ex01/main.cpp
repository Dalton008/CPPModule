/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjammie <mjammie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 18:19:52 by mjammie           #+#    #+#             */
/*   Updated: 2021/08/25 14:11:45 by mjammie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void test100(std::vector<int> *v)
{
	int arr[100] = {63, 297, 1, 64, 134, 24, 229, 298, 269, 114, 31, 150, 288,
		 228, 261, 185, 193, 158, 199, 32, 27, 38, 149, 239, 58, 292, 222, 
		 247, 188, 189, 103, 126, 65, 252, 78, 290, 135, 90, 8, 191, 89, 299, 
		 102, 251, 123, 46, 74, 75, 28, 141, 202, 52, 11, 128, 84, 97, 7, 115, 
		 238, 51, 80, 9, 69, 232, 243, 293, 196, 289, 44, 244, 39, 221, 86, 192, 
		 22, 277, 300, 87, 172, 174, 173, 59, 194, 161, 218, 275, 295, 291, 264, 
		 279, 106, 53, 56, 165, 176, 242, 263, 157, 227, 5};
	for (int i = 0; i < 100; i++)
	{
		(*v).push_back(arr[i]);
	}
}

void test10000(std::vector<int> *v)
{
	for (int i = 0; i < 10000; i++)
	{
		(*v).push_back(i);
	}
}

int main()
{
	try
	{
		std::cout << "***Test all ok***" << std::endl;
		Span sp = Span(5);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << "***Test add more nums than size***" << std::endl;
		Span sp = Span(5);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		sp.addNumber(12);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << "***Test 100 nums***" << std::endl;
		Span sp = Span(100);
		std::vector<int> v;
		test100(&v);
		sp.addMoreNumber(v);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << "***Test 10000 nums***" << std::endl;
		Span sp = Span(10000);
		std::vector<int> v;
		test10000(&v);
		sp.addMoreNumber(v);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
