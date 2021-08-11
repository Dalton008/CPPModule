/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjammie <mjammie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 18:37:01 by mjammie           #+#    #+#             */
/*   Updated: 2021/08/11 17:12:10 by mjammie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main()
{
	PhoneBook	phoneBook;
	std::string	cmd;

	while (42)
	{
		std::cout << "Input command (add/exit/search):" << std::endl;
		getline(std::cin, cmd, '\n');
		if (cmd == "add")
		{
			phoneBook.add();
		}
		else if (cmd == "exit")
			exit(0);
		else if (cmd == "search")
		{
			phoneBook.search();
		}
		else
			std::cout << "Invalid command! Please enter: add, exit or search." << std::endl;
	}
}
