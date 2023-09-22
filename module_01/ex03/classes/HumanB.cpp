#include <iostream>
#include <string>
#include "../includes/HumanB.hpp"
#include "../includes/Weapon.hpp"
#include "../includes/Colors.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL) {
  std::cout << GREEN << _name << " created." << RESET << std::endl;
  return ;
}

HumanB::~HumanB(void) {
  std::cout << RED << _name << " destroyed." << RESET << std::endl;
  return ;
}

void  HumanB::setWeapon(Weapon &weapon) {
  this->_weapon = &weapon;
  return ;
}

void  HumanB::attack(void) {
  if (!this->_weapon)
    std::cout << CYAN << _name << " attacks with their bare hands !" << RESET << std::endl;
  else
    std::cout << CYAN << _name << " attacks with their " << _weapon->getType() << RESET << std::endl;
  return ;
}
