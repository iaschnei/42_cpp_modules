#include "includes/Colors.hpp"
#include "includes/Zombie.hpp"
#include <string>
#include <iostream>

Zombie *zombieHorde(int N, std::string name);

int main(void) {
  
  Zombie *horde;

  std::cout << YELLOW << "Creating a horde:" << RESET <<std::endl;
  horde = zombieHorde(10, "Brian");
  std::cout << YELLOW << "First member of the horde announcing:" << RESET <<std::endl;
  horde[0].announce();
  std::cout << YELLOW << "Sixth member of the horde announcing:" << RESET <<std::endl;
  horde[5].announce();
  std::cout << YELLOW << "All members of the horde announcing:" << RESET <<std::endl;
  for (int i = 0; i < 10; i++)
    horde[i].announce();
  std::cout << YELLOW << "Deleting the horde :'(" << RESET <<std::endl;
  delete [] horde;
}
