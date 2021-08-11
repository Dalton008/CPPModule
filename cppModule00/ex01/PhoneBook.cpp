/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjammie <mjammie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 14:00:02 by mjammie           #+#    #+#             */
/*   Updated: 2021/08/11 17:20:12 by mjammie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	size = 0;
	oldIndex = 0;
}

void PhoneBook::add()
{
	std::cout << "input first name:" << std::endl;
	getline(std::cin, contacts[oldIndex].firstName, '\n');
	std::cout << "input last name:" << std::endl;
	getline(std::cin, contacts[oldIndex].lastName, '\n');
	std::cout << "input nickname:" << std::endl;
	getline(std::cin, contacts[oldIndex].nickname, '\n');
	std::cout << "input phone number:" << std::endl;
	getline(std::cin, contacts[oldIndex].phoneNumber, '\n');
	std::cout << "input darkest secret:" << std::endl;
	getline(std::cin, contacts[oldIndex].darkestSecret, '\n');
	if (size < 8)
		size++;
	if (oldIndex == 7)
		oldIndex = 0;
	else
		oldIndex++;
}

void PhoneBook::printParameter(std::string str)
{
	int	len;

	len = 0;
	if (str.length() > 10)
	{
		for (int i = 0; i < 9; i++)
			std::cout << str[i];
		std::cout << "." << "|";
	}
	else
	{
		len = str.length();
		while (len < 10)
		{
			std::cout << " ";
			len++;
		}
		std::cout << str << "|";
	}
}

void PhoneBook::print(Contact contact)
{
	printParameter(contact.firstName);
	printParameter(contact.lastName);
	printParameter(contact.nickname);
	std::cout << std::endl;
}

void PhoneBook::search()
{
	std::string	index;
	int			in;

	for (size_t i = 0; i < size; i++)
	{
		std::cout << "         " << i << "|";
		print(contacts[i]);
	}
	std::cout << "What index is needed?" << std::endl;
	getline(std::cin, index, '\n');
	in = atoi(index.c_str());
	if (((in - 48) >= 0 && (in - 48) < 8) && !((size_t)(in - 48) > size - 1) && isdigit(in))
	{
		printInfo(contacts[in - 48]);
	}
	else
		std::cout << "Invalid index." << std::endl;
}

void PhoneBook::printInfo(Contact contact)
{
	std::cout << contact.firstName << std::endl;
	std::cout << contact.lastName << std::endl;
	std::cout << contact.nickname << std::endl;
	std::cout << contact.phoneNumber << std::endl;
	std::cout << contact.darkestSecret << std::endl;
}
