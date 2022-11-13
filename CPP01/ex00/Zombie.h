//
// Created by Aleksey Tvorogov on 25/10/2022.
//
#include <iostream>
#ifndef ZOMBIE_H
#define ZOMBIE_H

class Zombie
{
public:
	Zombie(std::string name);
	~Zombie(void);
	void announce( void ); // member function

private:
	std::string	name;
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif //ZOMBIE_H
