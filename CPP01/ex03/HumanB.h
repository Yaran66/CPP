

#ifndef HUMANB_H
#define HUMANB_H
#include "Weapon.h"

class HumanB{

public:
	HumanB(std::string name);
	~HumanB();
	void setWeapon(Weapon& weapon);
	void attack(void);

private:
	std::string	_name;
	Weapon* _weapon;

};

#endif //HUMANB_H
