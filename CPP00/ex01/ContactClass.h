//
// Created by Aleksey Tvorogov on 22/10/2022.
//

#ifndef CONTACTCLASS_H
#define CONTACTCLASS_H

#include <iostream>
#include <string>
#include <iomanip>   //ignore
#include "limits"


class Contact
{
public:
	Contact(void);
	~Contact(void);
	/* Getters & Setters */
	void		setFirstName(std::string str);
	void		setLastName(std::string str);
	void		setNickName(std::string str);
	void		setPhoneNumber(std:: string str);
	void		setDarkestSecret(std::string str);

	std::string	getFirstName(void) const;
	std::string	getLastName(void) const;
	std::string	getNickName(void) const;
	std::string	getPhoneNumber(void) const;
	std::string getDarkestSecret(void) const;

private:
	std::string		_firstname;
	std::string		_lastname;
	std::string		_nickname;
	std::string		_phone;
	std::string		_secret;

};

#endif //CONTACTCLASS_H
