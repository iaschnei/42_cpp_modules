#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed {

public:

  Fixed ();
  Fixed (const Fixed  &copy);
  Fixed  &operator=(const Fixed  &copy);
  ~Fixed ();

  int   getRawBits(void) const;
  void  setRawBits(int const raw);
private:

  int               _fixed_value;
  static const int  _fractional_bits = 8;
};

#endif
