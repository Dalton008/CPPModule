/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjammie <mjammie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 18:31:32 by mjammie           #+#    #+#             */
/*   Updated: 2021/08/23 10:59:48 by mjammie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

struct Data
{
public:
	std::string s1;
	int num;
	std::string s2;
};

uintptr_t serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}

int main()
{
	Data *data = new Data;
	data->s1 = "Hello";
	data->num = 123;
	data->s2 = "World";
	uintptr_t ptr = serialize(data);
	Data *newData = deserialize(ptr);
	std::cout << newData->num << std::endl;
	std::cout << newData->s1 << std::endl;
	std::cout << newData->s2 << std::endl;
}
