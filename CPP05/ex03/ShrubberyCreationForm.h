
#ifndef SHRUBBERYCREATIONFORM_H
#define SHRUBBERYCREATIONFORM_H

#include "Form.h"
#include <fstream>

class ShrubberyCreationForm : public Form {

public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm const & copy);
	~ShrubberyCreationForm();
	ShrubberyCreationForm& operator=(ShrubberyCreationForm const & copy);

	void	execute(Bureaucrat const & executor) const;

private:
	std::string _target;
};

#endif
