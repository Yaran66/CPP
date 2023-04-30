//
// Created by Aleksey Tvorogov on 14/11/2022.
//

#ifndef WHATEVER_H
#define WHATEVER_H
#include <iostream>

template <typename T>
void swap(T& a, T& b)
{
	T temp;

	temp = a;
	a = b;
	b = temp;
};

template <typename T>
T	min(T const& a, T const& b)
{
	return (a < b ? a : b);
}

template <typename T>
T	max(T const& a, T const& b)
{
	return (a > b ? a : b);
}


#endif //WHATEVER_H
