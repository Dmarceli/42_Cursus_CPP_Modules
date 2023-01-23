#include "../incs/Zombie.hpp"


Zombie::Zombie(str name)
{
	this->_name = name;
	Zombie::announce();
}

Zombie::~Zombie(){ std::cout << this->_name << ": I'm dead :(" << std::endl;}

void Zombie::announce(void){
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

