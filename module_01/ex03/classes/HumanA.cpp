#include <iostream>
#include <string>
#include "../includes/HumanA.hpp"
#include "../includes/Weapon.hpp"
#include "../includes/Colors.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon) {
  std::cout << GREEN << _name << " created." << RESET << std::endl;
  return ;
}

HumanA::~HumanA(void) {
  std::cout << RED << _name << " destroyed." << RESET << std::endl;
  return ;
}

void  HumanA::attack(void) {
  std::cout << CYAN << _name << " attacks with their " << _weapon.getType() << RESET << std::endl;
  return ;
}
