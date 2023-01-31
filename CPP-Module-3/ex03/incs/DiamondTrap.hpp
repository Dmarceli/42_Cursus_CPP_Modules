#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include <string>
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap , public FragTrap
{

	public:

		DiamondTrap();
		DiamondTrap( DiamondTrap const & src );
		~DiamondTrap();
		DiamondTrap &operator=( DiamondTrap const & rhs );
		virtual void getName();
		void attack(const str &target);
		void whoAmI();
	private :
		str _name;
};


#endif 