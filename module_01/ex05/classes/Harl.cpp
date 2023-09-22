#include <string>
#include <map>
#include <iostream>
#include "../includes/Colors.hpp"
#include "../includes/Harl.hpp"

Harl::Harl (void) {
  std::cout << GREEN << "Harl created." << RESET << std::endl;
  return ;
}

Harl::~Harl (void) {
  std::cout << RED << "Harl destroyed." << RESET << std::endl;
  return ;
}

void Harl::debug(void) {
  std::cout << CYAN << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!"  << RESET << std::endl;
  return ;
}

void Harl::info(void) {
  std::cout << CYAN << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << RESET << std::endl;
  return ;
}

void Harl::warning(void) {
  std::cout << CYAN << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << RESET << std::endl;
  return ;
}

void Harl::error(void) {
  std::cout << CYAN << "This is unnaceptable! I want to speak to the manager now." << RESET << std::endl;
  return ;
}

typedef void (Harl::*fn)(void);

void Harl::complain(std::string level) {

  int complain_level = 5; 

  fn DebugPtr = &Harl::debug;
  fn InfoPtr = &Harl::info;
  fn WarningPtr = &Harl::warning;
  fn ErrorPtr = &Harl::error;

  const char *level_tab[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

  for (int i = 0; i < 4; i++) {
	if (level == level_tab[i])
		complain_level = i;
  }

  switch (complain_level)
  {
    case 0:
      (this->*DebugPtr)();
      break ;
    case 1:
      (this->*InfoPtr)();
      break ;
    case 2:
      (this->*WarningPtr)();
      break ;
    case 3:
      (this->*ErrorPtr)();
      break ;
    default:
      std::cout << CYAN << "[ Probably complaining about insignificant problems ]" << RESET << std::endl;
  }
}
