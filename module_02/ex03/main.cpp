#include <iostream>
#include "includes/Colors.hpp"
#include "includes/Fixed.hpp"
#include "includes/Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main(void) {

  {
  Point a(0.0f, 0.0f);
  Point b(10.0f, 30.0f);
  Point c(20.0f, 0.0f);
  Point point(10.0f, 15.0f);

  std::cout << YELLOW;
  std::cout << "            B(10, 30)  " << std::endl;
  std::cout << "               /  \\" << std::endl;
  std::cout << "              /    \\" << std::endl;
  std::cout << "             /      \\" << std::endl;
  std::cout << "            /        \\" << std::endl;
  std::cout << "           /          \\" << std::endl;
  std::cout << "          /  P(10, 15) \\" << std::endl;
  std::cout << "         /              \\" << std::endl;
  std::cout << "        /                \\" << std::endl;
  std::cout << "       /                  \\" << std::endl;
  std::cout << "A(0,0) -------------------- C(20, 0)" << std::endl;
  std::cout << RESET;

  if (bsp(a, b, c, point))
    std::cout << GREEN << "The point is inside" << RESET << std::endl;
  else
    std::cout << RED << "The point is outside" << RESET << std::endl;
  }
  {
  Point a(0.0f, 0.0f);
  Point b(10.0f, 30.0f);
  Point c(20.0f, 0.0f);
  Point point(30.0f, 15.0f);

  std::cout << YELLOW;
  std::cout << "            B(10, 30)  " << std::endl;
  std::cout << "               /  \\" << std::endl;
  std::cout << "              /    \\" << std::endl;
  std::cout << "             /      \\" << std::endl;
  std::cout << "            /        \\" << std::endl;
  std::cout << "           /          \\" << std::endl;
  std::cout << "          /            \\          P(30, 15)" << std::endl;
  std::cout << "         /              \\" << std::endl;
  std::cout << "        /                \\" << std::endl;
  std::cout << "       /                  \\" << std::endl;
  std::cout << "A(0,0) -------------------- C(20, 0)" << std::endl;
  std::cout << RESET;

  if (bsp(a, b, c, point))
    std::cout << GREEN << "The point is inside" << RESET << std::endl;
  else
    std::cout << RED << "The point is outside" << RESET << std::endl;
  return (0);
  }
}
