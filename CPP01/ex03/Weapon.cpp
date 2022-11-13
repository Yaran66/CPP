
#include "Weapon.h"

Weapon::Weapon()
{
	return;
}

Weapon::Weapon(std::string type)
{
	this->_type = type;
	return;
}
Weapon::~Weapon()
{
	return;
}

std::string Weapon::getType(void) const
{
	return (this->_type);
}

void Weapon::setType(std::string type)
{
	this->_type = type;
}
