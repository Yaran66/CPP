
#ifndef BRAIN_H
#define BRAIN_H
#include <iostream>

class Brain
{
public:
	Brain();
	Brain(const Brain & copy);
	~Brain();
	Brain & operator=(const Brain & copy);

	std::string getIdea(unsigned int i) const;

private:
	std::string _ideas[100];
};


#endif
