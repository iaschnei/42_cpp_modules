#include <iostream>
#include "includes/Colors.hpp"
#include "includes/Fixed.hpp"

int main(void) {

  Fixed a;
  Fixed b (a);
  Fixed c;

  //Print a and b value to check for correct creation
  std::cout << CYAN << "a value: " << a.getRawBits() << RESET << std::endl;
  std::cout << CYAN << "b value: " << b.getRawBits() << RESET << std::endl;

  //Change b value and print it again
  std::cout << YELLOW << "set b value to 42: " << RESET << std::endl; 
  b.setRawBits(42);
  std::cout << CYAN << "b value: " << b.getRawBits() << RESET << std::endl;

  //Copy b into c and print its value
  c = b;
  std::cout << CYAN << "c value: " << c.getRawBits() << RESET << std::endl;
}
