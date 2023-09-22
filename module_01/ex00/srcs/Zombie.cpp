#include "../includes/Zombie.hpp"
#include "../includes/Colors.hpp"
#include <string>
#include <iostream>

Zombie::Zombie(std::string name) : _name(name) {
  std::cout << GREEN << "Zombie named " << this->_name << " created." << RESET <<std::endl;
  return ;
}

Zombie::~Zombie(void) {
  std::cout << RED << "Zombie named " << this->_name << " destroyed." << RESET <<std::endl;
}

void  Zombie::announce(void) {
  std::cout << CYAN << this->_name << ": BraiiiiiiinnnzzzZ..." << RESET <<std::endl;
}
