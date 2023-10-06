#include "../includes/Animal.hpp"
#include "../includes/Colors.hpp"
#include <iostream>

Animal::Animal(void) : type("Living thing") {
  std::cout << GREEN << "An animal has been created." << RESET << std::endl;
  return ;
}

Animal::Animal(const Animal &copy) {
  std::cout << GREEN << "An animal has been created by copy." << RESET << std::endl;
  this->type = copy.type;
  return ;
}

Animal::~Animal(void) {
  std::cout << RED << "An animal has been destroyed." << RESET << std::endl;
  return ;
}

Animal &Animal::operator=(const Animal &copy) {
  this->type = copy.type;
  return (*this);
}

std::string Animal::get_type(void) const {
  return (this->type);
}

void Animal::makeSound(void) const {
  std::cout << CYAN << "* Default animal sound *" << RESET << std::endl;
}
