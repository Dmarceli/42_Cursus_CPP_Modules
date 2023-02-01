#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	this->_name = "default";
	ClapTrap::_name = "default_clap_name";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackPoints = FragTrap::_attackPoints;
	this->_maxHealth = FragTrap::_maxHealth;
	std::cout << "DiamondTrap: Default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(str name)
{
	ClapTrap::_name = (name + "_clap_name");
	this->_name = name;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackPoints = FragTrap::_attackPoints;
	this->_maxHealth = FragTrap::_maxHealth;
	std::cout << "DiamondTrap: constructor for the name " << this->_name << " called" << std::endl;
}


DiamondTrap::DiamondTrap(const DiamondTrap &src) : ClapTrap(src), ScavTrap(src), FragTrap(src)
{
	*this = src;
	std::cout << "DiamondTrap Copy Constructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=( DiamondTrap const & src )
{
	this->_name = src._name;
	return *this;
}
void	DiamondTrap::attack(const str &target){
	ScavTrap::attack(target);
}

void  DiamondTrap::whoAmI(void)
{
	std::cout << "My name in DiamondTrap is "<< this->_name 
				<< " and my name in clap trap is " << ClapTrap::_name << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap: " <<  this->_name << " Destructor called" << std::endl;
}

void DiamondTrap::displayinfo()
{
	std::cout <<"Name- " << this->_name << std::endl;
	std::cout <<"ClapTrap Name- " << ClapTrap::_name << std::endl;
	std::cout <<"hitpoints- " << this->_hitPoints << std::endl;
	std::cout <<"energy- " << this->_energyPoints << std::endl;
	std::cout <<"Attack- " << this->_attackPoints << std::endl;
}