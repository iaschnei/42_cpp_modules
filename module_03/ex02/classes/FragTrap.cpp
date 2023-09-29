#include "../includes/Colors.hpp"
#include "../includes/ClapTrap.hpp"
#include "../includes/FragTrap.hpp"
#include <string>
#include <iostream>

FragTrap::FragTrap(void) : ClapTrap::ClapTrap() {
    this->_hit_points = 100;
    this->_energy_points = 100;
    this->_attack_damage = 30;
    std::cout << GREEN << "An anonymous FragTrap has been created." << RESET << std::endl;
    return ;
}

FragTrap::FragTrap(std::string const name) : ClapTrap::ClapTrap(name) {
    this->_hit_points = 100;
    this->_energy_points = 100;
    this->_attack_damage = 30;
    this->_name = name;
    std::cout << GREEN << "FragTrap " << name << " has been created" << RESET << std::endl;
    return ;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap::ClapTrap(copy._name) {
    this->_name = copy._name;
    this->_hit_points = copy._hit_points;
    this->_energy_points = copy._energy_points;
    this->_attack_damage = copy._attack_damage;
    std::cout << GREEN << "FragTrap " << this->_name << " has been created by copy" << RESET << std::endl;
    return ;
}

FragTrap::~FragTrap(void) {
    if (this->_name.empty())
        std::cout << RED << "An anonymous FragTrap has been destroyed." << RESET << std::endl;
    else
        std::cout << RED << "FragTrap " <<this->_name << " has been destroyed." << RESET << std::endl;
    return ;
}

FragTrap &FragTrap::operator=(const FragTrap &copy) {
    this->_name = copy._name;
    this->_hit_points = copy._hit_points;
    this->_energy_points = copy._energy_points;
    this->_attack_damage = copy._attack_damage;
    std::cout << CYAN << "FragTrap's assigment operator has been called" << RESET << std::endl;
    return (*this);
}

void FragTrap::highFivesGuys(void) const {
    std::cout << CYAN << "Can i get a high five guys ? :D " << RESET << std::endl;
    return ;
}

