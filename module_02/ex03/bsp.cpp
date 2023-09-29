#include "includes/Fixed.hpp"
#include "includes/Point.hpp"

float calculate_area(int x1, int y1, int x2, int y2, int x3, int y3);

bool bsp(Point const a, Point const b, Point const c, Point const point) {

  float AREA = calculate_area(a.get_x(), a.get_y(), b.get_x(), b.get_y(), c.get_x(), c.get_y());

  float A1 = calculate_area(point.get_x(), point.get_y(), b.get_x(), b.get_y(), c.get_x(), c.get_y());

  float A2 = calculate_area(a.get_x(), a.get_y(), point.get_x(), point.get_y(), c.get_x(), c.get_y());

  float A3 = calculate_area(a.get_x(), a.get_y(), b.get_x(), b.get_y(), point.get_x(), point.get_y());

  if (A1 + A2 + A3 == AREA)
    return (true);
  return (false);
}

float calculate_area(int x1, int y1, int x2, int y2, int x3, int y3) {
  float ret;

  ret = ((x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2)) /2.0);
  if (ret < 0)
    return (-ret);
  return (ret);
}
