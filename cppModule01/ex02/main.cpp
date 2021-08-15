/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjammie <mjammie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 13:52:35 by mjammie           #+#    #+#             */
/*   Updated: 2021/08/12 14:10:33 by mjammie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *pstr;

	pstr = &str;
	std::string &refstr = str;

	std::cout << "address in memory of the string: " << &str << std::endl;
	std::cout << "address by use ptr: " << pstr << std::endl;
	std::cout << "address by use refstr: " << &refstr << std::endl;
}
