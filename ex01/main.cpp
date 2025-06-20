#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	// ClapTrap a("bob");
	// ClapTrap b("Maton");
	ScavTrap a("AAAAA");
	ScavTrap b("BBBBB");

	std::cout << "\n____BASICS TESTS___\n";
	std::cout << "B BEFORE ATTACK :\n" << b;
	a.attack(b.getName());
	b.takeDamage(a.getAttackDammage());
	std::cout << "B AFTER ATTACK :\n" << b;
	b.beRepaired(150);
	std::cout << "B AFTER REPAIRED :\n" << b;


	// DEAD TESTS
	std::cout << "\n____DEAD TESTS___\n";
	a.takeDamage(150);
	a.attack(b.getName());
	a.beRepaired(150);

	//ENERGY TESTS
	std::cout << "\n____ENERGY TESTS___\n";
	for (size_t i = 0; i < 50; i++)
		b.beRepaired(10);

	std::cout << "\n____ASSIGNEMENT & COPY TEST___\n";
	ScavTrap c("CCCCC");
	ScavTrap copy(c);
	ScavTrap d("DDDDDD");
	std::cout << "C BEFORE re-assignement\n" << c;
	c = d;
	std::cout << "C AFTER re-assignement\n" << c;


	std::cout << "\n____KEEPER MODE ___\n";
	a.guardGate();
	b.guardGate();

	std::cout << "\n____DESTRUCTOR ___\n";

	return (0);
}
