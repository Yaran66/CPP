//
// Created by Aleksey Tvorogov on 09/11/2022.
//

#include "FragTrap.h"

FragTrap::FragTrap()
{
	_name = "noname";
	_HitPoints = 100;
	_EnergyPoints = 100;
	_Attack = 30;
	std::cout << "Constructor FragTrap" << _name << " called" << std::endl;
}

FragTrap::FragTrap(std::string name):ClapTrap(name)
{
//	_name = name;
	_HitPoints = 100;
	_EnergyPoints = 100;
	_Attack = 30;
	std::cout << "Parametr constructor FragTrap" << _name << " called" <<
			  std::endl;
}

FragTrap::FragTrap(FragTrap const & copy):ClapTrap(copy)
{
//	_name = copy._name;
//	_HitPoints = copy._HitPoints;
//	_EnergyPoints = copy._EnergyPoints;
//	_Attack = copy._Attack;
	std::cout << "Copy constructor FragTrap " << _name << " called " <<
			  std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap & copy){
	_name = copy._name;
	_HitPoints = copy._HitPoints;
	_EnergyPoints = copy._EnergyPoints;
	_Attack = copy._Attack;
	std::cout << "Copy assignment FragTrap " << _name << " called " <<
			  std::endl;
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor FragTrap " << _name << " called " << std::endl;
}

void FragTrap::attack(const std::string& target)
{
	if(_EnergyPoints == 0)
	{
		std::cout << _name << "FragTrap already unconscious, no EnergyPoints "
				  << std::endl;
		return;
	}
	if(_HitPoints <= 0)
	{
		std::cout << _name << "FragTrap have no power to attack, no HitPoints "
				  << std::endl;
		return;
	}
	else
	{
		_EnergyPoints--;
		std::cout << "FragTrap " << _name << " attack " << target
				  << " , causing " << _Attack << " points of damage!" <<
				  std::endl;
	}
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << _name << " displays a positive high fives "
			  << std::endl;
}

std::ostream& operator<<(std::ostream &o, FragTrap const &rhs)
{
	o << "FragTrap " << rhs.getName() << " has " <<
	  rhs.getHitPoints() << " hit points and " <<
	  rhs.getEnergyPoints() << " energy points and may attack with " <<
	  rhs.getAttack() << " damage!";
	return o;
}
