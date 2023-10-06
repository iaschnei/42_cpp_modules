#include "../Includes/Character.hpp"
#include "../Includes/Colors.hpp"
#include <iostream>

Character::Character(void) {
    std::cout << GREEN << "Unknown Character has been created." << std::endl;
    this->_name = "unknown"; 
}

Character::Character(std::string const &name) : _name(name) {
    std::cout << GREEN << "Character " << _name << " has been created." << RESET << std::endl;
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = NULL;
    this->_inventorySlot = 0;
}

Character::Character(const Character &copy) {
    std::cout << GREEN << "Character has been created by copy." << RESET << std::endl;
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = NULL;
    for (int i = 0; i < 4; i++) {
        if (copy._inventory[i])
            this->_inventory[i] = copy._inventory[i]->clone();
    }
}

Character::~Character (void) {
    std::cout << RED << "Character destroyed." << RESET << std::endl;
    for (int i = 0; i < 4; i++) {
        if (this->_inventory[i])
            delete this->_inventory[i];
    }
}

Character &Character::operator=(const Character &copy) {
    for (int i = 0; i < 4; i++) {
        if (this->_inventory[i])
            delete this->_inventory[i];
    }
    for (int i = 0; i < 4; i++) {
        if (copy._inventory[i])
            this->_inventory[i] = copy._inventory[i]->clone();
    }
    return (*this);
}

std::string const &Character::getName(void) const {
    return (this->_name);
}

void Character::equip(AMateria *m) {
    int iter = 0;

    if (this->_inventorySlot > 3) {
        std::cout << BLUE << "Inventory is full !" << RESET << std::endl;
        return ;
    }
    else {
        while (this->_inventory[iter])
            iter++;
        this->_inventory[iter] = m;
    }
    this->_inventorySlot++;
}

void Character::unequip(int idx) {
    if (idx > 3 || this->_inventorySlot == 0)
        return ;
    if (this->_inventory[idx]) {
        this->_inventory[idx] = NULL;
        this->_inventorySlot--;
    }
}

void Character::use(int idx, ICharacter& target) {
    if (this->_inventory[idx])
        this->_inventory[idx]->use(target);
    else {
        std::cout << BLUE << "No materia at given index." << RESET << std::endl;
    }
}
