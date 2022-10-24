//
// Created by Aleksey Tvorogov on 22/10/2022.
//

#include "ContactClass.h"
#include "PhoneBookClass.h"

int main(void)
{
	std:: string input;
	PhoneBook Ph_Book;

	std::cout << "commands: ADD || SEARCH || EXIT:" << std::endl;
	while(input != "EXIT")
	{
		getline(std::cin, input);
		if (input == "ADD")
			Ph_Book.Add();
		else if (input == "SEARCH")
		{
			std::cout << "All contacts:" << std::endl;
			Ph_Book.Search();
		}
		else if (input == "EXIT")
			std::cout << "Thanks for using our PhoneBook, bye for now" << std::endl;
		else
		{
			std::cout << "Wrong command, only below are accepted" << std::endl;
			std::cout << " ADD || SEARCH || EXIT " << std::endl;
		}
	}
	return(0);
}
