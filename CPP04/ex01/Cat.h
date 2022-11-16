
#ifndef CAT_H
#define CAT_H

#include "Animal.h"
#include "Brain.h"

class Cat : public Animal{
public:
	Cat();
	Cat(const Cat & copy);
	~Cat();
	Cat & operator=(const Cat & copy);

	void makeSound() const;
private:
	Brain* _brain;
};

std::ostream& operator<<(std::ostream &o, Cat const &rhs);

#endif
