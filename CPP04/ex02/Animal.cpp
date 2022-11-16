
#include "Animal.h"

Animal::Animal()
{
	std::cout << "Animal -> Default Constructor " << _type << " called"
	<< std::endl;
	_type = "animal type";
}

//Animal::Animal(std::string name)
//{
//	std::cout << "Animal -> Constructor " << this << " called" << std::endl;
//	_type = name;
//}

Animal::Animal(const Animal &copy)
{
	std::cout << "Animal -> Copy Constructor " << _type << " called" <<
	std::endl;
	_type = copy._type;
}

Animal::~Animal()
{
	std::cout << "Animal -> Destructor " << _type << " called" << std::endl;
}

Animal &Animal::operator=(const Animal &copy)
{
	std::cout << "Animal -> Copy assignment operator called " << _type << " called"
	<< std::endl;
	_type = copy._type;
	return *this;
}

void Animal::makeSound() const
{
	std::cout << "I am Animal" << std::endl;
}

std::string Animal::getType() const
{
	return this->_type;
}

void Animal::setType(std::string str)
{
	this->_type = str;
}

std::ostream& operator<<(std::ostream &out, Animal const &rhs) {
	out << "Animal object" << rhs.getType() << std::endl;
	return out;
}
