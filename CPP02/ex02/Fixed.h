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

	bool operator>(Fixed const & ) const;
	bool operator<(Fixed const & ) const;
	bool operator>=(Fixed const & ) const;
	bool operator<=(Fixed const & ) const;
	bool operator==(Fixed const & ) const;
	bool operator!=(Fixed const & ) const;

	Fixed operator+(Fixed const & );
	Fixed operator-(Fixed const & );
	Fixed operator*(Fixed const & );
	Fixed operator/(Fixed const & );

	Fixed&				operator++(); // pre increment ++i;
	Fixed				operator++(int); // post increment i++;
	Fixed&				operator--();
	Fixed				operator--(int);

	float toFloat( void ) const;
	int toInt( void ) const;
	int getRawBits( void ) const;
	void setRawBits( int const raw );

	static Fixed & min (Fixed & one, Fixed & two);
	static Fixed const & min (Fixed const & one, Fixed const & two);
	static Fixed & max (Fixed & one, Fixed & two);
	static Fixed const & max (Fixed const & one, Fixed const & two);

private:
	int _n;
	static const int	_bit;
};

std::ostream & operator<<( std::ostream & o, Fixed const & fixed);

#endif //FIXED_H
