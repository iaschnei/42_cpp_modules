#include "includes/Bureaucrat.hpp"
#include "includes/AForm.hpp"
#include "includes/PresidentialPardonForm.hpp"
#include "includes/RobotomyRequestForm.hpp"
#include "includes/ShrubberyCreationForm.hpp"
#include "includes/Colors.hpp"
#include <string>
#include <iostream>

int main(void) {
	std::cout << YELLOW << "----------- CREATING FORMS -------------" << RESET << std::endl;
	PresidentialPardonForm form1("C Plus Plus");
	RobotomyRequestForm form2("Python");
	ShrubberyCreationForm form3("Parc");
	std::cout << YELLOW << "---------- CREATING BUREAUCRATS ---------" << RESET << std::endl;
	Bureaucrat Michel("Michel", 1);
	Bureaucrat John("John", 62);
	Bureaucrat Jimmy("Jimmy", 149);
	std::cout << YELLOW << "---------- TRYING PRESIDENTIAL ----------" << RESET << std::endl;
	Jimmy.signForm(form1);
	John.signForm(form1);
	Michel.signForm(form1);
	Jimmy.executeForm(form1);
	Michel.executeForm(form1);
	std::cout << YELLOW << "----------- TRYING ROBOTOMY -------------" << RESET << std::endl;
	Jimmy.signForm(form2);
	John.signForm(form2);
	Michel.signForm(form2);
	Jimmy.executeForm(form2);
	Michel.executeForm(form2);
	std::cout << YELLOW << "----------- TRYING SHRUBBERY ------------" << RESET << std::endl;
	Jimmy.signForm(form3);
	John.signForm(form3);
	Michel.signForm(form3);
	Jimmy.executeForm(form3);
	Michel.executeForm(form3);
	Michel.executeForm(form3);
	Michel.executeForm(form3);
	std::cout << YELLOW << "----------- DESTROYING ALL -------------" << RESET << std::endl;
}
