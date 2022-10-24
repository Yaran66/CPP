//
// Created by Aleksey Tvorogov on 22/10/2022.
//

#include "PhoneBookClass.h"

PhoneBook:: PhoneBook() {}
PhoneBook::~PhoneBook() {}

static int ft_empty()
{
	std::cout << "No input value" << std::endl;
	return(1);
}

int PhoneBook::Add()
{
	static int index = -1;
	std::string command;

	index = index < 7 ? index + 1 : 0;

	std::cout << "FirstName: ";
	std::getline(std::cin, command);
	if (command.empty())
	{
		std::cout << "Contact without First name will be discarded from PhoneBook"
					<< std::endl;
		ft_empty();
		index--;
		return(0);
	}
	_contacts[index].setFirstName(command);

	std::cout << "LastName: ";
	std::getline(std::cin, command);
	if (command.empty())
		ft_empty();
	_contacts[index].setLastName(command);

	std::cout << "NickName: ";
	std::getline(std::cin, command);
	if (command.empty())
		ft_empty();
	_contacts[index].setNickName(command);

	std::cout << "PhoneNumber: ";
	std::getline(std::cin, command);
	if (command.empty())
		ft_empty();
	_contacts[index].setPhoneNumber(command);

	std::cout << "DarkestSecret: ";
	std::getline(std::cin, command);
	if (command.empty())
		ft_empty();
	_contacts[index].setDarkestSecret(command);
	std::cout << "contact added to PhoneBook" << std::endl;
	//std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	return(0);
}

void PhoneBook::Search() const
{
	int index;
	int size = 0;
	int i = 0;

	std::cout << std::endl << "|     index|First Name| Last Name|  "
							  "NickName|" << std::endl;
	while (i < 8)
	{
		std::string FirstName = _contacts[i].getFirstName();
		if (FirstName.empty())
			break;
		std::cout << "|" << std::right << std::setw(10) << i + 1 << "|";
		std::string newFirstName = FirstName.length() > 11 ? FirstName.substr(0, 9) + ".": FirstName;
		std::cout << std::right << std::setw(10) << newFirstName << "|";

		std::string LastName = _contacts[i].getLastName();
		std::string newLastName = LastName.length() > 11 ? LastName.substr(0, 9) + ".": LastName;
		std::cout << std::right << std::setw(10) << newLastName << "|";

		std::string NickName = _contacts[i].getNickName();
		std::string newNickName = NickName.length() > 11 ? NickName.substr(0, 9) + ".": NickName;
		std::cout << std::right << std::setw(10) << newNickName << "|" << std::endl;
		size++;
		i++;
	}
	std::cout << std::endl;
	std::cout << "input index: ";
	if (!(std::cin >> index) || index < 1 || index > size )
	{
		std::cin.clear();
		std::cout << "incorrect index" <<std::endl;
	}
	else
	{
		std::cout << std::endl;
		std::cout <<"index: " << index <<std::endl;
		index--;
		std::cout << "First Name: " << _contacts[index].getFirstName() <<
		std::endl;
		std::cout << "Last Name: " << _contacts[index].getLastName() <<
		std::endl;
		std::cout << "Nick Name: " << _contacts[index].getNickName() <<
		std::endl;
		std::cout << "PhoneNumber: " << _contacts[index].getPhoneNumber() <<
		std::endl;
		std::cout << "DarkestSecret: " << _contacts[index].getDarkestSecret()
		<< std::endl;
		std::cout << std::endl;
	}
	//std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}
