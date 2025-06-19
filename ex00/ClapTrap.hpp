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

		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &object);
		ClapTrap &operator=(const ClapTrap &object);
		~ClapTrap();
		const std::string &getName() const;
		int	getAttackDammage() const;
		int	getHitPoints() const;
		int	getEnergyPoints() const;
		bool haveEnergy() const;
		bool	isDead() const;
		bool checkIsDead() const;
		void attack(const std::string& target);
		void beRepaired(unsigned int amount);
		void takeDamage(unsigned int amount);
};
	
std::ostream& operator<<(std::ostream& os, const ClapTrap&object);

#endif