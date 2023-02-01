#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(str name);
		ScavTrap(ScavTrap const &src);
		ScavTrap &operator=(ScavTrap const &src);
		void guardGate();
		void attack(const str &target);
		~ScavTrap();
};


#endif 