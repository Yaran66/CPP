//
// Created by Aleksey Tvorogov on 07/11/2022.
//

#ifndef FIXED_H
#define FIXED_H
#include <iostream>

class Fixed
{
public:
	Fixed( void);
	Fixed(const int i);
	Fixed(const float f);
	Fixed(const Fixed & ); // copy constructor
	~Fixed( void);

	Fixed & operator=(Fixed const & );

	float toFloat( void ) const;
	int toInt( void ) const;
	int getRawBits( void ) const;
	void setRawBits( int const raw );

private:
	int _n;
	static const int	_bit;
};

std::ostream & operator<<( std::ostream & o, Fixed const & fixed);

#endif //FIXED_H
