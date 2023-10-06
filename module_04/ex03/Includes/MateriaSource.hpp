#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "AMateria.hpp"
# include <string>

class MateriaSource : public IMateriaSource {
public:
    MateriaSource();
    MateriaSource(const MateriaSource &copy);
    ~MateriaSource();

    MateriaSource &operator=(const MateriaSource &copy);
    virtual void learnMateria(AMateria *newMateria);
    virtual AMateria *createMateria(std::string const &type);

private:
    AMateria    *_MateriaTab[4];
    int         _nbMateria;
};

#endif
