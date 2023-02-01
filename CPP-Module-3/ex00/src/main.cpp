#include "../incs/ClapTrap.hpp"

int main()
{
	std::cout << "\e[1;35m---------------Constructing---------------\033[0m" << std::endl;
	ClapTrap a("estupido");
	ClapTrap b("ze");
	ClapTrap c = a;
	std::cout << "\e[1;35m---------------Testing---------------\033[0m" << std::endl;
	a.attack(b.getName());
	b.takeDamage(a.getAttackPoints());
	b.beRepaired(5);
	a.setAttackPoints(5);
	a.attack(b.getName());
	b.takeDamage(a.getAttackPoints());
	b.beRepaired(a.getAttackPoints());
	std::cout << "\e[1;35m---------------Deconstructing\033[0m---------------" << std::endl;
	return (0);
}
