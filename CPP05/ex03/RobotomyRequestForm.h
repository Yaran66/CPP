
#ifndef ROBOTOMYREQUESTFORM_H
#define ROBOTOMYREQUESTFORM_H

#include "Form.h"
#include <cstdlib>

class RobotomyRequestForm : public Form {

public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm const & copy);
	~RobotomyRequestForm();
	RobotomyRequestForm &operator=(RobotomyRequestForm const & copy);

	void	execute(Bureaucrat const & executor) const;

private:
	std::string _target;
};

#endif
