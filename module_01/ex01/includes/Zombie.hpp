#include <string>

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

class Zombie {

public:
  
  Zombie (void);
  Zombie (std::string name);
  ~Zombie (void);

  void  announce(void);
  void  name_Zombie(std::string name);
private:

  std::string _name; 
};

#endif
