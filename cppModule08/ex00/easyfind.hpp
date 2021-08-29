#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <vector>
#include <iterator>
#include <iostream>

class NoSuchElement : public std::exception
{
	const char* what() const throw()
	{
		return "Exception: No Such Element!";
	}
};

template<typename T>
typename T::iterator easyfind(T &arr, int n)
{
	typename T::iterator it;
	it = std::find(arr.begin(), arr.end(), n);
	if (it == arr.end())
		throw NoSuchElement();
	return it;
}

#endif