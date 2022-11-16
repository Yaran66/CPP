//
// Created by Aleksey Tvorogov on 08/11/2022.
//

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>

class ClapTrap
{
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const &);
	~ClapTrap();

	ClapTrap & operator=(const ClapTrap &);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	const std::string& getName() const;
	const unsigned int& getHitPoints() const;
	const unsigned int& getEnergyPoints() const;
	const unsigned int& getAttack() const;

	void setAttack(unsigned int);

protected:
	std::string _name;
	unsigned int _HitPoints;
	unsigned int _EnergyPoints;
	unsigned int _Attack;
};

std::ostream& operator<<(std::ostream &o, ClapTrap const &rhs);
#endif //CLAPTRAP_H
