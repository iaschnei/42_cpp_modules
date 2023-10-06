#include "../includes/WrongAnimal.hpp"
#include "../includes/Colors.hpp"
#include <iostream>

WrongAnimal::WrongAnimal(void) : type("Living thing") {
  std::cout << GREEN << "A wrong animal has been created !" << RESET << std::endl;
  return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy) {
  std::cout << GREEN << "A wrong animal has been created by copy." << RESET << std::endl;
  this->type = copy.type;
  return ;
}

WrongAnimal::~WrongAnimal(void) {
  std::cout << RED << "A wrong animal has been destroyed." << RESET << std::endl;
  return ;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &copy) {
  this->type = copy.type;
  return (*this);
}

std::string WrongAnimal::get_type(void) const {
  return (this->type);
}

void WrongAnimal::makeSound(void) const {
  std::cout << CYAN << "* Wrong animal sound *" << RESET << std::endl;
}
