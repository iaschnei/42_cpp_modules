#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>
# include "MateriaSource.hpp"
# include "IMateriaSource.hpp"
# include "ICharacter.hpp"
# include "Character.hpp"

class AMateria {

public:

    AMateria(std::string const &type);
    AMateria(const AMateria &copy);
    virtual ~AMateria();

    std::string const   &getType(void) const;    //Returns the materia type
    virtual AMateria    *clone(void) const = 0;  //Returns a new instance of the same type
    virtual void        use(ICharacter &target); //Display a message depending on type

protected:
    std::string const _type;

private:
    AMateria &operator=(const AMateria &copy);
    AMateria();
};

#endif
