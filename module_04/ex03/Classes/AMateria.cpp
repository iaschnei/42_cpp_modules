#include "../Includes/AMateria.hpp"
#include "../Includes/Colors.hpp"
#include <iostream>

AMateria::AMateria(void) : _type("undefined") {
    std::cout << GREEN << "An undefined Materia has been created" << std::endl;
}

AMateria::AMateria(std::string const &type) : _type(type) {
    std::cout << GREEN << "A Materia has been created." << RESET << std::endl;
}

AMateria::AMateria(const AMateria &copy) : _type(copy.getType()){
    std::cout << GREEN << "A Materia has been created by copy" << RESET << std::endl;
}

AMateria::~AMateria(void) {
    std::cout << RED << "A Materias has been destroyed" << RESET << std::endl;
}

AMateria &AMateria::operator=(const AMateria &copy) {
    (void) copy;
    std::cout << RED << "Materia assignment operator does nothing..." << std::endl;
    return (*this);
}

std::string const &AMateria::getType(void) const {
    return (this->_type);
}

void AMateria::use(ICharacter &target) {
    std::cout << CYAN << "There is no point in using an undefined Materia" << RESET << std::endl;
    (void)target;
}

