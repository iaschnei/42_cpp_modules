#include <iostream>
#include "includes/Colors.hpp"
#include "includes/ClapTrap.hpp"
#include "includes/ScavTrap.hpp"
#include "includes/FragTrap.hpp"

int main (void) {
{  
  ScavTrap cp_1("John");
  ScavTrap cp_2("Michel");

  std::cout << YELLOW << "------------------------------------" << RESET << std::endl;

  cp_1.attack("Michel");
  cp_2.takeDamage(20);

  cp_2.guardGate();
  cp_1.attack("Michel");
  cp_2.takeDamage(10);
  cp_2.beRepaired(30);

  std::cout << YELLOW << "------------------------------------" << RESET << std::endl;
}
{
  std::cout << YELLOW << "------------------------------------" << RESET << std::endl;
  FragTrap fp_1("Harry");
  FragTrap fp_2("Steve");

  std::cout << YELLOW << "------------------------------------" << RESET << std::endl;
  fp_1.attack("Steve");
  fp_2.takeDamage(30);
  fp_2 = fp_1;
  fp_2.beRepaired(70);
  fp_1.highFivesGuys();

  std::cout << YELLOW << "------------------------------------" << RESET << std::endl;
}
  return (0);
}
