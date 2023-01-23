#include "../incs/HumanB.hpp"

HumanB::HumanB (str humanName)
{
    name = humanName;
}

HumanB::~HumanB(){}

void HumanB::attack()
{
    if (weapon->getType().empty())
        return ;
    std::cout << name << " attacks with their " << weapon->getType() << " " << std::endl;
}

void HumanB::setWeapon(Weapon &arma)
{
    weapon = &arma; 
}