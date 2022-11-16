//
// Created by Aleksey Tvorogov on 07/11/2022.
//

#include "Fixed.h"
#include <iostream>
#include <cmath>

int	const Fixed::_bit = 8;

Fixed::Fixed(void):_n(0)
{
	std::cout << "Default constructor called" << std::endl;
	//this->_n = 0;
	return;
}

Fixed::Fixed(const int i):_n(i*(1<<Fixed::_bit))
{
	std::cout << "Int constructor called" << std::endl;
	return;
}

Fixed::Fixed(const float f):_n(roundf(f*(1<<Fixed::_bit)))
{
	std::cout << "Float constructor called" << std::endl;
	return;
}

Fixed::Fixed(const Fixed & i)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = i; // call Copy assignment operator
	this->_n = i.getRawBits();
}

float Fixed::toFloat( void ) const
{
	return((float)this->_n / (1<<Fixed::_bit));
}

int Fixed::toInt() const
{
	return(roundf((float)this->_n / (1<<Fixed::_bit)));
}

int Fixed::getRawBits() const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return(this->_n);
}

void Fixed::setRawBits( int const raw )
{
	//std::cout << "setRawBits member function called" << std::endl;
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
	if( this != &i)
		this->_n = i.getRawBits();
	return *this;
}

std::ostream & operator<<(std::ostream & o, Fixed const & fixed)
{
	return ( o << fixed.toFloat());
}
