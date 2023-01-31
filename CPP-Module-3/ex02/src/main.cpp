
#include "FragTrap.hpp"

int main()
{
	std::cout << "\e[1;35m---------------Constructing---------------\033[0m" << std::endl;
	ScavTrap c("daniginga");
	ScavTrap d("SIUUU");
	FragTrap a("sapinho");
	FragTrap b("ppnc");
	std::cout << "\e[1;35m---------------Testing---------------\033[0m" << std::endl;
	c.attack(d.getName());
	d.takeDamage(c.getAttackPoints());
	d.guardGate();
	d.beRepaired(50);
	d.beRepaired(30);
	d.beRepaired(30);
	d.attack(c.getName());
	c.takeDamage(d.getAttackPoints());
	c.takeDamage(d.getAttackPoints());
	c.takeDamage(d.getAttackPoints());
	c.beRepaired(10);
	a.highFiveGuys();
	a.attack(d.getName());
	d.takeDamage(a.getAttackPoints());
	std::cout << "\e[1;35m---------------Deconstructing\033[0m---------------" << std::endl;
	return (0);
}
