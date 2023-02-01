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
		DiamondTrap(DiamondTrap const &src);
		DiamondTrap(str name);
		~DiamondTrap();
		DiamondTrap &operator=(DiamondTrap const &src);
		void attack(const str &target);
		void whoAmI();
		void displayinfo();
	private :
		str _name;
};


#endif 