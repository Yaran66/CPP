//
// Created by Aleksey Tvorogov on 07/11/2022.
//

#include <iostream>
#include "Fixed.h"

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;

//	std::cout << std::endl;
//	class { public: Fixed lhs; Fixed rhs; } Cases[] =
//			{{10, 10}, {-10.5f, -7},
//			 {25.5f,  5},{92.7f,  -200}, {15.0f, 0}};
//
//	for (unsigned i = 0; i < sizeof(Cases) / sizeof(Cases[0]); ++i) {
//		std::cout << "A: " << Cases[i].lhs << std::endl << "B: " << Cases[i].rhs << std::endl;
//		std::cout << "arithmetic operations: " << std::endl;
//		std::cout << "A + B = " << Cases[i].lhs + Cases[i].rhs << std::endl;
//		std::cout << "A - B = " << Cases[i].lhs - Cases[i].rhs << std::endl;
//		std::cout << "A * B = " << Cases[i].lhs * Cases[i].rhs << std::endl;
//		std::cout << "A / B = " << Cases[i].lhs / Cases[i].rhs << std::endl;
//		std::cout << "comparison: " << std::endl;
//		std::cout << "A < B ? " << (Cases[i].lhs < Cases[i].rhs ? "yes" : "no") << std::endl;
//		std::cout << "A <= B ? " << (Cases[i].lhs <= Cases[i].rhs ? "yes" : "no") << std::endl;
//		std::cout << "A > B ? " << (Cases[i].lhs > Cases[i].rhs ? "yes" : "no") << std::endl;
//		std::cout << "A >= B ? " << (Cases[i].lhs >= Cases[i].rhs ? "yes" : "no") << std::endl;
//		std::cout << "A == B ? " << (Cases[i].lhs == Cases[i].rhs ? "yes" : "no") << std::endl;
//		std::cout << "A != B ? " << (Cases[i].lhs != Cases[i].rhs ? "yes" : "no") << std::endl;
//		std::cout << "unary ops: " << std::endl;
//		std::cout << "A++ = " << Cases[i].lhs++ << std::endl;
//		std::cout << "A = " << Cases[i].lhs << std::endl;
//		std::cout << "++A = " << ++Cases[i].lhs << std::endl;
//		std::cout << "A = " << Cases[i].lhs << std::endl;
//		std::cout << "A-- = " << Cases[i].lhs-- << std::endl;
//		std::cout << "A = " << Cases[i].lhs << std::endl;
//		std::cout << "--A = " << --Cases[i].lhs << std::endl;
//		std::cout << "A = " << Cases[i].lhs << std::endl;
//		std::cout << "min(A,B) = " << Fixed::min(Cases[i].lhs, Cases[i].rhs) << std::endl;
//		std::cout << "min(const A, const B) = " << Fixed::min((const Fixed &) Cases[i].lhs, (const Fixed &) Cases[i].rhs)
//				  << std::endl;
//		std::cout << "max(A,B) = " << Fixed::max(Cases[i].lhs, Cases[i].rhs) << std::endl;
//		std::cout << "max(const A, const B) = " << Fixed::max((const Fixed &) Cases[i].lhs, (const Fixed &) Cases[i].rhs)
//				  << std::endl;
//		std::cout << std::endl;
//	}
	return 0;
}
