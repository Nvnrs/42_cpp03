#include "ClapTrap.hpp"

int	main()
{
	ClapTrap a("bob");
	ClapTrap b("Maton");

	a.attack(b.getName());
	b.takeDamage(5);
	b.beRepaired(5);
	b.attack(a.getName());
	a.takeDamage(10);
	a.beRepaired(10);
	return (0);
}