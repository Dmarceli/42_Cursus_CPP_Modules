#include "../incs/Zombie.hpp"

int main(){
    
    int     zombieNumber = 10;
    Zombie	*horde = zombieHorde(zombieNumber, "Horder");
    
    delete[] horde;
    return 0;
}