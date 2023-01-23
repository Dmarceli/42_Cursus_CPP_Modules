#include "../incs/Zombie.hpp"

int main (void)
{
	Zombie *new_zombie = newZombie("dani");
	randomChump("ginca");
	delete new_zombie;
}