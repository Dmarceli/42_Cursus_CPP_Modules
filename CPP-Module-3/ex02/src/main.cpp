
#include "FragTrap.hpp"

int main()
{

	{
		std::cout << "\e[1;35m---------------ScavTrap Test---------------\033[0m" << std::endl;
		std::cout << "\e[1;35m---------------Constructing---------------\033[0m" << std::endl;
		ScavTrap c("daniginga");
		ScavTrap d("SIUUU");
		std::cout << "\e[1;35m---------------Testing---------------\033[0m" << std::endl;
		c.attack(d.getName());
		d.takeDamage(c.getAttackPoints());
		d.guardGate();
		d.beRepaired(50);
		c.guardGate();
		d.attack(c.getName());
		c.takeDamage(d.getAttackPoints());
		d.attack(c.getName());
		c.takeDamage(d.getAttackPoints());
		d.attack(c.getName());
		c.takeDamage(d.getAttackPoints());
		c.beRepaired(10);
		std::cout << "\e[1;35m---------------Deconstructing\033[0m---------------" << std::endl;
	}
	{
		std::cout << "\e[1;35m---------------FragTrap Test---------------\033[0m" << std::endl;
		std::cout << "\e[1;35m---------------Constructing---------------\033[0m" << std::endl;
		FragTrap a("sapinho");
		FragTrap b("ppnc");
		std::cout << "\e[1;35m---------------Testing---------------\033[0m" << std::endl;
		a.highFiveGuys();
		a.attack(b.getName());
		b.takeDamage(b.getAttackPoints());
		b.beRepaired(b.getAttackPoints());
		b.attack(a.getName());
		a.takeDamage(b.getAttackPoints());
		b.attack(a.getName());
		a.takeDamage(b.getAttackPoints());
		b.attack(a.getName());
		a.takeDamage(b.getAttackPoints());
		b.attack(a.getName());
		a.takeDamage(b.getAttackPoints());
		b.attack(a.getName());
		a.takeDamage(b.getAttackPoints());
		std::cout << "\e[1;35m---------------Deconstructing\033[0m---------------" << std::endl;
	}
}
