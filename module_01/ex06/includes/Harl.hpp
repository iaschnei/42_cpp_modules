#include <string>

#ifndef HARL_HPP
# define HARL_HPP

class Harl {
public:
  Harl();
  ~Harl();

  void complain(std::string level);
private:

  void debug(void);
  void info(void);
  void warning(void);
  void error(void);
};

#endif
