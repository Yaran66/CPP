
#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>
#include "Form.h"

class Form;

class Bureaucrat {

public:
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat & copy);
	~Bureaucrat();
	Bureaucrat & operator=(const Bureaucrat & copy);

	std::string getName() const;
	int getGrade() const;
	void incGrade();
	void decGrade();
	void signForm(Form & target);

class GradeTooHighException : public std::exception {
	virtual const char* what() const throw();
};
class GradeTooLowException : public std::exception {
	virtual const char* what() const throw();
};

private:
	std::string _name;
	int _grade;
};

std::ostream& operator<<(std::ostream &out, const Bureaucrat &src);

#endif
