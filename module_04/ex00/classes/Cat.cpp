#include "../includes/Cat.hpp"
#include "../includes/Animal.hpp"
#include "../includes/Colors.hpp"
#include <iostream>

Cat::Cat(void) : Animal::Animal() {
  this->type = "Cat";
  std::cout << GREEN << "A cat has been created." << RESET << std::endl;
  return ;
}

Cat::Cat(const Cat &copy) {
  this->type = copy.type;
  std::cout << GREEN << "A cat has been created by copy." << RESET << std::endl;
  return ;
}

Cat::~Cat(void) {
  std::cout << RED << "A cat has been destroyed :'(" << RESET << std::endl;
}

Cat &Cat::operator=(const Cat &copy) {
  this->type = copy.type;
  return (*this);
}

void Cat::makeSound(void) const {
  std::cout << CYAN << "* Meowww *" << RESET << std::endl;
}
