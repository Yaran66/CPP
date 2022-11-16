//
// Created by Aleksey Tvorogov on 08/11/2022.
//
#include "ClapTrap.h"
#include <iostream>

int main() {
	ClapTrap a("Robo");
	ClapTrap b("Robo2");
	ClapTrap c(b);
	ClapTrap j = a;

	std::cout << "Test 1: See what's happen after object creation" << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	std::cout << j << std::endl;

//	std::cout << "Test 2: start battle" << std::endl;
//	a.setAttack(7);
//	a.attack(b.getName());
//	b.takeDamage(a.getAttack());
//	std::cout << b << std::endl;
//	b.beRepaired(2);
//	b.attack(a.getName());
//	b.setAttack(5);
//	a.takeDamage(b.getAttack());
//	a.beRepaired(2);
//	std::cout << a << std::endl;
//	std::cout << b << std::endl;
//	a.attack(b.getName());
//	b.takeDamage(a.getAttack());
//	std::cout << a << std::endl;
//	std::cout << b << std::endl;

	std::cout << "Test 3: No more energy points" << std::endl;
	for (int i = 0; i < 11; ++i) {
		std::cout << c << std::endl;
		c.attack(j.getName());
	}
	return 0;
}
