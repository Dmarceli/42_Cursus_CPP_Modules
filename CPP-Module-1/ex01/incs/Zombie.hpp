#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>


typedef std::string	str;

class Zombie {
	private:
		str _name;
	public:
		Zombie();
		~Zombie(void);
		void announce( void );
		void set_name(str ZombieName);
};


Zombie* zombieHorde( int N, std::string name );

#endif