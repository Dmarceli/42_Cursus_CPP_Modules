#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

typedef std::string	str;

class ClapTrap
{

	public:

		ClapTrap();
		ClapTrap(str name);
		ClapTrap(ClapTrap const &src);
		~ClapTrap();
		ClapTrap &operator=(ClapTrap const &src);
		str	getName();
		void setName(str name);
		void setHitPoints(unsigned int hitpts);
		void setEnergyPoints(unsigned int energypts);
		void setAttackPoints(unsigned int attackpts);
		unsigned int getHitPoints(void) const;
		unsigned int getEnergyPoints(void) const;
		unsigned int getAttackPoints(void) const;
		void attack(const str &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
	private:
		str _name;
		int _hitPoints;
		int _energyPoints;
		int _attackPoints;

};


#endif