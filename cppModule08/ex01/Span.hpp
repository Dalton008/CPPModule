#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <iostream>
#include <algorithm>

class Span
{
private:
	Span(void);
	unsigned int _N;
	std::vector<int> _nums;

public:
	Span(unsigned int N);
	Span(const Span &span);
	Span& operator=(const Span &span);
	~Span(void);
	void addNumber(int num);
	int shortestSpan(void);
	int longestSpan(void);
	void addMoreNumber(std::vector<int> v);

	class MoreNums : public std::exception
	{
		const char* what() const throw();
	};
	class NotEnoughElements : public std::exception
	{
		const char* what() const throw();
	};
};


#endif