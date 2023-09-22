#include <string>
#include <iostream>
#include "includes/Zombie.hpp"
#include "includes/Colors.hpp"

Zombie *newZombie(std::string name);
void    randomChump(std::string name);

int main(void) {

  Zombie *ptr_to_zombie;

  std::cout << YELLOW << std::endl;
  std::cout << YELLOW << "Calling 'newZombie()' with parameter 'John':" << std::endl;
  ptr_to_zombie = newZombie("John");
  std::cout << YELLOW << "Calling 'announce()' from John's class:" << std::endl;
  ptr_to_zombie->announce();
  std::cout << YELLOW << "Again:" << std::endl;
  ptr_to_zombie->announce();
  std::cout << YELLOW << "Deleting John:" << std::endl;
  delete ptr_to_zombie;
  std::cout << std::endl;
  std::cout << YELLOW << "Calling 'randomChump()' with parameter 'Michel':" << std::endl;
  randomChump("Michel");
  std::cout << YELLOW << "Done!" << RESET << std::endl;
  return (0);
}
