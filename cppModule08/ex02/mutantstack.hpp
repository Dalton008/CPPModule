#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	typedef typename std::stack<T>::container_type::iterator iterator;

	MutantStack(void) : std::stack<T>()
	{}

	MutantStack(const MutantStack &mtStack) : std::stack<T>(mtStack)
	{}

	MutantStack& operator=(const MutantStack &mtStack)
	{
		std::stack<T>::operator=(mtStack);
		return *this;
	}

	~MutantStack(void)
	{}

	iterator begin()
	{
		return std::stack<T>::c.begin();
	}

	iterator end()
	{
		return std::stack<T>::c.end();
	}
};

#endif