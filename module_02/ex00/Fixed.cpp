#include <iostream>
#include "includes/Fixed.hpp"
#include "includes/Colors.hpp"

Fixed::Fixed(void) : _fixed_value(0) {
  std::cout << GREEN << "Default constructor called" << RESET << std::endl;
  return ;
}

Fixed::Fixed(const Fixed &copy) {
  std::cout << GREEN << "Copy constructor called" << RESET << std::endl;
  this->_fixed_value = copy.getRawBits();
  return ;
}

Fixed::~Fixed(void) {
  std::cout << RED << "Destructor called" << RESET << std::endl;
  return ;
}

Fixed &Fixed::operator=(const Fixed &copy) {
  std::cout << YELLOW << "Copy assignment operator called" << RESET << std::endl;
  this->_fixed_value = copy.getRawBits();
  return (*this);
}

int Fixed::getRawBits(void) const {
  std::cout << YELLOW << "getRawBits member function called" << RESET << std::endl;
  return (this->_fixed_value);
}

void  Fixed::setRawBits(int const raw) {
  std::cout << YELLOW << "setRawBits member function called" << RESET << std::endl;
  this->_fixed_value = raw;
  return ;
}
