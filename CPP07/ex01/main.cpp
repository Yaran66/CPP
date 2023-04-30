//
// Created by Aleksey Tvorogov on 13/11/2022.
//

#include "iter.h"

class Awesome {
private:
	int _n;
public:
	Awesome(void): _n(42) {return ;}
	int get(void) const {return this->_n;}
};

std::ostream &operator<<(std::ostream &o, Awesome const &obj) {
	o << obj.get();
	return o;
}

int	main(void)
{
	std::cout << std::endl << "< CHAR >" << std::endl;
	char arrCh[4] = {'a', 'b', 'c', 'd'};
	::iter(arrCh, 4, printArr);

	std::cout << std::endl << "< INT >" << std::endl;
	int arrInt[4] = {1, 2, 21, 42};
	::iter(arrInt, 4, printArr);

	std::cout << std::endl << "< FLOAT >" << std::endl;
	float arrFl[4] = {21.0f, 42.0f, 2.1f, 0.42f};
	::iter(arrFl, 4, printArr);

	Awesome tab2[5];
	std::cout << std::endl << "< CLASS ARRAY >" << std::endl;
	::iter(tab2, 5, printArr );
	return (0);
}
