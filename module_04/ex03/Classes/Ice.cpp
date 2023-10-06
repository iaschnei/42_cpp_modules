#include <iostream>
#include "../Includes/Ice.hpp"
#include "../Includes/Colors.hpp"

Ice::Ice(void) : AMateria::AMateria("ice") {
    std::cout << GREEN << "Ice materia created." << RESET << std::endl;
}

Ice::Ice(const Ice &copy) : AMateria::AMateria(copy.getType()) {
    std::cout << GREEN << "Ice materia created by copy." << RESET << std::endl;
}

Ice::~Ice(void) {
    std::cout << RED << "Ice materia destroyed." << RESET << std::endl;
}

Ice &Ice::operator=(const Ice &copy) {
    (void) copy;
    std::cout << BLUE << "Called Ice's assignment operator, does nothing." << RESET << std::endl;
    return (*this);
}

AMateria *Ice::clone(void) const {
    AMateria *cloned = new Ice();
    return (cloned);
}

void Ice::use(ICharacter &target) {
    std::cout << CYAN << "* shoots an ice bolt at " << target.getName() << " *" << RESET << std::endl;
}
