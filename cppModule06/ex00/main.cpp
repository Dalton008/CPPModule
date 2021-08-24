/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjammie <mjammie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 19:27:14 by mjammie           #+#    #+#             */
/*   Updated: 2021/08/24 13:26:15 by mjammie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "Many values passed" << std::endl;
		return 0;
	}
	try
	{
		Convert convert;
		convert.parseType(argv[1]);
		if (convert.getType() == "char")
			convert.ifTypeChar(argv[1]);
		else
			convert.conversion(argv[1]);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
