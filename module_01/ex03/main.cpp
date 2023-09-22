#include "includes/HumanA.hpp"
#include "includes/HumanB.hpp"
#include "includes/Weapon.hpp"
#include "includes/Colors.hpp"
#include <string>
#include <iostream>

int main(void) {
 {
  Weapon club = Weapon("crude spiked club");

  HumanA bob("Bob", club);
  bob.attack();
  club.setType("some other type of club");
  bob.attack();
 }
 {
  Weapon club = Weapon("crude spiked club");

  HumanB jim("Jim");
  jim.attack();
  jim.setWeapon(club);
  jim.attack();
  club.setType("some other type of club");
  jim.attack();
  }
}
