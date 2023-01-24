#include "../incs/Weapon.hpp"

Weapon::Weapon(){}

Weapon::Weapon(str Name){setType(Name);}

Weapon::~Weapon(){}

str const &Weapon::getType(void){return(_type);}

void Weapon::setType(str tipo){ _type = tipo;}