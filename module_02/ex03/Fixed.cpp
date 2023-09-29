#include <iostream>
#include <cmath>
#include "includes/Fixed.hpp"
#include "includes/Colors.hpp"

//- - - - - - - [[CONSTRUCTORS]] - - - - - - -

Fixed::Fixed(void) : _fixed_value(0) {
  return ;
}

Fixed::Fixed(const Fixed &copy) {
  this->_fixed_value = copy.getRawBits();
  return ;
}

Fixed::Fixed(const int int_value) {
  this->_fixed_value = int_value << this->_fractional_bits;
  return ;
}

Fixed::Fixed(float float_value) {
  this->_fixed_value = roundf(float_value * (1 << this->_fractional_bits));
  return ;
}

Fixed::~Fixed(void) {
  return ;
}

//- - - - - - - [[OPERATORS OVERLOAD]] - - - - - - -


Fixed &Fixed::operator=(const Fixed &right_arg) {
  this->_fixed_value = right_arg.getRawBits();
  return (*this);
}

bool Fixed::operator>(const Fixed &right_arg) const{
  if (this->_fixed_value > right_arg.getRawBits())
    return (true);
  return (false);
}

bool Fixed::operator<(const Fixed &right_arg) const{
  if (this->_fixed_value < right_arg.getRawBits())
    return (true);
  return (false);
}

bool Fixed::operator>=(const Fixed &right_arg) const{
  if (this->_fixed_value >= right_arg.getRawBits())
    return (true);
  return (false);
}

bool Fixed::operator<=(const Fixed &right_arg) const{
  if (this->_fixed_value <= right_arg.getRawBits())
    return (true);
  return (false);
}

bool Fixed::operator==(const Fixed &right_arg) const {
  if (this->_fixed_value == right_arg.getRawBits())
    return (true);
  return (false);
}

bool Fixed::operator!=(const Fixed &right_arg) const {
  if (this->_fixed_value != right_arg.getRawBits())
    return (true);
  return (false);
}


Fixed Fixed::operator+(const Fixed &right_arg) const {
  Fixed addition = (*this);
  addition.setRawBits(this->_fixed_value + right_arg.getRawBits());
  return (addition);
}

Fixed Fixed::operator-(const Fixed &right_arg) const {
  Fixed substraction = (*this);
  substraction.setRawBits(this->_fixed_value - right_arg.getRawBits());
  return (substraction);
}

Fixed Fixed::operator*(const Fixed &right_arg) const {
  Fixed multiplication = (*this);
  multiplication.setRawBits((this->_fixed_value * right_arg.getRawBits()) >> (this->_fractional_bits));
  return (multiplication);
}

Fixed Fixed::operator/(const Fixed &right_arg) const {
  Fixed division = (*this);
  division.setRawBits((int64_t) (this->_fixed_value << this->_fractional_bits) / right_arg.getRawBits());
  return (division);
}



Fixed &Fixed::operator++(void) {
  this->_fixed_value += 1;
  return (*this);
}

Fixed Fixed::operator++(int) {
  Fixed old = *this;
  this->_fixed_value += 1;
  return (old);
}

Fixed &Fixed::operator--(void) {
  this->_fixed_value -= 1;
  return (*this);
}

Fixed Fixed::operator--(int) {
  Fixed old = *this;
  this->_fixed_value -= 1;
  return (old);
}

std::ostream &operator<<(std::ostream &out, Fixed const &represent_value) {
  out << represent_value.toFloat();
  return (out);
}

//- - - - - - - [[MEMBER FUNCTIONS]] - - - - - - -


int Fixed::getRawBits(void) const {
  return (this->_fixed_value);
}

void  Fixed::setRawBits(int const raw) {
  this->_fixed_value = raw;
  return ;
}

int Fixed::toInt(void) const {
  return (this->_fixed_value >> this->_fractional_bits);
}

float Fixed::toFloat(void) const {
  return ((float) this->_fixed_value / (1 << this->_fractional_bits));
}

Fixed &Fixed::min(Fixed &left_arg, Fixed &right_arg) const {
  if (left_arg <= right_arg)
    return (left_arg);
  return (right_arg);
}

const Fixed &Fixed::min(const Fixed &left_arg, const Fixed &right_arg) const {
  if (left_arg <= right_arg)
    return (left_arg);
  return (right_arg);
}

Fixed &Fixed::max(Fixed &left_arg, Fixed &right_arg) const {
  if (left_arg >= right_arg)
    return (left_arg);
  return (right_arg);
}

const Fixed &Fixed::max(const Fixed &left_arg, const Fixed &right_arg) const {
  if (left_arg >= right_arg)
    return (left_arg);
  return (right_arg);
}
