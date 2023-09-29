#include <iostream>
#include <cmath>
#include "includes/Fixed.hpp"
#include "includes/Colors.hpp"

//- - - - - - - [[CONSTRUCTORS]] - - - - - - -

Fixed::Fixed(void) : _fixed_value(0) {
  std::cout << GREEN << "Default constructor called" << RESET << std::endl;
  return ;
}

Fixed::Fixed(const Fixed &copy) {
  std::cout << GREEN << "Copy constructor called" << RESET << std::endl;
  this->_fixed_value = copy.getRawBits();
  return ;
}

Fixed::Fixed(const int int_value) {
  std::cout << GREEN << "Constructor with int argument called" << RESET << std::endl;
  this->_fixed_value = int_value << this->_fractional_bits;
  return ;
}

Fixed::Fixed(const float float_value) {
  std::cout << GREEN << "Constructor with float argument called" << RESET << std::endl;
  this->_fixed_value = roundf(float_value * (1 << this->_fractional_bits));
  return ;
}

Fixed::~Fixed(void) {
  std::cout << RED << "Destructor called" << RESET << std::endl;
  return ;
}

//- - - - - - - [[OPERATORS OVERLOAD]] - - - - - - -


Fixed &Fixed::operator=(const Fixed &copy) {
  std::cout << YELLOW << "Copy assignment operator called" << RESET << std::endl;
  this->_fixed_value = copy.getRawBits();
  return (*this);
}

std::ostream &operator<<(std::ostream &out, Fixed const &represent_value) {
  out << represent_value.toFloat();
  return (out);
}

//- - - - - - - [[MEMBER FUNCTIONS]] - - - - - - -


int Fixed::getRawBits(void) const {
  std::cout << YELLOW << "getRawBits member function called" << RESET << std::endl;
  return (this->_fixed_value);
}

void  Fixed::setRawBits(int const raw) {
  std::cout << YELLOW << "setRawBits member function called" << RESET << std::endl;
  this->_fixed_value = raw;
  return ;
}

int Fixed::toInt(void) const {
  return (this->_fixed_value >> this->_fractional_bits);
}

float Fixed::toFloat(void) const {
  return ((float) this->_fixed_value / (1 << this->_fractional_bits));
}
