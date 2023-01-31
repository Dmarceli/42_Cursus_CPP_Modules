#include "../incs/ClapTrap.hpp"

int main()
{
	std::cout << "\e[1;35m---------------Constructing---------------\033[0m" << std::endl;
	ClapTrap a("estupido");
	ClapTrap b("ppnc");
	ClapTrap c;
	std::cout << "\e[1;35m---------------Testing---------------\033[0m" << std::endl;
	a.setAttackPoints(2);
	a.attack("some dude");
	a.takeDamage(6);
	a.beRepaired(5);
	a.attack(b.getName());
	a.attack(b.getName());
	a.attack(b.getName());
	b.takeDamage(a.getAttackPoints());
	b.takeDamage(a.getAttackPoints());
	b.takeDamage(a.getAttackPoints());
	b.beRepaired(3);
	b.beRepaired(3);
	std::cout << "\e[1;35m---------------Deconstructing\033[0m---------------" << std::endl;
	return (0);
}
