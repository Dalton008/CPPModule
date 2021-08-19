/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjammie <mjammie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 12:53:40 by mjammie           #+#    #+#             */
/*   Updated: 2021/08/19 17:35:30 by mjammie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	Animal *animals[4];
	animals[0] = new Dog();
	animals[1] = new Dog();
	animals[2] = new Cat();
	animals[3] = new Cat();

	for (int i = 0; i < 4; i++)
	{
		delete (animals[i]);
	}

	std::cout << "\nDeep copy" << std::endl;
	Dog basic;
	{
		Dog tmp = basic;
	}
	Cat *cat = new Cat();
	Cat cat2(*cat);
}
