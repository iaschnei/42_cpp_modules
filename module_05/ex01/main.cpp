#include "includes/Bureaucrat.hpp"
#include "includes/Form.hpp"
#include "includes/Colors.hpp"
#include <string>
#include <iostream>

int main(void) {
	try {
		std::cout << YELLOW << "----------- CREATING FORMS -------------" << RESET << std::endl;
		Form ab1("AB1", 50, 74);
		std::cout << CYAN << ab1 << RESET << std::endl;
		Form ab2("AB2", 3, 2);
		std::cout << CYAN << ab2 << RESET << std::endl;
		std::cout << YELLOW << "---------- CREATING BUREAUCRAT ---------" << RESET << std::endl;
		Bureaucrat Michel("Michel", 42);
		Michel.signForm(ab1);
		Michel.signForm(ab1);
		Michel.signForm(ab2);
		std::cout << YELLOW << "------------- DESTRUCTORS --------------" << RESET << std::endl;
	}
	catch (Form::GradeTooHighException &e) {
		std::cout << RED << e.what() << RESET << std::endl;
	}
	catch (Form::GradeTooLowException & e) {
		std::cout << RED << e.what() << RESET << std::endl;
	}
	try {
		std::cout << YELLOW << "------- CREATING INVALID FORM -----------" << RESET << std::endl;
		Form ab3("AB#", 50, 174);
	}
	catch (Form::GradeTooHighException &e) {
		std::cout << RED << e.what() << RESET << std::endl;
	}
	catch (Form::GradeTooLowException & e) {
		std::cout << RED << e.what() << RESET << std::endl;
	}	
	try {
		std::cout << YELLOW << "------- CREATING INVALID FORM -----------" << RESET << std::endl;
		Form ab3("AB#", 50, 0);
	}
	catch (Form::GradeTooHighException &e) {
		std::cout << RED << e.what() << RESET << std::endl;
	}
	catch (Form::GradeTooLowException & e) {
		std::cout << RED << e.what() << RESET << std::endl;
	}
}
