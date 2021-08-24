#ifndef ITER_HPP
#define ITER_HPP

template<typename T>
void iter(T *ad, const int len, void(*f)(T const &x))
{
	for (int i = 0; i < len; i++)
	{
		f(ad[i]);
	}
}

#endif