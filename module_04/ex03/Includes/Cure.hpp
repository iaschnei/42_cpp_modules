#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria {

public:
    Cure();
    Cure(const Cure &copy);
    ~Cure();

    Cure &operator=(const Cure &copy);
    
    void        use(ICharacter &target);
    AMateria    *clone(void) const;
};

#endif
