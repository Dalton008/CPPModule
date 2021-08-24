#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>

template<typename T>
class Array
{
private:
	int _size;
	T *arr;

public:
	Array()
	{
		arr = new T[0];
		_size = 0;
	}

	Array(unsigned int n)
	{
		arr = new T[n];
		_size = n;
	}

	Array(const Array<T> &array)
	{
		*this = array;
	}

	Array& operator=(const Array<T> &array)
	{
		if (this == &array)
			return *this;
		this->_size = array._size;
		this->arr = new T[_size];
		for (int i = 0; i < _size; i++)
		{
			arr[i] = array.arr[i];
		}
		return *this;
	}

	T& operator[](int idx)
	{
		if (idx > _size || idx < 0)
			throw Array::NoSuchElement();
		return arr[idx];
	}

	int size() const
	{
		return this->_size;
	}

	~Array()
	{
		delete [] arr;
	}

	class NoSuchElement : public std::exception
	{
		const char* what() const throw()
		{
			return "Exception: No Such Element!";
		}
	};

};

#endif