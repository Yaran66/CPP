
#include "WrongCat.h"

WrongCat::WrongCat()
{
	std::cout << " WrongCat -> Default Constructor " << _type << " called"
			  << std::endl;
	_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat & copy) : WrongAnimal()
{
	std::cout << " WrongCat -> Copy Constructor " << _type << " called" <<
			  std::endl;
	_type = copy._type;
}

WrongCat::~WrongCat()
{
	std::cout << " WrongCat -> Destructor " << _type << " called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &copy)
{
	std::cout << " WrongCat -> Copy assignment operator called " << _type << " "
																		"called"
			  << std::endl;
	_type = copy._type;
	return *this;
}

void WrongCat::makeSound() const
{
//	WrongAnimal::makeSound();
	std::cout << "WrongCat sound: Meow! Meow!" << std::endl;
}
