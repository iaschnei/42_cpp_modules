#include "../includes/Animal.hpp"
#include "../includes/Colors.hpp"
#include <iostream>

AAnimal::AAnimal(void) : type("Living thing") {
  std::cout << GREEN << "An animal has been created." << RESET << std::endl;
  return ;
}

AAnimal::AAnimal(const AAnimal &copy) {
  std::cout << GREEN << "An animal has been created by copy." << RESET << std::endl;
  this->type = copy.type;
  return ;
}

AAnimal::~AAnimal(void) {
  std::cout << RED << "An animal has been destroyed." << RESET << std::endl;
  return ;
}

AAnimal &AAnimal::operator=(const AAnimal &copy) {
  this->type = copy.type;
  return (*this);
}

std::string AAnimal::get_type(void) const {
  return (this->type);
}
