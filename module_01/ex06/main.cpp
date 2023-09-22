#include "includes/Colors.hpp"
#include "includes/Harl.hpp"
#include <string>
#include <iostream>

int main(int ac, char **av) {

  if (ac == 2) {

    Harl harl1;

    harl1.complain(av[1]);
  }
  else {
    std::cout << RED << "Please provide an argument" << RESET << std::endl;
  }
  return (0);
}
