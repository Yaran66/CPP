
#include "Cat.h"

Cat::Cat()
{
	std::cout << " Cat -> Default Constructor " << _type << " called"
	<< std::endl;
	_type = "Cat";
	_brain = new Brain;
}

Cat::Cat(const Cat & copy) : Animal(copy) // if we use Animal copy
// constructor it do all the job, compiler happy
{
	std::cout << " Cat -> Copy Constructor " << _type << " called" <<
	std::endl;
	//_type = copy._type; // no need if we use Animal(copy) instead of Animal();
	_brain = new Brain(*(copy._brain));
}

Cat::~Cat()
{
	std::cout << " Cat -> Destructor " << _type << " called" << std::endl;
	delete _brain;
}

Cat &Cat::operator=(const Cat &copy)
{
	if (this == &copy) // protection against self deletion
		return *this;
	std::cout << " Cat -> Copy assignment operator called " << _type << " "
																		"called"
	<< std::endl;
	_type = copy._type;
	if (_brain)
		delete _brain;
	_brain = new Brain(*(copy._brain));
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