#include "DiamondTrap.hpp"

int main()
{
	std::cout << "\e[1;35m---------------Constructing---------------\033[0m" << std::endl;
	DiamondTrap a("sapinho");
	DiamondTrap b("ppnc");
	std::cout << "\e[1;35m---------------Testing---------------\033[0m" << std::endl;
	std::cout << a.getEnergyPoints() << std::endl; 
	a.highFiveGuys();
	a.guardGate();
	b.highFiveGuys();
	b.guardGate();
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
	return (0);
}