
#ifndef WEAPON_H
#define WEAPON_H
#include <iostream>

class Weapon{
public:
	Weapon();
	Weapon(std::string type);
	~Weapon();
	void	setType(std::string type);
	std::string getType(void) const;

private:
	std::string	_type;
};

#endif //WEAPON_H
