#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/Colors.hpp"
#include <iostream>
#include <fstream>
#include <cstring>
#include <filesystem>


ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm(target + "_SCForm", 145, 137), _target(target) {}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

void ShrubberyCreationForm::executer(void) const {
	try {
		std::string buf(this->_target);
		buf.append("_shrubbery");
		std::ofstream shrub(buf.c_str());
		if (!shrub)
			throw ShrubberyCreationForm::FileException();
		shrub << "         A           "<< std::endl
			  << "        d$b          "<< std::endl
			  << "      .d|$$b.        "<< std::endl
			  << "    .d$i$$|$$b.      "<< std::endl
			  << "      d$$i$$b        "<< std::endl
			  << "     d|$$$$@$b       "<< std::endl
			  << "  .d$@$$|$$$$$@b.    "<< std::endl
			  << ".d$$$$i$$$|$$$$$$b.  "<< std::endl
			  << "        ###          "<< std::endl
			  << "        ###          "<< std::endl;
		std::cout << CYAN << "Shrubbery " << this->_target << " has been created !" << RESET << std::endl;
	}
	catch (ShrubberyCreationForm::FileException &e) {
		std::cout << RED << e.what() << RESET << std::endl;
	}
}

const char *ShrubberyCreationForm::FileException::what() const throw() {
	return ("Couldn't create file !");
}

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("Empty", 72, 45) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : AForm("Empty", 72, 45) { (void) copy; }
 
ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy) { (void) copy; return (*this); } 
