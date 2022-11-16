
#include "Brain.h"

Brain::Brain()
{
	std::cout << " Brain created -> Default Constructor " << this << std::endl;
	for (unsigned int i = 0; i < 100; i++)
		_ideas[i]= "I am thinking about ....";
}

Brain::Brain(const Brain & copy)
{
	std::cout << " Brain -> Copy Constructor called" << this << std::endl;
	for (unsigned int i = 0; i < 100; i++)
		_ideas[i] = copy._ideas[i];
}

Brain::~Brain()
{
	std::cout << " Brain -> Destructor called" << this << std::endl;
}

Brain &Brain::operator=(const Brain &copy)
{
	std::cout << "Brain -> Copy assignment operator called " << this
																<< std::endl;
	for (unsigned int i = 0; i < 100; i++)
		_ideas[i]=copy._ideas[i];
	return *this;
}

std::string Brain::getIdea(unsigned int i) const
{
	if ( i < 100)
		return(_ideas[i]);
	return("I have no idea what are you doing");
}
