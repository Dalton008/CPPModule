/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjammie <mjammie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 12:57:08 by mjammie           #+#    #+#             */
/*   Updated: 2021/08/19 12:38:52 by mjammie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void)
{
	std::cout << "Constructor AAnimal called" << std::endl;
	type = "AAnumal";
}

AAnimal::AAnimal(const AAnimal &animal)
{
	std::cout << "Animal copy constructor called" << std::endl;
	this->type = animal.type;
}

AAnimal& AAnimal::operator=(const AAnimal &animal)
{
	this->type = animal.type;
	return *this;
}

AAnimal::~AAnimal(void)
{
	std::cout << "Destructor Animal called" << std::endl;
}
