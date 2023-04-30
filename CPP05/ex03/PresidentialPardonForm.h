

#ifndef PRESIDENTIALPARDONFORM_H
#define PRESIDENTIALPARDONFORM_H

#include "Form.h"

class PresidentialPardonForm : public Form {

public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(PresidentialPardonForm const & copy);
	~PresidentialPardonForm();
	PresidentialPardonForm &operator=(PresidentialPardonForm const & copy);

	void	execute(Bureaucrat const & executor) const;

private:
	std::string _target;
};

#endif
