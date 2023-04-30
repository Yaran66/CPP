
#ifndef INTERN_H
#define INTERN_H

#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.h"
#include "PresidentialPardonForm.h"

class Intern {

public:
	Intern();
	Intern(const Intern & copy);
	~Intern();
	Intern & operator=(const Intern & copy);

	Form * makeForm(std::string nameForm, std::string targetForm);
	class UnknownFormException : public std::exception {
		virtual const char* what() const throw();
	};
};

#endif
