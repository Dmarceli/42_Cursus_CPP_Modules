#include "../incs/Harl.hpp"

int main(void)
{
	Harl dude;

	dude.complain("debug");
	std::cout << std::endl;
	dude.complain("info");
	std::cout << std::endl;
	dude.complain("warning");
	std::cout << std::endl;
	dude.complain("error");
	std::cout << std::endl;
}
