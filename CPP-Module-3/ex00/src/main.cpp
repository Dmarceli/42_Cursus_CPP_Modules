#include "../incs/ClapTrap.hpp"

int main()
{
	ClapTrap a("estupido");
	ClapTrap b("ppnc");
	ClapTrap c;
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
	return (0);
}
