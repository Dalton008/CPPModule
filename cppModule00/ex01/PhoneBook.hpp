#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include <string>
# include <cstring> 

class Contact
{
public:
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string phoneNumber;
	std::string darkestSecret;
};

class PhoneBook
{
private:
	Contact contacts[8];
	size_t	size;
	size_t	oldIndex;
public:

	PhoneBook();

	void add();

	void printParameter(std::string str);

	void print(Contact contact);

	void search();

	void printInfo(Contact contact);
};

#endif