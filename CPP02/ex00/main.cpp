//
// Created by Aleksey Tvorogov on 06/11/2022.
//
#include <iostream>
#include "Fixed.h"

int main( void )
{
	Fixed a;
	Fixed b(a);
	Fixed c;
	c = b;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
//	c.setRawBits(7);
//	std::cout << c.getRawBits() << std::endl;
	return 0;
}
