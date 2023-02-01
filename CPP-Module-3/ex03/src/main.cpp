
#include "DiamondTrap.hpp"

int main()
{
	std::cout << "\e[1;35m---------------Constructing---------------\033[0m" << std::endl;
	DiamondTrap a;
	std::cout << "\e[1;35m---------------Testing---------------\033[0m" << std::endl;
	a.whoAmI();
	std::cout << "\e[1;35m---------------Deconstructing\033[0m---------------" << std::endl;
	return (0);
}
