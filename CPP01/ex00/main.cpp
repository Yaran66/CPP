
#include "Zombie.h"

int main(void)
{
	Zombie	ZombacStack("Kenwood");
	Zombie*	ZombacPtrHeap00;
	Zombie*	ZombacPtrHeap01;

	ZombacPtrHeap00 = newZombie("Foo");
	ZombacPtrHeap01 = newZombie("Hoo");

	ZombacStack.announce();
	ZombacPtrHeap01->announce();
	ZombacPtrHeap00->announce();

	randomChump("Albert");
	randomChump("Kuzmich");
/* heap cleared below */
	delete ZombacPtrHeap00;
	delete ZombacPtrHeap01;
/* stack cleared below */
	return(0); // ZombacStacks deleted here from stack
}
