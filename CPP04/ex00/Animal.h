
#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal {

public:
	Animal();
//	Animal(std::string name);
	Animal(const Animal & copy);
	virtual ~Animal();
	Animal & operator=(const Animal & copy);

	virtual void makeSound() const;
	std::string	getType() const;
	void		setType(std::string str);


protected:
	std::string _type;
};

std::ostream& operator<<(std::ostream &o, Animal const &rhs);

#endif
