
#include "Dog.h"

Dog::Dog()
{
	std::cout << " Dog -> Default Constructor " << _type << " called"
			  << std::endl;
	_type = "Dog";
	_brain = new Brain;
}

Dog::Dog(const Dog & copy) : Animal()
{
	std::cout << " Dog -> Copy Constructor " << _type << " called" <<
			  std::endl;
	_type = copy._type;
	_brain = new Brain(*(copy._brain));
}

Dog::~Dog()
{
	std::cout << " Dog -> Destructor " << _type << " called" << std::endl;
	delete _brain;
}

Dog &Dog::operator=(const Dog &copy)
{
	if (this == &copy) // protection against self deletion
		return *this;
	std::cout << " Dog -> Copy assignment operator called " << _type << " "
																		"called"
			  << std::endl;
	_type = copy._type;
	if (_brain)
		delete _brain;
	_brain = new Brain(*(copy._brain));
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Dog sound: Woof! Woof!" << std::endl;
}