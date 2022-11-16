
#ifndef WRONGCAT_H
#define WRONGCAT_H

#include "WrongAnimal.h"

class WrongCat : public WrongAnimal {

public:
	WrongCat();
	WrongCat(const WrongCat & copy);
	~WrongCat();
	WrongCat & operator=(const WrongCat & copy);

	void makeSound() const;
};

#endif
