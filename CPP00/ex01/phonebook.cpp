//
// Created by Aleksey Tvorogov on 22/10/2022.
//

#include "ContactClass.h"

int main(void)
{
	std:: string command;
	PhoneBook Book;

	while(command != "EXIT")
	{
		std::cout << "input: ADD || SEARCH || EXIT:" << std::endl; // this is
		// printed every time, event when index in SEARCH requested.
		getline(std::cin, command);
		if (command == "ADD")
		{
			if (Book.AddContact()) // to create
				continue; // do we need continue ?????
		}
		else if (command == "SEARCH")
		{
			std::cout << "All contacts:" << std::endl;
			Book.SearchContact(); // to create
		}
//		else if (command == "EXIT")
//		{
//			std::cout << "Thanks for using our PhoneBook" << std::endl;
//			break;
//		}
		else
			std::cout << "Wrong input, only below are accepted" << std::endl;
	}
	std::cout << "Thanks for using our PhoneBook, bye for now" << std::endl;
	return(0);
}
