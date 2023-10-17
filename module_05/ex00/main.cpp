#include "includes/Bureaucrat.hpp"
#include "includes/Colors.hpp"
#include <string>
#include <iostream>

int main(void) {
	try {
		std::cout << YELLOW << "----------- CREATING BUREAUCRATS -------------" << RESET << std::endl;
		Bureaucrat Michel("Michel", 50);
		Bureaucrat Emmanuel("Manu", 150);
		Bureaucrat John("John", 1);
		std::cout << YELLOW << "----------- UPGRADING BUREAUCRATS ------------" << RESET << std::endl;
		Michel++;
		Michel++;
		Michel++;
		Michel++;
		std::cout << Michel << std::endl;
		John++;
		std::cout << YELLOW << "----------- DESTRUCTORS ----------------------" << RESET << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException &e) {
		std::cout << RED << e.what() << RESET << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException & e) {
		std::cout << RED << e.what() << RESET << std::endl;
	}
	try {
		std::cout << YELLOW << "----------- CREATING BUREAUCRATS -------------" << RESET << std::endl;
		Bureaucrat Michel("Michel", 50);
		Bureaucrat Emmanuel("Manu", 156);
		std::cout << YELLOW << "----------- UPGRADING BUREAUCRATS ------------" << RESET << std::endl;
		Michel++;
		Michel++;
		Michel++;
		Michel++;
		std::cout << Michel << std::endl;
		std::cout << YELLOW << "----------- DESTRUCTORS ----------------------" << RESET << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException &e) {
		std::cout << RED << e.what() << RESET << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException & e) {
		std::cout << RED << e.what() << RESET << std::endl;
	}
}
