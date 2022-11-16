//
// Created by Aleksey Tvorogov on 08/11/2022.
//

#include "ScavTrap.h"

ScavTrap::ScavTrap()
{
	_name = "noname";
	_HitPoints = 100;
	_EnergyPoints = 50;
	_Attack = 20;
	std::cout << "Constructor ScavTrap" << _name << " called" << std::endl;
}

ScavTrap::ScavTrap(std::string name):ClapTrap(name)
{
//	_name = name;
	_HitPoints = 100;
	_EnergyPoints = 50;
	_Attack = 20;
	std::cout << "Parametr constructor ScavTrap" << _name << " called" <<
	std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & copy):ClapTrap(copy)
{
//	_name = copy._name;
//	_HitPoints = copy._HitPoints;
//	_EnergyPoints = copy._EnergyPoints;
//	_Attack = copy._Attack;
	std::cout << "Copy constructor ScavTrap " << _name << " called " <<
			  std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap & copy){
	_name = copy._name;
	_HitPoints = copy._HitPoints;
	_EnergyPoints = copy._EnergyPoints;
	_Attack = copy._Attack;
	std::cout << "Copy assignment ScavTrap " << _name << " called " <<
			  std::endl;
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor ScavTrap " << _name << " called " << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if(_EnergyPoints == 0)
	{
		std::cout << _name << "ScavTrap already unconscious, no EnergyPoints "
				  << std::endl;
		return;
	}
	if(_HitPoints <= 0)
	{
		std::cout << _name << "ScavTrap have no power to attack, no HitPoints "
				  << std::endl;
		return;
	}
	else
	{
		_EnergyPoints--;
		std::cout << "ScavTrap " << _name << " attack " << target
				  << " , causing " << _Attack << " points of damage!" <<
				  std::endl;
	}
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name << " is now in Gate keeper mode!!!"
							<< std::endl;
}

std::ostream& operator<<(std::ostream &o, ScavTrap const &rhs)
{
	o << "ScavTrap " << rhs.getName() << " has " <<
	rhs.getHitPoints() << " hit points and " <<
	rhs.getEnergyPoints() << " energy points and may attack with " <<
	rhs.getAttack() << " damage!";
	return o;
}
