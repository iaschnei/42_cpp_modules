#include "../includes/Dog.hpp"
#include "../includes/Animal.hpp"
#include "../includes/Colors.hpp"
#include "../includes/Brain.hpp"
#include <iostream>

Dog::Dog(void) : AAnimal::AAnimal() {
  this->type = "Dog";
  this->dog_brain = new Brain();
  std::cout << GREEN << "A dog with a brain has been created." << RESET << std::endl;
  return ;
}

Dog::Dog(const Dog &copy) {
  this->type = copy.type;
  this->dog_brain = new Brain(*copy.dog_brain);
  std::cout << GREEN << "A dog has been created by copy." << RESET << std::endl;
  return ;
}

Dog::~Dog(void) {
  delete dog_brain;
  std::cout << RED << "A dog has been destroyed." << RESET << std::endl;
}

Dog &Dog::operator=(const Dog &copy) {
  this->type = copy.type;
  this->dog_brain = new Brain(*copy.dog_brain);
  return (*this);
}

void Dog::makeSound(void) const {
  std::cout << CYAN << "* Wouf *" << RESET << std::endl;
}

void Dog::print_brain(void) const {
    this->dog_brain->print_ideas();
}

void Dog::change_idea(int i, std::string idea) const {
    this->dog_brain->ideas[i] = idea;
}
