#include "Fixed.hpp"

#ifndef POINT_HPP
# define POINT_HPP

class Point {
public:
  Point();
  Point(const float x, const float y);
  Point(const Point &copy);
  ~Point();


  Point  &operator=(const Point &copy);
  int     get_x(void) const;
  int     get_y(void) const;
  float  get_float_x(void) const;
  float  get_float_y(void) const;

private:
  
  const Fixed _x;
  const Fixed _y;
};

#endif
