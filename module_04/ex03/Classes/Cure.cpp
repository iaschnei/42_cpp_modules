#include <iostream>
#include "../Includes/Cure.hpp"
#include "../Includes/Colors.hpp"

Cure::Cure(void) : AMateria::AMateria("cure") {
    std::cout << GREEN << "Cure materia created." << RESET << std::endl;
}

Cure::Cure(const Cure &copy) : AMateria::AMateria(copy.getType()) {
    std::cout << GREEN << "Cure materia created by copy." << RESET << std::endl;
}

Cure::~Cure(void) {
    std::cout << RED << "Cure materia destroyed." << RESET << std::endl;
}

Cure &Cure::operator=(const Cure &copy) {
    (void) copy;
    std::cout << BLUE << "Called Cure's assignment operator, does nothing." << RESET << std::endl;
    return (*this);
}

AMateria *Cure::clone(void) const {
    AMateria *cloned = new Cure();
    return (cloned);
}

void Cure::use(ICharacter &target) {
    std::cout << CYAN << "* heals " << target.getName() << "'s wounds *" << RESET << std::endl;
}
