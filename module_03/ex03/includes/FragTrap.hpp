#include "Colors.hpp"
#include "ClapTrap.hpp"
#include <string>
#include <iostream>

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

class FragTrap : virtual public ClapTrap {
public:
    FragTrap(void);
    FragTrap(std::string const name);
    FragTrap(const FragTrap &copy);
    ~FragTrap(void);

    FragTrap &operator=(const FragTrap &copy);

    void highFivesGuys(void) const;
    void setHitPoints(void);
    void setAttackDamage(void);

private:
    
};

#endif
