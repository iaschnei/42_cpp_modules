#include <string>
#include "../includes/Zombie.hpp"
#include "../includes/Colors.hpp"

Zombie *newZombie(std::string name) {
  return (new Zombie(name));
}
