#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include "ScavTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap();
		FragTrap(str name);
		FragTrap( FragTrap const & src );
		~FragTrap();
		FragTrap &		operator=( FragTrap const & rhs );
		void highFiveGuys();
};


#endif