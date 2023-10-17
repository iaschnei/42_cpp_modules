#include "../includes/Bureaucrat.hpp"
#include "../includes/Colors.hpp"
#include <iostream>

Bureaucrat::Bureaucrat(void) : _name("Empty") {
	return ;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {
	if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	std::cout << GREEN << _name << " bureaucrat has been created with grade " << _grade << RESET << std::endl;
	return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : _name(copy._name) {
	this->_grade = copy._grade;
	std::cout << GREEN << _name << " bureaucrat has been created by copy with grade " << _grade << RESET << std::endl;
	return ;
}

Bureaucrat::~Bureaucrat(void) {
	std::cout << RED << _name << " bureaucrat has been destroyed." << RESET << std::endl;
	return ;
}

Bureaucrat 	&Bureaucrat::operator=(const Bureaucrat &copy) {
	this->_grade = copy._grade;
	std::cout << BLUE << "Bureaucrat's assignment operator has been called." << RESET << std::endl;
	return (*this);
}

Bureaucrat	Bureaucrat::operator++(int) {
	Bureaucrat old = *this;
	
	try {
		if (this->_grade - 1 < 1)
			throw Bureaucrat::GradeTooHighException();
		else
			this->_grade -= 1;
	}
	catch (Bureaucrat::GradeTooHighException &e) {
		std::cout << RED << e.what() << RESET << std::endl;
	}
	return (old);
}

Bureaucrat	Bureaucrat::operator--(int) {
	Bureaucrat old = *this;
	
	try {
		if (this->_grade + 1 < 1)
			throw Bureaucrat::GradeTooLowException();
		else
			this->_grade += 1;
	}
	catch (Bureaucrat::GradeTooLowException &e) {
		std::cout << RED << e.what() << RESET << std::endl;
	}
	return (old);
}

int 		Bureaucrat::getGrade(void) const {
	return (this->_grade);
}

std::string	Bureaucrat::getName(void) const {
	return (this->_name);
}

void Bureaucrat::signForm(AForm &form) {
	try {
		form.beSigned(*this);
	}
	catch (AForm::GradeTooLowException &e) {
		std::cout << BLUE << this->getName() << " couldn't sign " << form.get_name() << " because " << e.what() << RESET << std::endl;
	}
}

void	Bureaucrat::executeForm(AForm const &form) {
	form.execute(*this);
}


std::ostream &operator<<(std::ostream &out, Bureaucrat const &value) {
  out << value.getName() << ", bureaucrat grade " << value.getGrade();
  return (out);
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return ("The grade cannot go below 1");
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return ("The grade cannot go above 150");
}