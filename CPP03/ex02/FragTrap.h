
#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.h"

class FragTrap : public ClapTrap
{
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap const &);
	~FragTrap();

	FragTrap & operator=(const FragTrap &);
	void attack(const std::string& target);
	void highFivesGuys(void);
};

std::ostream& operator<<(std::ostream &out, FragTrap const &rhs);


#endif //FRAGTRAP_H
