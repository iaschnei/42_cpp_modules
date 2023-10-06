#include "../includes/Dog.hpp"
#include "../includes/Animal.hpp"
#include "../includes/Colors.hpp"
#include <iostream>

Dog::Dog(void) : Animal::Animal() {
  this->type = "Dog";
  std::cout << GREEN << "A dog has been created." << RESET << std::endl;
  return ;
}

Dog::Dog(const Dog &copy) {
  this->type = copy.type;
  std::cout << GREEN << "A dog has been created by copy." << RESET << std::endl;
  return ;
}

Dog::~Dog(void) {
  std::cout << RED << "A dog has been destroyed." << RESET << std::endl;
}

Dog &Dog::operator=(const Dog &copy) {
  this->type = copy.type;
  return (*this);
}

void Dog::makeSound(void) const {
  std::cout << CYAN << "* Wouf *" << RESET << std::endl;
}
