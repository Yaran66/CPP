
#include "HumanB.h"

HumanB::HumanB(std::string name) : _name(name)
{
	this->_weapon = NULL;
	return;
}

HumanB::~HumanB()
{
	return;
}

void HumanB::setWeapon(Weapon& weapon)
{
	this->_weapon = &weapon;
}

void HumanB::attack()
{
	if(this->_weapon)
		std::cout << this->_name << " attack with their " \
					<< this->_weapon->getType() << std::endl;
	else
		std::cout << this->_name << " attacks without weapon " << std::endl;
}
