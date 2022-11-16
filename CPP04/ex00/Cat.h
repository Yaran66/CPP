
#ifndef CAT_H
#define CAT_H

#include "Animal.h"

class Cat : public Animal{
public:
	Cat();
	Cat(const Cat & copy);
	~Cat();
	Cat & operator=(const Cat & copy);

	void makeSound() const;
};

std::ostream& operator<<(std::ostream &o, Cat const &rhs);

#endif
