
#include "ClapTrap.h"
#include "ScavTrap.h"
#include <iostream>

int main() {
	ScavTrap a("RoboScav");
	ScavTrap b("2RoboScav2");

	ScavTrap c(b);
	ScavTrap j = a;

//	std::cout << "Test 1: See what's happen after object creation" << std::endl;
//	std::cout << a << std::endl;
//	std::cout << b << std::endl;
//	std::cout << c << std::endl;
//	std::cout << j << std::endl;

//	std::cout << "Test 2: start battle" << std::endl;
//	a.attack(b.getName());
//	b.takeDamage(a.getAttack());
//	std::cout << b << std::endl;
//	b.beRepaired(10);
//	b.attack(a.getName());
//	a.takeDamage(b.getAttack());
//	a.beRepaired(20);
//	std::cout << a << std::endl;
//	std::cout << b << std::endl;
//	a.attack(b.getName());
//	b.takeDamage(a.getAttack());
//	a.attack(b.getName());
//	b.takeDamage(a.getAttack());
//	a.attack(b.getName());
//	b.takeDamage(a.getAttack());
//	a.attack(b.getName());
//	b.takeDamage(a.getAttack());
//	a.attack(b.getName());
//	b.takeDamage(a.getAttack());
//	std::cout << a << std::endl;
//	std::cout << b << std::endl;


	std::cout << "Test 3: No more energy points" << std::endl;
	for (int i = 0; i < 51; ++i) {
		std::cout << c << std::endl;
		c.attack(j.getName());
		j.takeDamage(a.getAttack());
		j.beRepaired(20);
	}

	std::cout << "Test 4: Guard keeper" << std::endl;
	c.guardGate();
	j.guardGate();
	return 0;
}
