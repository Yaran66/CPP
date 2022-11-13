
#include "Zombie.h"

Zombie::Zombie(std::string name){
	this->name = name;
	std::cout << this->name << " Zombie was created" <<std::endl;
	return;
}

Zombie::~Zombie(void){
	std::cout << this->name << " Zombie was destroyed" <<std::endl;
	return;
}

void Zombie::announce( void ){
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." <<std::endl;
}
