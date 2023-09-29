#include <iostream>
#include "includes/Colors.hpp"
#include "includes/ClapTrap.hpp"
#include "includes/ScavTrap.hpp"
#include "includes/FragTrap.hpp"
#include "includes/DiamondTrap.hpp"

int main (void) {
  
  DiamondTrap dt_1("Michelle");
  DiamondTrap dt_2("Suzanne");

  std::cout << YELLOW << "------------------------------------" << RESET << std::endl;
 
  dt_1.attack("Suzanne");
  dt_2.takeDamage(30); 
  dt_2.guardGate();
  dt_2.beRepaired(31);
  dt_1.highFivesGuys();
  dt_2.attack("Michelle");
  dt_1.takeDamage(700000);
  std::cout << YELLOW << "------------------------------------" << RESET << std::endl;
  return (0);
}
