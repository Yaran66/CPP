//
// Created by Aleksey Tvorogov on 12/11/2022.
//

#include "base.h"
#include <cstdlib>
#include <exception>

Base *generate(void)
{
	srand(time(NULL));
	int rng = rand() % 3;

	if (rng == 0)
	{
		std::cout << "Creating A" << std::endl;
		return new A;
	}
	else if (rng == 1)
	{
		std::cout << "Creating B" << std::endl;
		return new B;
	}

	std::cout << "Creating C" << std::endl;
	return new C;
}

void identify(Base *p)
{
	A *a = dynamic_cast<A *>(p);
	B *b = dynamic_cast<B *>(p);
	C *c = dynamic_cast<C *>(p);

	if (a)
		std::cout << "Input type is A" << std::endl;
	else if (b)
		std::cout << "Input type is B" << std::endl;
	else if (c)
		std::cout << "Input type is C" << std::endl;
}

void identify(Base &p)
{
	try
	{
		A &a = dynamic_cast<A &>(p);
		std::cout << "Input type is A" << std::endl;
	}
	catch (std::bad_cast &e) {}

	try
	{
		B &b = dynamic_cast<B &>(p);
		std::cout << "Input type is B" << std::endl;
	}
	catch (std::bad_cast &e) {}

	try
	{
		C &c = dynamic_cast<C &>(p);
		std::cout << "Input type is C" << std::endl;
	}
	catch (std::bad_cast &e) {}
}

int main()
{
	Base *base = generate();
	std::cout << "By pointer: ";
	identify(base);
	delete base;

	base = generate();
	std::cout << "By reference: ";
	identify(*base);
	delete base;
}
