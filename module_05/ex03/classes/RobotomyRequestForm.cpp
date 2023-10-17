#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/Colors.hpp"
#include <iostream>
#include <cstdlib>
#include <time.h>

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm(target + "_RQForm", 72, 45), _target(target) {}

RobotomyRequestForm::~RobotomyRequestForm(void) {}

void RobotomyRequestForm::executer(void) const {
	std::cout << CYAN << "BRRRRRRRRRRRRRRRRRRRRRRRR" << RESET << std::endl;
	srand(time(NULL));
	int exec = rand()%2;
	if (exec == 0)
		std::cout << CYAN << "Robotomy on " << this->_target << " is complete !" << RESET << std::endl;
	else
		std::cout << BLUE << "Robotomy on " << this->_target << " failed !" << RESET << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("Empty", 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : AForm("Empty", 72, 45) { (void) copy; }
 
RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &copy) { (void) copy; return (*this); } 
