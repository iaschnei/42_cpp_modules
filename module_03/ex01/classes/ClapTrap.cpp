#include <iostream>
#include <string>
#include "../includes/Colors.hpp"
#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap(void): _hit_points(10), _energy_points(10), _attack_damage(0) {
  std::cout << GREEN << "An anonymous ClapTrap has been created." << RESET << std::endl;
  return ;
} 


ClapTrap::ClapTrap(std::string name): _name(name), _hit_points(10), _energy_points(10), _attack_damage(0) {
  std::cout << GREEN << "ClapTrap " << this->_name << " has been created." << RESET << std::endl;
  return ;
}

ClapTrap::ClapTrap(const ClapTrap &copy) {
  this->_name = copy._name;
  this->_hit_points = copy._hit_points;
  this->_energy_points = copy._energy_points;
  this->_attack_damage = copy._attack_damage;
  std::cout << GREEN << "ClapTrap " << this->_name << " has been created from a copy." << RESET << std::endl;
}

ClapTrap::~ClapTrap(void) {
  if (this->_name.empty())
      std::cout << RED << "An anonymous ClapTrap has been destroyed." << RESET << std::endl;
  else {
    std::cout << RED << "ClapTrap " << this->_name << " has been destroyed." << RESET << std::endl;
  }
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy) {
  this->_name = copy._name;
  this->_hit_points = copy._hit_points;
  this->_energy_points = copy._energy_points;
  this->_attack_damage = copy._attack_damage;
  std::cout << GREEN << "ClapTrap assignment operator has been called" << RESET << std::endl;
  return (*this);
}

void ClapTrap::attack(const std::string &target) {
  if (this->_name.empty()) {
    if (this->_hit_points <= 0)
      std::cout << CYAN << "This anonymous ClapTrap is dead." << RESET << std::endl;
    else if (this->_energy_points <= 0)
      std::cout << CYAN << "This anonymous ClapTrap is out of energy..." << RESET << std::endl;
    else 
      std::cout << CYAN << "An anonymous ClapTrap attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << RESET << std::endl;
  }
  else {
    if (this->_hit_points <= 0)
      std::cout << CYAN << "ClapTrap " << this->_name << " is dead." << RESET << std::endl;
    else if (this->_energy_points <= 0)
      std::cout << CYAN << "ClapTrap " << this->_name << " is out of energy..." << RESET << std::endl;
    else 
      std::cout << CYAN << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << RESET << std::endl;
  }
  this->_energy_points -= 1;
}

void ClapTrap::takeDamage(unsigned int amount) {
  if (this->_name.empty()) {
    if (this->_hit_points <= 0)
      std::cout << CYAN << "This anonymous ClapTrap is already dead." << RESET << std::endl;
    else {
      std::cout << CYAN << "An anonymous ClapTrap loses [" << amount << "] hit points!";
      this->_hit_points -= amount;
      if (this->_hit_points <= 0)
        std::cout << " It is now dead :c" << RESET <<std::endl;
      else 
        std::cout << " It has " << this->_hit_points << " left." << std::endl; 
    }
  }
  else {
    if (this->_hit_points <= 0)
      std::cout << CYAN << "ClapTrap " << this->_name << " is already dead." << RESET << std::endl;
    else {
      std::cout << CYAN << "ClapTrap " << this->_name << " loses [" << amount << "] hit points!";
      this->_hit_points -= amount;
      if (this->_hit_points <= 0)
        std::cout << " It is now dead :c" << RESET <<std::endl;
      else 
        std::cout << " It has " << this->_hit_points << " left." << std::endl;
    }
  }
}

void ClapTrap::beRepaired(unsigned int amount) {
  if (this->_name.empty()) {
    if (this->_hit_points <= 0)
        std::cout << CYAN << "This anonymous ClapTrap is already dead and can't be repaired." << RESET << std::endl;
    else if (this->_energy_points <= 0)
      std::cout << CYAN << "This anonymous ClapTrap is out of energy..." << RESET << std::endl;
    else {
      std::cout << CYAN << "An anonymous ClapTrap is repaired for [" << amount << "] hit points!";
      this->_hit_points += amount;
      std::cout << " It has now " << this->_hit_points << "!" << std::endl;
    }
  }    
  else {
    if (this->_hit_points <= 0)
        std::cout << CYAN << "ClapTrap " << this->_name << " is already dead and can't be repaired." << RESET << std::endl;
    else if (this->_energy_points <= 0)
      std::cout << CYAN << "ClapTrap " << this->_name << " is out of energy..." << RESET << std::endl;
    else {
      std::cout << CYAN << "ClapTrap " << this->_name <<" is repaired for [" << amount << "] hit points!";
      this->_hit_points += amount;
      std::cout << " It has now " << this->_hit_points << "!" << std::endl;
    }
  }
  this->_energy_points -= 1;
}
