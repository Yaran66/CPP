
#include <iostream>
#ifndef ZOMBIE_H
#define ZOMBIE_H

class Zombie
{
public:
	Zombie();
	//Zombie(std::string name);
	~Zombie(void);
	void announce( void ); // member function
	void SetName(std::string);

private:
	std::string	name;
};

Zombie*    zombieHorde( int N, std::string name );

#endif //ZOMBIE_H
