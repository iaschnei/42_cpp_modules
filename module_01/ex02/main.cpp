#include <string>
#include <iostream>
#include "includes/Colors.hpp"

int main(void) {
  
  std::string str = "HI THIS IS BRAIN";
  std::string *stringPTR = &str;
  std::string &stringREF = str;

  std::cout << YELLOW << "Printing memory addresses: "<< RESET <<std::endl;
  std::cout << CYAN << "str       = " << &str << RESET <<std::endl;
  std::cout << CYAN << "stringPTR = " << stringPTR << RESET <<std::endl;
  std::cout << CYAN << "stringREF = " << &stringREF << RESET <<std::endl;

  std::cout << YELLOW << "Printing values: " << RESET << std::endl;
  std::cout << CYAN << "str       = " << str << RESET <<std::endl;
  std::cout << CYAN << "stringPTR = " << *stringPTR << RESET <<std::endl;
  std::cout << CYAN << "stringREF = " << stringREF << RESET <<std::endl;
}
