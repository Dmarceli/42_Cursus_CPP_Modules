
#include "ScavTrap.hpp"

int main()
{
	std::cout << "\e[1;35m---------------Constructing---------------\033[0m" << std::endl;
	ScavTrap c("daniginga");
	ScavTrap d("SIUUU");
	std::cout << "\e[1;35m---------------Testing---------------\033[0m" << std::endl;
	c.attack(d.getName());
	d.takeDamage(c.getAttackPoints());
	d.guardGate();
	d.beRepaired(50);
	d.attack(c.getName());
	c.takeDamage(d.getAttackPoints());
	c.takeDamage(d.getAttackPoints());
	c.takeDamage(d.getAttackPoints());
	c.beRepaired(10);
	std::cout << "\e[1;35m---------------Deconstructing\033[0m---------------" << std::endl;
	return (0);
}
