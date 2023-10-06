#include "Includes/AMateria.hpp"
#include "Includes/Character.hpp"
#include "Includes/Cure.hpp"
#include "Includes/Ice.hpp"
#include "Includes/MateriaSource.hpp"
#include "Includes/ICharacter.hpp"
#include "Includes/IMateriaSource.hpp"
#include "Includes/Colors.hpp"
#include <string>
#include <iostream>

int main()
{
IMateriaSource* src = new MateriaSource();
src->learnMateria(new Ice());
src->learnMateria(new Cure());
ICharacter* me = new Character("me");
AMateria* tmp;
tmp = src->createMateria("ice");
me->equip(tmp);
tmp = src->createMateria("cure");
me->equip(tmp);
ICharacter* bob = new Character("bob");
me->use(0, *bob);
me->use(1, *bob);
delete bob;
delete me;
delete src;
return 0;
}
