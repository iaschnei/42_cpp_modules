#include <iostream>
#include "includes/Colors.hpp"
#include "includes/ClapTrap.hpp"

int main (void) {
  
  ClapTrap cp_1("John");
  ClapTrap cp_2("Michel");
  std::cout << YELLOW << "------------------------------------" << RESET << std::endl;

  cp_1.attack("Michel");
  cp_2.takeDamage(0);
  std::cout << YELLOW << "John falls on the ground." << RESET << std::endl;
  cp_1.takeDamage(5);
  cp_1.beRepaired(10);

  std::cout << YELLOW << "John is angry now!!!!" << RESET << std::endl;
  cp_1.attack("Michel");
  cp_1.attack("Michel");
  cp_1.attack("Michel");
  cp_1.attack("Michel");
  cp_1.attack("Michel");
  cp_1.attack("Michel");
  cp_1.attack("Michel");
  cp_1.attack("Michel");
  cp_1.attack("Michel");
  cp_1.attack("Michel");
  std::cout << YELLOW << "------------------------------------" << RESET << std::endl;
  return (0);
}
