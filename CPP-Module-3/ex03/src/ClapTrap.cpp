#include "../incs/ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->_name = "Default";
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackPoints = 0;
	this->_maxHealth = 10;
	std::cout << "ClapTrap: Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(str name) 
{
	this->_name = name;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackPoints = 0;
	this->_maxHealth = 10;
	std::cout << "ClapTrap: constructor for the name " << _name << " called" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap & src )
{
	this->_name = src._name;
	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._energyPoints;
	this->_attackPoints = src._attackPoints;
	this->_maxHealth = src._maxHealth;
	std::cout << "ClapTrap:" << this->_name << " copy constructor called" << std::endl; 
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap: Deconstructor for " << _name << " called" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &src)
{
	this->_name = src._name;
	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._energyPoints;
	this->_attackPoints = src._attackPoints;
	std::cout << "ClapTrap: Assignation operator called" << std::endl;
	return (*this);
}


void			ClapTrap::setName( std::string name ) { this->_name = name; }

void			ClapTrap::setHitPoints( unsigned int hitpts ) { this->_hitPoints = hitpts; }

void			ClapTrap::setEnergyPoints( unsigned int energy ) { this->_energyPoints = energy; }

void			ClapTrap::setAttackPoints( unsigned int attack ) { this->_attackPoints = attack; }

void 			ClapTrap::setmaxHitPoints(unsigned int health){this->_maxHealth = health;}

str 			ClapTrap::getName(){return(_name);}

unsigned int	ClapTrap::getHitPoints() const { return (this->_hitPoints);}

unsigned int	ClapTrap::getEnergyPoints() const {return (this->_energyPoints);}

unsigned int	ClapTrap::getAttackPoints() const {return (this->_attackPoints);}

void	ClapTrap::attack(const str &target)
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		std::cout << "ClapTrap: " << this->_name << " attacks " 
					<< target << ", causing " << this->_attackPoints << " points of damage!" << std::endl;
		this->_energyPoints--;
	}
	else if (this->_energyPoints == 0)
		std::cout << "ClapTrap: " << this->_name << " can't attack " 
					<< target << ", because he has no energy." << std::endl;
	else if (this->_hitPoints <= 0)
		std::cout << "ClapTrap: " << this->_name << " can't attack " 
					<< target << ", because he is dead." << std::endl;	
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints <= 0)
		std::cout << "ClapTrap: " << this->_name << " is already dead! " << std::endl;	
	else if ((unsigned)this->_hitPoints >= amount)
	{
		this->_hitPoints -= amount;
		std::cout << "ClapTrap: " << this->_name 
				<< " lost " << amount << " hit points!" << std::endl; 
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if ( this->_hitPoints == 0 )
		std::cout << "ClapTrap: " << this->_name 
					<< " is dead and cannot be brought back to life." << std::endl;
	else if ( this->_energyPoints == 0 )
		std::cout << "ClapTrap: " << this->_name 
				<< " has no energy to repair himself."<< std::endl;
	else if (amount + this->_hitPoints > (unsigned)this->_maxHealth)
		std::cout << "ClapTrap: " << this->_name 
			<< " cannot be repaired to more than " << this->_maxHealth << " points." << std::endl;
	else
	{
		this->_hitPoints += amount;
		this->_energyPoints--;
		std::cout << "ClapTrap: " << this->_name 
				<< " was repaired " << amount << " points." << std::endl;
	}
}