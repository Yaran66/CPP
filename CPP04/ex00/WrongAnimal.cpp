
#include "WrongAnimal.h"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal -> Default Constructor " << _type << " called"
	<< std::endl;
	_type = "unknown type";
}

//WrongAnimal::WrongAnimal(std::string name)
//{
//	std::cout << "WrongAnimal -> Constructor " << this << " called"
//	<< std::endl;
//	_type = name;
//}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	std::cout << "WrongAnimal -> Copy Constructor " << _type << " called"
	<< std::endl;
	_type = copy._type;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal -> Destructor " << _type << " called" <<
	std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &copy)
{
	std::cout << "WrongAnimal -> Copy assignment operator called " << _type
	<< " called" << std::endl;
	_type = copy._type;
	return *this;
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal sounds wrong" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return this->_type;
}