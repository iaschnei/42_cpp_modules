#include "../Includes/MateriaSource.hpp"
#include "../Includes/Colors.hpp"
#include <iostream>

MateriaSource::MateriaSource(void) {
    std::cout << GREEN << "A MateriaSource has been created." << std::endl;
    this->_nbMateria = 0;
} 

MateriaSource::MateriaSource(MateriaSource const &copy) {
    std::cout << GREEN << "A MateriaSource has been created by copy." << std::endl;
    this->_nbMateria = copy._nbMateria;
    for (int i = 0; i < this->_nbMateria; i++) {
        this->_MateriaTab[i] = copy._MateriaTab[i]->clone();
    }
}

MateriaSource::~MateriaSource(void) {
    std::cout << RED << "A MateriaSource has been destroyed." << std::endl;
    for (int i = 0; i < this->_nbMateria; i++) {
        delete this->_MateriaTab[i];
    }
}

MateriaSource &MateriaSource::operator=(MateriaSource const &copy) {
    for (int i = 0; i < copy._nbMateria; i++) {
        if (this->_nbMateria < copy._nbMateria)
            delete this->_MateriaTab[i];
        this->_MateriaTab[i] = copy._MateriaTab[i]->clone();
    }
    return (*this);
}

void    MateriaSource::learnMateria(AMateria *newMateria) {
    if (this->_nbMateria > 3) {
        std::cout << BLUE << "Max number of Materias for this source reached." << std::endl;
        return ;
    }
    if (!newMateria) {
        std::cout << BLUE << "This materia pointer is NULL."<< std::endl;
        return ;
    }
    this->_MateriaTab[this->_nbMateria] = newMateria;
    this->_nbMateria ++;
}

AMateria *MateriaSource::createMateria(std::string const &type) {
    for (int i = 0; i < this->_nbMateria; i++) {
        if (this->_MateriaTab[i]->getType() == type)
            return (this->_MateriaTab[i]->clone());
    }
    return (0);
}
