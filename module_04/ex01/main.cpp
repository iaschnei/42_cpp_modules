#include "includes/Animal.hpp"
#include "includes/Cat.hpp"
#include "includes/Dog.hpp"
#include "includes/Colors.hpp"
#include <string>
#include <iostream>

int main(void) {

	AAnimal *animals[10];

  std::cout << YELLOW << "----------------- CONSTRUCTORS -----------------" << RESET << std::endl;
	for (int i = 0; i < 5; i++)
		animals[i] = new Dog();
	for (int i = 5; i < 10; i++)
		animals[i] = new Cat();

  std::cout << std::endl << YELLOW << "------------ PRINTING BRAIN IDEAS --------------" << RESET << std::endl;
  std::cout << YELLOW << "animals[1] (Dog) : ideas = " << RESET << std::endl;
  ((Dog *)animals[1])->print_brain();
  std::cout << YELLOW << "animals[7] (Cat) : ideas = " << RESET << std::endl;
  ((Cat *)animals[7])->print_brain();

  std::cout << std::endl << YELLOW << "--------------- CHANGING IDEAS -----------------" << RESET << std::endl;
  std::cout << YELLOW << "Changing animals[3] (Dog) : idea number 5 to 'HELLO' " << RESET << std::endl;
  ((Dog *)animals[3])->change_idea(4, "HELLO");
  ((Dog *)animals[3])->print_brain();

  std::cout << std::endl << YELLOW << "-------------- TRYING DEEP COPY ----------------" << RESET << std::endl;
  std::cout << YELLOW << "Creating a new dog instance as a copy from animals[3]" << RESET << std::endl;
  Dog *newdog = new Dog(*((Dog *)animals[3]));
  std::cout << YELLOW << "Printing the newdog ideas :" << RESET << std::endl;
  newdog->print_brain();
  std::cout << YELLOW << "Changing newdog idea number 10 to 'BYE BYE' :" << RESET << std::endl;
  newdog->change_idea(9, "BYE BYE");
  newdog->print_brain();
  std::cout << YELLOW << "Printing animals[3] ideas : (nothing should change there)" << RESET << std::endl;
  ((Dog *)animals[3])->print_brain();
  std::cout << YELLOW << "Destroying newdog to avoid leaks :" << RESET << std::endl;
  delete newdog;


  std::cout << std::endl << YELLOW << "----------------- DESTRUCTORS ------------------" << RESET << std::endl;
	for (int i = 0; i < 10; i++)
		delete animals[i];
  return (0);
}
