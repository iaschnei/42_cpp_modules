#include "../includes/Cat.hpp"
#include "../includes/Animal.hpp"
#include "../includes/Colors.hpp"
#include "../includes/Brain.hpp"
#include <iostream>

Cat::Cat(void) : AAnimal::AAnimal() {
  this->type = "Cat";
  this->cat_brain = new Brain();
  std::cout << GREEN << "A cat with a brain has been created." << RESET << std::endl;
  return ;
}

Cat::Cat(const Cat &copy) {
  this->type = copy.type;
  this->cat_brain = new Brain(*copy.cat_brain);
  std::cout << GREEN << "A cat has been created by copy." << RESET << std::endl;
  return ;
}

Cat::~Cat(void) {
  delete cat_brain;
  std::cout << RED << "A cat has been destroyed :'(" << RESET << std::endl;
}

Cat &Cat::operator=(const Cat &copy) {
  this->type = copy.type;
  this->cat_brain = new Brain(*copy.cat_brain);
  return (*this);
}

void Cat::makeSound(void) const {
  std::cout << CYAN << "* Meowww *" << RESET << std::endl;
}

void Cat::print_brain(void) const {
    this->cat_brain->print_ideas();
}

void Cat::change_idea(int i, std::string idea) const {
    this->cat_brain->ideas[i] = idea;
}
