#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"
#include "../includes/Colors.hpp"
#include <string>
#include <iostream>

ScavTrap::ScavTrap(void) : ClapTrap::ClapTrap() {
  this->_hit_points = 100;
  this->_energy_points = 50;
  this->_attack_damage = 20;
  std::cout << GREEN << "An anonymous ScavTrap has been created" << RESET << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap::ClapTrap(name) {
  this->_hit_points = 100;
  this->_energy_points = 50;
  this->_attack_damage = 20;
  std::cout << GREEN << "ScavTrap " << this->_name << " has been created." << RESET << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &copy) : ClapTrap::ClapTrap(copy._name) {
  this->_name = copy._name;
  this->_hit_points = copy._hit_points;
  this->_energy_points = copy._energy_points;
  this->_attack_damage = copy._attack_damage;
  std::cout << GREEN << "ScavTrap " << this->_name << " has been created from a copy." << RESET << std::endl;
}

ScavTrap::~ScavTrap() {
  if (this->_name.empty())
      std::cout << RED << "An anonymous ScavTrap has been destroyed." << RESET << std::endl;
  else 
    std::cout << RED << "ScavTrap " << this->_name << " has been destroyed." << RESET << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &copy) {
  this->_name = copy._name;
  this->_hit_points = copy._hit_points;
  this->_energy_points = copy._energy_points;
  this->_attack_damage = copy._attack_damage;
  std::cout << GREEN << "ScavTrap assignment operator has been called" << RESET << std::endl;
  return (*this);
}

void ScavTrap::guardGate(void) {
  if (this->_name.empty())
    std::cout << CYAN << "An anonymous ScavTrap has entered its Gate Keeper mode" << RESET << std::endl;
  else 
    std::cout << CYAN << "ScavTrap " << this->_name <<" has entered its Gate Keeper mode" << RESET << std::endl;
}

void ScavTrap::attack(const std::string &target) {
  if (this->_name.empty()) {
    if (this->_hit_points <= 0)
      std::cout << CYAN << "This anonymous ScavTrap is dead." << RESET << std::endl;
    else if (this->_energy_points <= 0)
      std::cout << CYAN << "This anonymous ScavTrap is out of energy..." << RESET << std::endl;
    else 
      std::cout << CYAN << "An anonymous ScavTrap attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << RESET << std::endl;
  }
  else {
    if (this->_hit_points <= 0)
      std::cout << CYAN << "ScavTrap " << this->_name << " is dead." << RESET << std::endl;
    else if (this->_energy_points <= 0)
      std::cout << CYAN << "ScavTrap " << this->_name << " is out of energy..." << RESET << std::endl;
    else 
      std::cout << CYAN << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << RESET << std::endl;
  }
  this->_energy_points -= 1;
}

void ScavTrap::setEnergyPoint(void) {
    this->_energy_points = 50;
}

