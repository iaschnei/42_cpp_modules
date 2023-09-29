#include <iostream>
#include "includes/Colors.hpp"
#include "includes/Fixed.hpp"

int main(void) {

  Fixed a;
  Fixed const b( 10 );
  Fixed const c( 42.42f );
  Fixed const d( b );

  a = Fixed( 1234.4321f );

  std::cout << YELLOW << "----------------------------------------" << RESET << std::endl;

  std::cout << CYAN << "A is:  " << a << RESET << std::endl;
  std::cout << CYAN << "B is:  " << b << RESET << std::endl;
  std::cout << CYAN << "C is:  " << c << RESET << std::endl;
  std::cout << CYAN << "D is:  " << d << RESET << std::endl;

  std::cout << YELLOW << "----------------------------------------" << RESET << std::endl;

  std::cout << CYAN;
  if (a > c) 
    std::cout << "A is greater than C" << std::endl;

  if (b == d)
    std::cout << "B is equal to D" << std::endl;

  if (c != a)
    std::cout << "C is different from A" << std::endl;

  if (a >= d)
    std::cout << "A is greater than or equal to D" << std::endl;
  std::cout << RESET;


  std::cout << YELLOW << "----------------------------------------" << RESET << std::endl;

  std::cout << CYAN << a++ << "++ is:  " << a << RESET << std::endl;
  std::cout << CYAN << a-- << "-- is:  " << a << RESET << std::endl;
  std::cout << CYAN << a++ << "++ is:  " << a << RESET << std::endl;
  std::cout << CYAN << a++ << "++ is:  " << a << RESET << std::endl;
  std::cout << CYAN << "++"<< ++a << " is  " << a << RESET << std::endl;

  a = Fixed( 1234.4321f );

  std::cout << CYAN << std::endl << "A is  " << a << RESET << std::endl;
  
  std::cout << YELLOW << "----------------------------------------" << RESET << std::endl;

  std::cout << CYAN << "A multiplied by D is:  " << a * d << RESET << std::endl;
  std::cout << CYAN << "D multiplied by A is:  " << d * a << RESET << std::endl;
  std::cout << CYAN << "B multiplied by C is:  " << b * c << RESET << std::endl;
  std::cout << CYAN << "B multiplied by D is:  " << b * d << RESET << std::endl;

  std::cout << YELLOW << "----------------------------------------" << RESET << std::endl;

  std::cout << CYAN << "A divided by D    is:  " << a / d << RESET << std::endl;
  std::cout << CYAN << "C divided by B    is:  " << c / b << RESET << std::endl;
  std::cout << CYAN << "B divided by 3    is:  " << b / 3 << RESET << std::endl;
  std::cout << CYAN << "A divided by 1234 is:  " << a / 1234 << RESET << std::endl;

  std::cout << YELLOW << "----------------------------------------" << RESET << std::endl;


  std::cout << CYAN << "Min between A and D is:  " << a.min(a, d) << RESET << std::endl;
  std::cout << CYAN << "Min between C and A is:  " << a.min(c, a) << RESET << std::endl;
  std::cout << CYAN << "Max between D and B is:  " << a.max(d, b) << RESET << std::endl;
  std::cout << CYAN << "Max between B and A is:  " << a.max(b, a) << RESET << std::endl;

  std::cout << YELLOW << "----------------------------------------" << RESET << std::endl;

  return (0);
}
