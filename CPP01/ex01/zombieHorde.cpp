
#include "Zombie.h"

Zombie*    zombieHorde( int N, std::string name ){
	Zombie*	horde;
	if (N < 0)
		N = 0;

	horde = new Zombie[N];
	for (int i = 0; i < N;)
	{
		horde[i].SetName(name);
		horde[i++].announce();
	}
	return(horde);
}
