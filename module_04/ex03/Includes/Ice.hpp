#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria {

public:
    Ice();
    Ice(const Ice &copy);
    ~Ice();

    Ice &operator=(const Ice &copy);
    
    void        use(ICharacter &target);
    AMateria    *clone(void) const;
};

#endif
