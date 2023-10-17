#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/Colors.hpp"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm(target + "_PPForm", 25, 5), _target(target) {}

PresidentialPardonForm::~PresidentialPardonForm(void) {}

void PresidentialPardonForm::executer(void) const {
	std::cout << CYAN << this->_target << " has been pardoned by Zaphod Beeblebrox." << RESET << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("Empty", 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : AForm("Empty", 25, 5) { (void) copy; }
 
PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &copy) { (void) copy; return (*this); } 