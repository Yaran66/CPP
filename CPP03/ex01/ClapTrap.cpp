
#include "ClapTrap.h"


ClapTrap::ClapTrap():_name("unnamed"),_HitPoints(10),_EnergyPoints(10),
					 _Attack(0)
{
	std::cout << "Constructor ClapTrap" << _name << " called" << std::endl;
}

ClapTrap::ClapTrap(std::string name):_name(name),_HitPoints(10),
									 _EnergyPoints(10),_Attack(0)
{
	std::cout << "Parametr constructor ClapTrap" << _name << " called" <<
	std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & copy)
{
	_name = copy._name;
	_HitPoints = copy._HitPoints;
	_EnergyPoints = copy._EnergyPoints;
	_Attack = copy._Attack;
	std::cout << "Copy constructor ClapTrap " << _name << " called " <<
			  std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap & copy){
	_name = copy._name;
	_HitPoints = copy._HitPoints;
	_EnergyPoints = copy._EnergyPoints;
	_Attack = copy._Attack;
	std::cout << "Copy assignment ClapTrap " << _name << " called " <<
			  std::endl;
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor ClapTrap " << _name << " called " << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if(_EnergyPoints == 0)
	{
		std::cout << _name << " already unconscious, no EnergyPoints "
				  << std::endl;
		return;
	}
	if(_HitPoints <= 0)
	{
		std::cout << _name << " have no power to attack, no HitPoints "
				  << std::endl;
		return;
	}
	else
	{
		_EnergyPoints--;
		std::cout << "ClapTrap " << _name << " attack " << target
				  << " , causing " << _Attack << " points of damage!" <<
				  std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if(_HitPoints <= 0 || amount > _HitPoints)
	{
		_HitPoints = 0;
		std::cout << _name << " already too weak, no HitPoints"
				  << std::endl;
		return;
	}
	else
	{
		_HitPoints -= amount;
		std::cout << "ClapTrap " << _name << " get " << amount
				  << " of damage, and has " << _HitPoints
				  << " Hitpoint left" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if(_EnergyPoints <= 0)
	{
		std::cout << _name << " can't heal,no EnergyPoints" << std::endl;
		return;
	}
	else
	{
		--_EnergyPoints;
		_HitPoints+=amount;
		std::cout << "ClapTrap " << _name << " get " << amount
				  << " of health (repair), and has " << _HitPoints << " left"
				  << std::endl;
	}
}

const std::string& ClapTrap::getName() const {
	return _name;
}

const unsigned int& ClapTrap::getHitPoints() const {
	return _HitPoints;
}

const unsigned int& ClapTrap::getEnergyPoints() const {
	return _EnergyPoints;
}

const unsigned int& ClapTrap::getAttack() const {
	return _Attack;
}

void ClapTrap::setAttack(unsigned int amount)
{
	_Attack = amount;
}

std::ostream& operator<<(std::ostream &out, ClapTrap const &rhs) {
	out << "ClapTrap " << rhs.getName() << " has " <<
		rhs.getHitPoints() << " hit points and " <<
		rhs.getEnergyPoints() << " energy points and gives " <<
		rhs.getAttack() << " attack damage!";
	return out;
}
