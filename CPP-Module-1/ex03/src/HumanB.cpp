#include "../incs/HumanB.hpp"

HumanB::HumanB (str humanName) {_name = humanName;}

HumanB::~HumanB(){}

void HumanB::attack(){
    std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &arma){_weapon = &arma;}