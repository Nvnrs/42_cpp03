#ifndef CLAPTRAP
#define CLAPTRAP

#include <string>
#include <iostream>

// 	Default Constructor
// Parameterized Constructor
// Copy Constructor
// Assignment Operator
// Destructor

class ClapTrap {
	private :
		std::string name;
		int	hitPoints;
		int	energyPoints;
		int	attackDamage;
		ClapTrap();

	public : 

		ClapTrap(std::string name)
		{
			this->name = name;
			this->hitPoints = 10;
			this->energyPoints = 10;
			this->attackDamage = 0;
		};

		ClapTrap(const ClapTrap &object)
		{
			*this = object;
		};

		ClapTrap &operator=(const ClapTrap &object)
		{
			this->name = object.name;
			this->attackDamage = object.attackDamage;
			this->hitPoints = object.hitPoints;
			this->energyPoints = object.energyPoints;
			return (*this);
		};

		~ClapTrap()
		{

		};


		const std::string &getName() const
		{
			return this->name;
		}

		int	getAttackDammage() const
		{
			return this->attackDamage;
		}

		int	getHitPoints() const
		{
			return this->hitPoints;
		}

		int	getEnergyPoints() const
		{
			return this->energyPoints;
		}
		
};
	
	std::ostream& operator<<(std::ostream& os, const ClapTrap&object)
	{
		os << "Name :" << object.getName() << std::endl;
		os << "Attack Dammage :" << object.getAttackDammage() << std::endl;
		os << "Energy points :" << object.getEnergyPoints() << std::endl;
		os << "Hits points :" << object.getHitPoints() << std::endl;
		return os;
	}

#endif