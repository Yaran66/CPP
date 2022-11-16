
#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.h"


class ScavTrap : public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const &);
	~ScavTrap();

	ScavTrap & operator=(const ScavTrap &);
	void attack(const std::string& target);
	void guardGate();
};

std::ostream& operator<<(std::ostream &out, ScavTrap const &rhs);

#endif //SCAVTRAP_H
