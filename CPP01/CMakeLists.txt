cmake_minimum_required(VERSION 3.20)
project(CPP01)

set(CMAKE_CXX_STANDARD 98)

add_executable(CPP01 main.cpp ex00/main.cpp ex00/Zombie.cpp ex00/Zombie.h ex00/newZombie.cpp ex00/randomChump.cpp ex01/main.cpp ex01/Zombie.cpp ex01/Zombie.h ex01/zombieHorde.cpp ex02/main.cpp ex03/main.cpp ex03/Weapon.cpp ex03/Weapon.h ex03/HumanA.cpp ex03/HumanA.h ex03/HumanB.cpp ex03/HumanB.h ex04/main.cpp ex05/main.cpp ex05/Harl.cpp ex05/Harl.h)
