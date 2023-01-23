#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
#include <vector>

typedef std::string	str;

class Zombie {
	public:
		//Zombie(str ZombieName);
		Zombie();
		~Zombie(void);
		void announce( void );
		void set_name(str ZombieName);
	private:
		str _name;
};


Zombie*	newZombie( std::string name );
Zombie* zombieHorde( int N, std::string name );

#endif