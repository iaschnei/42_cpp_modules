#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {

public:

  Fixed ();
  Fixed (const Fixed  &copy);
  Fixed (const int int_value);
  Fixed (float float_value);
  ~Fixed ();

  Fixed  &operator=(const Fixed  &right_arg);

  bool    operator>(const Fixed  &right_arg) const;
  bool    operator<(const Fixed  &right_arg) const;
  bool    operator>=(const Fixed &right_arg) const;
  bool    operator<=(const Fixed &right_arg) const;
  bool    operator==(const Fixed &right_arg) const;
  bool    operator!=(const Fixed &right_arg) const;

  Fixed   operator+(const Fixed  &right_arg) const;
  Fixed   operator-(const Fixed  &right_arg) const;
  Fixed   operator*(const Fixed  &right_arg) const;
  Fixed   operator/(const Fixed  &right_arg) const;

  Fixed   &operator++(void);
  Fixed    operator++(int);
  Fixed   &operator--(void);
  Fixed    operator--(int);
  


  int   getRawBits(void) const;
  void  setRawBits(int const raw);

  float toFloat(void) const;
  int   toInt(void) const;

  Fixed &min(Fixed &left_arg, Fixed &right_arg) const;
  const Fixed &min(const Fixed &left_arg, const Fixed &right_arg) const;
  Fixed &max(Fixed &left_arg, Fixed &right_arg) const;
  const Fixed &max(const Fixed &left_arg, const Fixed &right_arg) const;

private:

  int               _fixed_value;
  static const int  _fractional_bits = 8;
};

std::ostream & operator<<(std::ostream &out, Fixed const &represent_value);

#endif
