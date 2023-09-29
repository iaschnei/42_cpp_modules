#include <string>

#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

class ClapTrap {

public:

  ClapTrap();
  ClapTrap(std::string name);
  ClapTrap(const ClapTrap &copy);
  ~ClapTrap();


  ClapTrap &operator=(const ClapTrap &copy);
  void attack(const std::string &target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);

private:

  std::string _name;
  int         _hit_points;
  int         _energy_points;
  int         _attack_damage;
  
};

#endif // !CLAP_TRAP_HPP

