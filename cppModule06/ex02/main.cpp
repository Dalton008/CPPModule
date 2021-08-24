/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjammie <mjammie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 19:49:02 by mjammie           #+#    #+#             */
/*   Updated: 2021/08/22 20:16:41 by mjammie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <cstdlib>

class Base
{
public:
	virtual ~Base(void) {};
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base * generate(void)
{
	srand(time(0));
	int random = rand() % 3;
	if (random == 0)
	{
		std::cout << "Create A class" << std::endl;
		return new A;
	}
	else if (random == 1)
	{
		std::cout << "Create B class" << std::endl;
		return new B;
	}
	std::cout << "Create C class" << std::endl;
	return new C;
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" <<std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" <<std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" <<std::endl;
}

void identify(Base& p)
{
	try
	{
		A &a =  dynamic_cast<A&>(p);
		(void)a;
		std::cout << "A" <<std::endl;
	}
	catch (const std::bad_cast& e)
	{
		std::cout << "Not A" << std::endl;
	}
	try
	{
		B &b =  dynamic_cast<B&>(p);
		(void)b;
		std::cout << "B" <<std::endl;
	}
	catch (const std::bad_cast& e)
	{
		std::cout << "Not B" << std::endl;
	}
	try
	{
		C &c =  dynamic_cast<C&>(p);
		(void)c;
		std::cout << "C" <<std::endl;
	}
	catch (const std::bad_cast& e)
	{
		std::cout << "Not C" << std::endl;
	}
}

int main()
{
	Base *base = generate();
	identify(base);
	std::cout << "******************************" << std::endl;
	Base &ref = *base;
	identify(ref);
}
