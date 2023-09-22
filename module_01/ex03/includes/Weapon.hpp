#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class Weapon {

public:

  Weapon (std::string init_type);
  ~Weapon ();

  std::string const getType(void);
  void              setType(std::string new_type);

private:

  std::string type;
};

#endif
