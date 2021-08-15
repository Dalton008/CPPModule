/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjammie <mjammie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 16:52:56 by mjammie           #+#    #+#             */
/*   Updated: 2021/08/15 15:18:10 by mjammie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char **argv)
{
	if (argc != 4) {
		std::cout << "Invalid number of arguments!" << std::endl;
		return 0;
	}
	std::string filename = argv[1];
	std::string lineSearch = argv[2];
	if (lineSearch.length() == 0) {
		std::cout << "Invalid line search!" << std::endl;
		return 0;
	}
	std::string lineReplace = argv[3];
	size_t lenSearch = lineSearch.length();
	size_t lenReplace = lineReplace.length();
	size_t countChar = 0;
	std::string buf;
	std::string buf2;
	std::ifstream ifs(filename);
	if (!ifs.is_open()) {
		std::cout << "There is no such file!" << std::endl;
		return 0;
	}
	std::ofstream ofs(filename + ".replace");
	if (!ofs.is_open()) {
		return 0;
	}
	while (std::getline(ifs, buf))
	{
		countChar = 0;
		countChar = buf.find(lineSearch, countChar);
		size_t pos = 0;
		pos = buf.find(lineSearch, pos);
		while (pos != std::string::npos)
		{
			buf.erase(pos, lenSearch);
			buf.insert(pos, lineReplace);
			pos += lenReplace;
			pos = buf.find(lineSearch, pos);
		}
		if (ifs.eof())
			ofs << buf;
		else
			ofs << buf << std::endl;
	}
	return 0;
}
