
#include "Cat.h"

Cat::Cat()
{
	std::cout << " Cat -> Default Constructor " << _type << " called"
	<< std::endl;
	_type = "Cat";
}

Cat::Cat(const Cat & copy) : Animal(copy) // if we use Animal copy
// constructor it do all the job, compiler happy
{
	std::cout << " Cat -> Copy Constructor " << _type << " called" <<
	std::endl;
	//_type = copy._type; // no need if we use Animal(copy) instead of Animal();
}

Cat::~Cat()
{
	std::cout << " Cat -> Destructor " << _type << " called" << std::endl;
}

Cat &Cat::operator=(const Cat &copy)
{
	std::cout << " Cat -> Copy assignment operator called " << _type << " "
																		"called"
	<< std::endl;
	_type = copy._type;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Cat sound: Meow! Meow!" << std::endl;
}

std::ostream& operator<<(std::ostream &out, Cat const &rhs) {
	out << "Cat object " << rhs.getType() << std::endl;
	return out;
}