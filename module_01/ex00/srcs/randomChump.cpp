#include <string>
#include "../includes/Zombie.hpp"
#include "../includes/Colors.hpp"

void  randomChump(std::string name) {
  Zombie instance(name);
  instance.announce();
  return ;
}
