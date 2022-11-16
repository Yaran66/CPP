
#include "Dog.h"

Dog::Dog()
{
	std::cout << " Dog -> Default Constructor " << _type << " called"
			  << std::endl;
	_type = "Dog";
}

Dog::Dog(const Dog & copy) : Animal()
{
	std::cout << " Dog -> Copy Constructor " << _type << " called" <<
			  std::endl;
	_type = copy._type;
}

Dog::~Dog()
{
	std::cout << " Dog -> Destructor " << _type << " called" << std::endl;
}

Dog &Dog::operator=(const Dog &copy)
{
	std::cout << " Dog -> Copy assignment operator called " << _type << " "
																		"called"
			  << std::endl;
	_type = copy._type;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Dog sound: Woof! Woof!" << std::endl;
}