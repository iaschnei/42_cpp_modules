#include "../includes/Weapon.hpp"
#include "../includes/Colors.hpp"
#include <string>
#include <iostream>

Weapon::Weapon(std::string init_type) : type(init_type) {
  std::cout << GREEN << "Weapon created." << RESET << std::endl;
  return ;
}

Weapon::~Weapon(void) {
  std::cout << RED << "Weapon destroyed." << RESET << std::endl;
  return ;
}

std::string const Weapon::getType(void) {
  return (this->type);
}

void  Weapon::setType(std::string new_type) {
  this->type = new_type;
  return ;
}
