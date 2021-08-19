/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjammie <mjammie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 12:53:40 by mjammie           #+#    #+#             */
/*   Updated: 2021/08/18 18:43:38 by mjammie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	j->makeSound();
	i->makeSound(); //will output the cat sound!
	meta->makeSound();
	delete meta;
	delete j;
	delete i;

	std::cout << "**************************************" << std::endl;

	const WrongAnimal* meta2 = new WrongAnimal();
	const WrongAnimal* k = new WrongDog();
	const WrongAnimal* n = new WrongCat();
	std::cout << k->getType() << " " << std::endl;
	std::cout << n->getType() << " " << std::endl;
	k->makeSound();
	n->makeSound(); //will output the cat sound!
	meta2->makeSound();
	delete meta2;
	delete k;
	delete n;
}
