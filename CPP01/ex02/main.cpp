#include <iostream>

int	main(void){
	std::string	brain = "HI THIS IS BRAIN";

	std::string*	stringPTR;
	stringPTR = &brain;
	// reference always need to point on something, we need to initialize it
	// immediately
	std::string&	stringREF = brain;

	std::cout << "The memory address of the string variable : " << &brain <<
	std::endl;
	std::cout << "The memory address held by stringPTR : " << stringPTR <<
	std::endl;
	std::cout << "The memory address held by stringREF : " << &stringREF <<
																	std::endl;

	std::cout << "The value of the string variable : " << brain << std::endl;
	std::cout << "The value pointed to by stringPTR : " << *stringPTR <<
	std::endl;
	std::cout << "The value pointed to by stringREF : " << stringREF <<
	std::endl;
	stringREF = "no brain";
	std::cout << "The value of the string variable : " << brain << std::endl;
	return(0);
}
