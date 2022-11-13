
#include "Harl.h"

int	main(void)
{
	Harl man;

	man.complain("DEBUG");
	man.complain("INFO");
	man.complain("WARNING");
	man.complain("ERROR");

	man.complain("NOT HAPPY");
	return 0;
}
