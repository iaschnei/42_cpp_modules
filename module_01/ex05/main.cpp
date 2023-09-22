#include "includes/Colors.hpp"
#include "includes/Harl.hpp"
#include <string>
#include <iostream>

int main(void) {
  Harl harl1;

  std::cout << YELLOW << "With known levels:" << RESET << std::endl;
  harl1.complain("DEBUG");
  harl1.complain("INFO");
  harl1.complain("DEBUG");
  harl1.complain("WARNING");
  harl1.complain("ERROR");
  std::cout << YELLOW << "With unknown level:" << RESET << std::endl;
  harl1.complain("ewjeowjeoj");

  return (0);
}
