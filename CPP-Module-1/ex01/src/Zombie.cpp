#include "../incs/Zombie.hpp"

Zombie::Zombie() {}

Zombie::~Zombie(){std::cout << this->_name << ": I'm dead :(" << std::endl;}

void Zombie::announce(void){
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::set_name(str Name)
{
	this->_name = Name;
}