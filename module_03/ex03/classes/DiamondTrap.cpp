#include "../includes/Colors.hpp"
#include "../includes/ClapTrap.hpp"
#include "../includes/FragTrap.hpp"
#include "../includes/ScavTrap.hpp"
#include "../includes/DiamondTrap.hpp"
#include <string>
#include <iostream>

DiamondTrap::DiamondTrap(void) {
    ScavTrap::setEnergyPoint();
    FragTrap::setAttackDamage();
    FragTrap::setHitPoints();

    this->_attack_damage = FragTrap::_attack_damage;
    this->_energy_points = ScavTrap::_energy_points;
    this->_hit_points = FragTrap::_hit_points;
    std::cout << GREEN << "An anonymous DiamondTrap has been created" << RESET << std::endl;
    return ;
}

DiamondTrap::DiamondTrap(const std::string name) : ClapTrap(std::string(name).append("_clap_name")){
    ScavTrap::setEnergyPoint();
    FragTrap::setAttackDamage();
    FragTrap::setHitPoints();

    this->_attack_damage = FragTrap::_attack_damage;
    this->_energy_points = ScavTrap::_energy_points;
    this->_hit_points = FragTrap::_hit_points;
    this->_name = name;
    std::cout << GREEN << "DiamondTrap " << this->_name << " has been created" << RESET << std::endl;
    return ;
}

DiamondTrap::DiamondTrap(DiamondTrap const &copy) {
    this->_name = copy._name;
    this->ClapTrap::_name = copy.ClapTrap::_name;
    this->_attack_damage = copy._attack_damage;
    this->_energy_points = copy._energy_points;
    this->_hit_points = copy._hit_points;
    std::cout << GREEN << "DiamondTrap " << this->_name << " has been created by copy" << RESET << std::endl;
    return ;
}

DiamondTrap::~DiamondTrap {
    if (this->_name.empty())
        std::cout << RED << "An anonymous DiamonTrap has been destroyed" << RESET << std::endl;
    else 
        std::cout << RED << "DiamondTrap " << this->_name << " has been destroyed" << RESET << std::endl;
    return ;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &copy) {
    this->_name = copy._name;
    this->ClapTrap::_name = copy.ClapTrap::_name;
    this->_attack_damage = copy._attack_damage;
    this->_energy_points = copy._energy_points;
    this->_hit_points = copy._hit_points;
    std::cout << GREEN << "DiamondTrap " << this->_name << " has been copied" << RESET << std::endl;
    return (*this);
}

void    DiamondTrap::attack(const std::string &target) {
    ScavTrap::attack(target);
    return ;
}

void    DiamondTrap::whoAmI(void) {
    if (this->_name.empty())
        std::cout << CYAN << "This DiamondTrap is anonymous" << RESET << std::endl;
    else 
        std::cout << CYAN << "My name is " << this->_name << " and my ClapTrap name is " << this->ClapTrap::_name << RESET << std::endl;
    return ;
}
