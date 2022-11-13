
#include "Zombie.h"

int main(void)
{
	Zombie*	horde;

	horde = zombieHorde(5, "Zombiez");
	delete [] horde;
	return(0);
}
