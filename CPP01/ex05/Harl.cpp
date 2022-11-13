
#include "Harl.h"

Harl::Harl(void)
{
	return ;
}

Harl::~Harl(void)
{
	return ;
}

void Harl::_debug(void)
{
	std::cout << "[DEBUG] : I love having extra bacon for my "
				 "7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << std::endl;
}

void Harl::_info(void)
{
	std::cout << "[INFO] : I cannot believe adding extra bacon costs more money."
				 "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::_warning(void)
{
	std::cout << "[WARNING] : I think I deserve to have some extra bacon for "
				 "free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::_error(void)
{
	std::cout << "[ERROR] : This is unacceptable! I want to speak to the "
				 "manager now." << std::endl;
}

void Harl::complain( std::string level )
{
	std::string arr[4] = {
			"DEBUG",
			"INFO",
			"WARNING",
			"ERROR"
	};
	void (Harl::*memb_func_ptr[4])(void) = {
			&Harl::_debug,
			&Harl::_info ,
			&Harl::_warning,
			&Harl::_error
	};

	for (int i = 0; i < 4; i++)
	{
		if (level == arr[i])
		{
			(this->*memb_func_ptr[i])();
			return ;
		}
	}
	std::cout << std::endl << "Wrong input" << std::endl;
}