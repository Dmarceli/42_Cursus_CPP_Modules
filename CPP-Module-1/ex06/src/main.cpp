#include "../incs/Harl.hpp"

int main(int ac, char **av)
{
	Harl dude;
	if (ac == 1)
		dude.complain("");
	else
		dude.complain(av[1]);
}
