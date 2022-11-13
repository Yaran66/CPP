//
// Created by Aleksey Tvorogov on 27/10/2022.
//

#include "Zombie.h"

Zombie::Zombie(){
	std::cout << this->name << " Zombie was created" <<std::endl;
	return;
}

Zombie::~Zombie(void){
	std::cout << this->name << " Zombie was destroyed" <<std::endl;
	return;
}

void Zombie::announce( void ){
	std::cout << this->name << ": Moar brainz!..." <<std::endl;
}

void Zombie::SetName(std::string name){
	this->name = name;
}
