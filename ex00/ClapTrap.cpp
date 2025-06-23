#include "ClapTrap.hpp"

std::ostream& operator<<(std::ostream& os, const ClapTrap&object)
{
	os << "Name :" << object.getName() << std::endl;
	os << "Attack Dammage :" << object.getAttackDammage() << std::endl;
	os << "Energy points :" << object.getEnergyPoints() << std::endl;
	os << "Hits points :" << object.getHitPoints() << std::endl;
	return os;
}

ClapTrap::ClapTrap() :hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "CLAPTRAP Constructor called\n";
}


ClapTrap::ClapTrap(std::string name) 
	: name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "CLAPTRAP Constructor params called\n";
};

ClapTrap::ClapTrap(const ClapTrap &object)
{
	std::cout << "CLAPTRAP Copy constructor called\n";
	*this = object;
};

ClapTrap &ClapTrap::operator=(const ClapTrap &object)
{
	this->name = object.name;
	this->attackDamage = object.attackDamage;
	this->hitPoints = object.hitPoints;
	this->energyPoints = object.energyPoints;
	return (*this);
};

ClapTrap::~ClapTrap()
{
	std::cout << "CLAPTRAP Destructor called\n";
};

const std::string &ClapTrap::getName() const
{
	return this->name;
}

int	ClapTrap::getAttackDammage() const
{
	return this->attackDamage;
}

int	ClapTrap::getHitPoints() const
{
	return this->hitPoints;
}

int	ClapTrap::getEnergyPoints() const
{
	return this->energyPoints;
}

bool ClapTrap::haveEnergy() const
{
	return this->energyPoints > 0;
}

bool	ClapTrap::isDead() const
{
	return this->hitPoints <= 0;
}

bool ClapTrap::checkIsDead() const
{
	if (this->isDead())
	{
		std::cout << "ClapTrap "
			<< this->name
			<< " is dead !"
			<< std::endl;
		return true;
	}
	return false;
}

bool ClapTrap::checkHaveEnergy() const
{
	if (!this->haveEnergy())
	{
		std::cout << "ClapTrap "
			<< this->name
			<< " don't have energy!"
			<< std::endl;
		return false;
	}
	return true;
}

		
void ClapTrap::attack(const std::string& target)
{
	if (this->checkIsDead() || !this->checkHaveEnergy())
		return;
	std::cout << "ClapTrap "
		<< this->name
		<< " attacks "
		<< target
		<< " causing, "
		<< this->attackDamage
		<< " points of damage !"
		<< std::endl;
	this->energyPoints--;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->checkIsDead() || !this->checkHaveEnergy())
		return;
	std::cout << "ClapTrap "
		<< this->name
		<< " repaired itself for "
		<< amount
		<< " points !"
		<< std::endl;
	this->hitPoints+= amount;
	this->energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->checkIsDead())
		return;
	std::cout << "ClapTrap "
		<< this->name
		<< " take "
		<< amount
		<< " points of damage !"
		<< std::endl;
	this->hitPoints -= amount;
	this->checkIsDead();
}
