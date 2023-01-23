#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

typedef std::string	str;

class Zombie {
	public:
		Zombie(str ZombieName);
		~Zombie(void);
		void announce( void );
	private:
		str _name;
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif