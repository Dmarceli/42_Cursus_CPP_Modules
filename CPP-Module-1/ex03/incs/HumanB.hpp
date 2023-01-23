#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "../incs/Weapon.hpp"

class HumanB
{
    private:
        Weapon  *weapon;
        str     name;
    public:
        HumanB(str name);
        ~HumanB();
        void attack();
        void setWeapon(Weapon &weapon);
};

#endif