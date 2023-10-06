#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"
# include <string>

class Character : public ICharacter {
public:
    Character(const std::string &name);
    Character(const Character &copy);
    ~Character();

    Character &operator=(const Character &copy);

    virtual std::string const &getName() const;
    virtual void equip(AMateria *m);
    virtual void unequip(int idx);
    virtual void use(int idx, ICharacter& target);


private:
    Character();
    std::string _name;
    AMateria    *_inventory[4];
    int         _inventorySlot;
};

#endif
