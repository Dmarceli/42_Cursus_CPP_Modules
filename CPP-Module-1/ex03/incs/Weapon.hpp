#ifndef WEAPON_HPP
# define WEAPON_HPP

#include<iostream>

typedef std::string	str;


class Weapon
{
    private:
        str type;

    public:
        Weapon();
        //Weapon(Weapon &arma);
        Weapon(str type);
        ~Weapon(void);
        str getType(void);
        void setType(str type);
};

#endif