
#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H

#include <iostream>

class WrongAnimal {

public:
	WrongAnimal();
//	WrongAnimal(std::string name);
	WrongAnimal(const WrongAnimal & copy);
	~WrongAnimal();
	WrongAnimal & operator=(const WrongAnimal & copy);

	void makeSound() const;
	std::string getType() const;

protected:
	std::string _type;
};

#endif
