#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {

public:

  Fixed ();
  Fixed (const Fixed  &copy);
  Fixed (const int int_value);
  Fixed (const float float_value);
  ~Fixed ();

  Fixed  &operator=(const Fixed  &copy);

  int   getRawBits(void) const;
  void  setRawBits(int const raw);

  float toFloat(void) const;
  int   toInt(void) const;

private:

  int               _fixed_value;
  static const int  _fractional_bits = 8;
};

std::ostream & operator<<(std::ostream &out, Fixed const &represent_value);

#endif
