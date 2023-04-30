//
// Created by Aleksey Tvorogov on 14/11/2022.
//

#include "whatever.h"

class Smth {
private:
	int _n;
public:
	Smth(): _n(0){}
	Smth(int n): _n(n){}
	~Smth() {}
	int getN() const {return _n;}
};

std::ostream &operator<<(std::ostream &o, const Smth &obj) {
	o << "N=" << obj.getN();
	return (o);
}


int main( void ) {
	int a = 2;
	int b = 3;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
	std::cout << "max(a, b) = " << ::max(a, b) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min(c, d) = " << ::min(c, d) << std::endl;
	std::cout << "max(c, d) = " << ::max(c, d) << std::endl;

	std::cout << std::endl;
	Smth k(5), l(10);
	std::cout << "k: " << k << ", l: " << l << std::endl;
	::swap(k, l);
	std::cout << "k: " << k << ", l: " << l << std::endl;
	return 0;
}
