#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
	this->setName("Default");
	this->setEnergyPoints(50);
	this->setHitPoints(100);
	this->setAttackPoints(20);
	this->setmaxHitPoints(100);
	std::cout << "ScavTrap: Default constructor called" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap &src ): ClapTrap(src)
{
	*this = src;
	std::cout << "ClapTrap:" << this->getName() << " copy constructor called" << std::endl;
}

ScavTrap::ScavTrap(str name) : ClapTrap(name)
{
	this->setName(name);
	this->setEnergyPoints(50);
	this->setHitPoints(100);
	this->setAttackPoints(50);
	this->setmaxHitPoints(100);
	std::cout << "ScavTrap: constructor for the name " << this->getName() << " called" << std::endl;
}
ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap: " <<  this->getName() << " Destructor called" << std::endl;
}


ScavTrap &				ScavTrap::operator=( ScavTrap const & rhs )
{
	ClapTrap::operator=(rhs);
	std::cout << "ScavTrap: Copy Assignment operator called" << std::endl;
	return(*this);
}


void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}
