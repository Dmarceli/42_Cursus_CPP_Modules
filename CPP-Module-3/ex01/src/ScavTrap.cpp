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


ScavTrap &ScavTrap::operator=( ScavTrap const &src)
{
	ClapTrap::operator=(src);
	std::cout << "ScavTrap: Copy Assignment operator called" << std::endl;
	return(*this);
}


void ScavTrap::guardGate()
{
	std::cout << "ScavTrap: " << this->_name<<" is now in Gate keeper mode" << std::endl;
}

void	ScavTrap::attack(const str &target)
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		std::cout << "ScavTrap: " << this->_name << " attacks " 
					<< target << ", causing " << this->_attackPoints << " points of damage!" << std::endl;
		this->_energyPoints--;
	}
	else if (this->_energyPoints == 0)
		std::cout << "ScavTrap: " << this->_name << " can't attack " 
					<< target << ", because he has no energy." << std::endl;
	else if (this->_hitPoints <= 0)
		std::cout << "ScavTrap: " << this->_name << " can't attack " 
					<< target << ", because he is dead." << std::endl;	
}