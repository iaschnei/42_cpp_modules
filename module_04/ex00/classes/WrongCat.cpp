#include "../includes/WrongCat.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/Colors.hpp"
#include <iostream>

WrongCat::WrongCat(void) : WrongAnimal::WrongAnimal() {
  this->type = "Cat";
  std::cout << GREEN << "A wrong cat has been created." << RESET << std::endl;
  return ;
}

WrongCat::WrongCat(const WrongCat &copy) {
  this->type = copy.type;
  std::cout << GREEN << "A wrong cat has been created by copy." << RESET << std::endl;
  return ;
}

WrongCat::~WrongCat(void) {
  std::cout << RED << "A wrong cat has been destroyed :'(" << RESET << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &copy) {
  this->type = copy.type;
  return (*this);
}

void WrongCat::makeSound(void) const {
  std::cout << CYAN << "* Wrong cat noise, should not print ! *" << RESET << std::endl;
}
