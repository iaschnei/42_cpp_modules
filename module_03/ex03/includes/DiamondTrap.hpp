#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <string>

#ifndef DIAMOND_TRAP
# define DIAMOND_TRAP

class DiamondTrap : public FragTrap, public ScavTrap{
public:
    DiamondTrap();
    DiamondTrap(const std::string name);
    DiamondTrap(const DiamondTrap &copy);
    ~DiamondTrap();

    DiamondTrap &operator=(const DiamondTrap &copy);

    void whoAmI(void);
    void attack(const std::string &target);

private:

    std::string _name;
    
};

#endif
