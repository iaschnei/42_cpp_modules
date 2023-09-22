#include "../includes/Zombie.hpp"
#include <string>

Zombie *zombieHorde(int N, std::string name) {
  Zombie *first_zombie;
  int     iter = 0;

  first_zombie = new Zombie[N];
  while (iter < N) {
    first_zombie[iter].name_Zombie(name);
    iter++;
  }
  return (first_zombie);
}
