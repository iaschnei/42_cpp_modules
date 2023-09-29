#include <string>
#include "ClapTrap.hpp"

#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

class ScavTrap : public ClapTrap {

public:

  ScavTrap(void);
  ScavTrap(std::string name);
  ScavTrap(ScavTrap const &copy);
  ~ScavTrap(void);

  ScavTrap &operator=(ScavTrap const &copy);

  void attack(const std::string &target);
  void guardGate(void);

private:

};

#endif // !SCAV_TRAP_HPP

