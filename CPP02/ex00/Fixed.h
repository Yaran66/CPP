//
// Created by Aleksey Tvorogov on 06/11/2022.
//

#ifndef FIXED_H
#define FIXED_H

class Fixed
{
public:
	Fixed( void);
	Fixed(const Fixed & ); // copy constructor
	~Fixed( void);

	Fixed & operator=(Fixed const & );

	int getRawBits( void ) const;
	void setRawBits( int const raw );

private:
	int _n;
	static const int	_x;
};

#endif //FIXED_H
