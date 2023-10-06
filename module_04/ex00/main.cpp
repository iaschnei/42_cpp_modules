#include "includes/Animal.hpp"
#include "includes/Cat.hpp"
#include "includes/Dog.hpp"
#include "includes/WrongAnimal.hpp"
#include "includes/WrongCat.hpp"
#include "includes/Colors.hpp"
#include <string>
#include <iostream>

int main(void) {

  const Animal *meta = new Animal();
  const Animal *cat = new Cat();
  const Animal *dog = new Dog();

  std::cout << YELLOW << "--------------------------------------" << RESET << std::endl;
  std::cout << CYAN << "Meta's type: " << meta->get_type() << RESET << std::endl;
  std::cout << CYAN << "Cat's type : " << cat->get_type() << RESET << std::endl;
  std::cout << CYAN << "Dog's type : " << dog->get_type() << RESET << std::endl;
  std::cout << YELLOW << "--------------------------------------" << RESET << std::endl;
  std::cout << CYAN << "Meta's sound: " << RESET;
  meta->makeSound();
  std::cout << CYAN << "Cat's sound : " << RESET;
  cat->makeSound();
  std::cout << CYAN << "Dog's sound : " << RESET;
  dog->makeSound();
  std::cout << YELLOW << "--------------------------------------" << RESET << std::endl;
  std::cout << MAGENTA << " ** Transforming a dog into a cat ** " << std::endl;
  dog = cat;
  std::cout << CYAN << "Dog's (cat ?) type : " << dog->get_type() << RESET << std::endl;
  std::cout << CYAN << "Dog's (cat ?) sound: " << RESET;
  dog->makeSound();
  std::cout << YELLOW << "--------------------------------------" << RESET << std::endl;
  std::cout << YELLOW << "Now let's try with Wrong implementation :" << RESET << std::endl;
  const WrongAnimal *wrongCat = new WrongCat();
  std::cout << YELLOW << "--------------------------------------" << RESET << std::endl;
  std::cout << CYAN << "WrongCat's type : " << wrongCat->get_type() << RESET << std::endl;
  std::cout << CYAN << "WrongCat's sound: " << RESET;
  wrongCat->makeSound();
  std::cout << YELLOW << "--------------------------------------" << RESET << std::endl;

  delete meta;
  delete cat;

  return (0);
}
