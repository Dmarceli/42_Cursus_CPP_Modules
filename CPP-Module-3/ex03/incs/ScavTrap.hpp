#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(str name);
		ScavTrap( ScavTrap const & src );
		ScavTrap &operator=( ScavTrap const & rhs );
		void guardGate();
		void attack(const str &target);
		~ScavTrap();
};


#endif 