/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjammie <mjammie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 20:45:25 by mjammie           #+#    #+#             */
/*   Updated: 2021/08/15 13:53:42 by mjammie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen()
{}

void Karen::complain(std::string level)
{
	typedef void (Karen::*functionArray)(void);
	functionArray arr[4] = 
	{
		arr[0] = &Karen::debug,
		arr[1] = &Karen::info,
		arr[2] = &Karen::warning,
		arr[3] = &Karen::error
	};
	std::string levels[4] = 
	{
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	int i;
	for (i = 0; i < 4; i++)
	{
		if (!level.compare(levels[i]))
			break;
	}
	switch (i)
	{
	case 0:
		std::cout << "[ DEBUG ]" << std::endl;
		(this->*(arr[i++]))();
	case 1:
		std::cout << "[ INFO ]" << std::endl;
		(this->*(arr[i++]))();
	case 2:
		std::cout << "[ WARNING ]" << std::endl;
		(this->*(arr[i++]))();
	case 3:
		std::cout << "[ ERROR ]" << std::endl;
		(this->*(arr[i]))();
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break; 
	}
}

void Karen::debug()
{
	std::cout << "I love to get extra bacon for my " 
		<< "7XL-double-cheese-triple-pickle-special-ketchup burger. "
		<< "I just love it!" << std::endl;
}

void Karen::info()
{
	std::cout << "I cannot believe adding extra "
		<< "bacon cost more money. You don’t put enough! If you did "
		<< "I would not have to ask for it!" << std::endl;
}

void Karen::warning()
{
	std::cout << "I think I deserve to have some extra "
		<< "bacon for free. I’ve been coming here for years "
		<< "and you just started working here last month." << std::endl;
}

void Karen::error()
{
	std::cout << "This is unacceptable, I want to speak to the "
		<< "manager now." << std::endl; 
}
