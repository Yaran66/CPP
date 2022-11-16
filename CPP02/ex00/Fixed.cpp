//
// Created by Aleksey Tvorogov on 06/11/2022.
//

#include "Fixed.h"
#include "../ex01/Fixed.h"

#include <iostream>

int	const Fixed::_x = 8;

Fixed::Fixed(void):_n(0)
{
	std::cout << "Default constructor called" << std::endl;
	//this->_n = 0;
	return;
}

Fixed::Fixed(const Fixed & i)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = i; // call Copy assignment operator
	this->_n = i.getRawBits();
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return(this->_n);
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_n = raw;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

Fixed &Fixed::operator=(const Fixed & i)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_n = i.getRawBits();
	return *this;
}
