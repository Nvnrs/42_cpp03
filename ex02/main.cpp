#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"



int	main()
{
	// FRAG TRAP

	FragTrap a("AAAAA");
	FragTrap b("BBBBB");

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
	FragTrap c("CCCCC");
	FragTrap copy(c);
	std::cout << "C copy \n" << c;
	FragTrap d("DDDDDD");
	std::cout << "C BEFORE re-assignement\n" << c;
	c = d;
	std::cout << "C AFTER re-assignement\n" << c;


	std::cout << "\n____HIGH FIVES ___\n";
	c.highFivesGuys();


	// SCAVTRAP WORK ALWAYS
	std::cout << "\n____SCAVTRAP TEST__\n";
	ScavTrap testA("SCAV A");
	std::cout << testA;

	std::cout << "\n____DESTRUCTOR ___\n";


	return (0);
}
