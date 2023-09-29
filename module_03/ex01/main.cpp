#include <iostream>
#include "includes/Colors.hpp"
#include "includes/ClapTrap.hpp"
#include "includes/ScavTrap.hpp"

int main (void) {
  
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
  return (0);
}
