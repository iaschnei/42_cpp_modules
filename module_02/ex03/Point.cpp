#include "includes/Point.hpp"
#include "includes/Fixed.hpp"

Point::Point(void): _x(0), _y(0) {
  return ;
}

Point::~Point(void) {
  return ;
}

Point::Point(const float x, const float y): _x(x), _y(y) {
  return ;
}

Point::Point(const Point &copy) {
  const_cast<Fixed&>(this->_x).setRawBits(copy.get_x());
  const_cast<Fixed&>(this->_y).setRawBits(copy.get_y());
  return ;
}

Point &Point::operator=(const Point &copy) {
  const_cast<Fixed&>(this->_x).setRawBits(copy.get_x());
  const_cast<Fixed&>(this->_y).setRawBits(copy.get_y());
  return (*this);
}

int Point::get_x(void) const {
  return (this->_x.getRawBits());
}

int Point::get_y(void) const {
  return (this->_y.getRawBits());
} 

float Point::get_float_x(void) const {
  return (this->_x.toFloat());
}

float Point::get_float_y(void) const {
  return (this->_y.toFloat());
}
