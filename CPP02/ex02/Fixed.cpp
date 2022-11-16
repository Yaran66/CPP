//
// Created by Aleksey Tvorogov on 07/11/2022.
//

#include "Fixed.h"
#include <iostream>
#include <cmath>

int	const Fixed::_bit = 8;

Fixed::Fixed(void):_n(0)
{
	//std::cout << "Default constructor called" << std::endl;
	//this->_n = 0;
	return;
}

Fixed::Fixed(const int i):_n(i*(1<<Fixed::_bit))
{
	//std::cout << "Int constructor called" << std::endl;
	return;
}

Fixed::Fixed(const float f):_n(roundf(f*(1<<Fixed::_bit)))
{
	//std::cout << "Float constructor called" << std::endl;
	return;
}

Fixed::Fixed(const Fixed & i)
{
	//std::cout << "Copy constructor called" << std::endl;
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
	//std::cout << "Destructor called" << std::endl;
	return;
}

Fixed &Fixed::operator=(const Fixed & i)
{
	//std::cout << "Copy assignment operator called" << std::endl;
	if( this != &i)
		this->_n = i.getRawBits();
	return *this;
}

std::ostream & operator<<(std::ostream & o, Fixed const & fixed)
{
	return ( o << fixed.toFloat());
}

bool Fixed::operator>(Fixed const & i) const
{
	//return(this->_n > i._n);
	return ! (*this <= i);
}

bool Fixed::operator<(Fixed const & i) const
{
	return(this->_n < i._n);
}

bool Fixed::operator<=(Fixed const & i) const
{
	return(this->_n <= i._n);
}

bool Fixed::operator>=(Fixed const & i) const
{
	//return(this->_n >= i._n);
	return ! (*this < i);
}

bool Fixed::operator==(Fixed const & i) const
{
	return(this->_n == i._n);
}

bool Fixed::operator!=(Fixed const & i) const
{
	//return(this->_n != i._n);
	return ! (*this == i);
}

Fixed Fixed::operator+(Fixed const & i)
{
	Fixed copy;
	copy.setRawBits(this->_n + i._n);
	return(copy);
}

Fixed Fixed::operator-(Fixed const & i)
{
	Fixed copy;
	copy.setRawBits(this->_n - i._n);
	return(copy);
}

Fixed Fixed::operator*(Fixed const & i)
{
	Fixed copy;
	copy.setRawBits((this->_n * i._n) >> _bit); // divide by 2^8
	return(copy);
}

Fixed Fixed::operator/(Fixed const & i)
{
	Fixed copy;
	if(i._n == 0)
	{
		std::cout << "You are trying to divide by 0 " << std::endl;
		return(copy);
	}
	copy.setRawBits((this->_n << this->_bit / i._n)); // multiply by 2^8
	return(copy);
}

Fixed&			Fixed::operator++() //pre increment ++i;
{
	this->_n++;
	return (*this);
}

Fixed&			Fixed::operator--()
{
	this->_n--;
	return (*this);
}

Fixed			Fixed::operator++(int) // post increment i++;
{
	Fixed copy(*this);
	this->_n++;
	return(copy);
}

Fixed			Fixed::operator--(int)
{
	Fixed copy(*this);
	this->_n--;
	return(copy);
}

Fixed & Fixed::min (Fixed & one, Fixed & two)
{
	return (one < two ? one : two);
}

Fixed & Fixed::max (Fixed & one, Fixed & two)
{
	return (one > two ? one : two);
}

Fixed const & Fixed::min (Fixed const & one, Fixed const & two)
{
	return (one < two ? one : two);
}

Fixed const & Fixed::max (Fixed const & one, Fixed const & two)
{
	return (one > two ? one : two);
}
