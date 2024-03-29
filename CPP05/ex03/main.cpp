
#include "Bureaucrat.h"
#include "Intern.h"
#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.h"
#include "PresidentialPardonForm.h"

int main()
{
	std::cout << " --------------- TEST 1 ---------------" << std::endl;
	{
		Intern		intern;
		Bureaucrat	signer("Signer", 10);
		Bureaucrat	executor("Executor", 5);
		Form*		anyForm = NULL;

		try {
		anyForm = intern.makeForm("ShrubberyCreation", executor.getName());
		signer.signForm(*anyForm);
		executor.executeForm(*anyForm);
		}
		catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
		}
		if (anyForm)
			delete anyForm;
	}
	std::cout << " --------------- TEST 2 ---------------" << std::endl;
	{
		Intern		intern;
		Bureaucrat	signer("Signer", 10);
		Bureaucrat	executor("Executor", 5);
		Form*		anyForm = NULL;

		try {
			anyForm = intern.makeForm("WrongForm", executor.getName());
			signer.signForm(*anyForm);
			executor.executeForm(*anyForm);
		}
		catch (std::exception & e) {
			std::cerr << e.what() << std::endl;
		}
		if (anyForm)
			delete anyForm;
	}

	return 0;
}