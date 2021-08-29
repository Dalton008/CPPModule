/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjammie <mjammie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 18:20:13 by mjammie           #+#    #+#             */
/*   Updated: 2021/08/25 13:58:13 by mjammie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void)
{}

Span::Span(unsigned int N)
{
	_N = N;
}

Span::Span(const Span &span)
{
	*this = span;
}

Span& Span::operator=(const Span &span)
{
	_N = span._N;
	_nums = span._nums;
	return *this;
}

Span::~Span(void)
{}

const char* Span::MoreNums::what() const throw()
{
	return "More nums!";
}

const char* Span::NotEnoughElements::what() const throw()
{
	return "Not enough elements!";
}

void Span::addNumber(int num)
{
	if (_nums.size() < _N)
		_nums.push_back(num);
	else 
		throw Span::MoreNums();
}

int Span::shortestSpan(void)
{
	if (_nums.size() < 2)
		throw Span::NotEnoughElements();
	int min;
	int secondMin;
	std::vector<int> _numsCopy = _nums;

	sort(_numsCopy.begin(), _numsCopy.end());;
	min = _numsCopy[0];
	secondMin = _numsCopy[1];
	return secondMin - min;
}

int Span::longestSpan(void)
{
	if (_nums.size() < 2)
		throw Span::NotEnoughElements();
	std::vector<int>::iterator min = std::min_element(_nums.begin(), _nums.end());
	std::vector<int>::iterator max = std::max_element(_nums.begin(), _nums.end());

	return *max - *min;
}

void Span::addMoreNumber(std::vector<int> v)
{
	if (v.size() > _N)
		throw Span::MoreNums();
	_nums.insert(_nums.end(), v.begin(), v.end());
}
