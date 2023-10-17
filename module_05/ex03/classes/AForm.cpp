#include "../includes/AForm.hpp"
#include "../includes/Colors.hpp"
#include <iostream>

AForm::AForm(void) :_name("Empty"), _sign_grade(150), _exec_grade(150) {
	return ;
}

AForm::AForm(std::string name, int sign_grade, int exec_grade) 
: _name(name), _sign_grade(sign_grade), _exec_grade(exec_grade)
{
	if (sign_grade > 150 || exec_grade > 150)
		throw AForm::GradeTooLowException();
	else if (sign_grade < 1 || exec_grade < 1)
		throw AForm::GradeTooHighException();
	_is_signed = false;
	std::cout << GREEN << "An AForm has been created." << RESET << std::endl;
}

AForm::AForm(const AForm &copy) :_name("Empty"), _sign_grade(150), _exec_grade(150) {
	(void) copy;
	return ;
}

AForm::~AForm(void) {
	std::cout << RED << "AForm destroyed." << RESET << std::endl;
	return ;
}

AForm &AForm::operator=(const AForm &copy) {
	(void) copy;
	return (*this);
}
	
std::string AForm::get_name(void) const {
	return (this->_name);
}

bool		AForm::is_signed(void) const {
	return (this->_is_signed);
}

int			AForm::get_sign_grade(void) const {
	return (this->_sign_grade);
}

int 		AForm::get_exec_grade(void) const {
	return (this->_exec_grade);
}

std::ostream &operator<<(std::ostream &out, AForm const &value) {
  out << "Form: " << value.get_name() << " is signed: " << value.is_signed();
  out << std::endl << "It needs " << value.get_sign_grade() << " to be signed and " << value.get_exec_grade() << " to be executed.";
  return (out);
}

const char *AForm::GradeTooHighException::what() const throw() {
	return ("The grade is too high !");
}

const char *AForm::GradeTooLowException::what() const throw() {
	return ("The grade is too low !");
}

const char *AForm::NotSignedException::what() const throw() {
	return ("The form is not signed !");
}

void	AForm::beSigned(Bureaucrat &signer) {
	if (signer.getGrade() > this->_sign_grade)
		throw AForm::GradeTooLowException();
	else if (this->_is_signed)
		std::cout << BLUE << signer.getName() << " couldn't sign " << this->get_name() << " because it's already signed" << RESET << std::endl;
	else {
		std::cout << CYAN << signer.getName() << " signed " << this->get_name() << RESET << std::endl;
		this->_is_signed = true;
	}
}

void		AForm::execute(Bureaucrat const &executor) const {
	try {
		if (!_is_signed)
			throw AForm::NotSignedException();
		if (this->_exec_grade < executor.getGrade())
			throw AForm::GradeTooLowException();
		std::cout << CYAN << executor.getName() << " executed " << this->get_name() << RESET << std::endl;
		executer();
	}
	catch (AForm::GradeTooLowException &e) {
		std::cout << RED << e.what() << RESET << std::endl;
	}
	catch (AForm::NotSignedException &e) {
		std::cout << RED << e.what() << RESET << std::endl;
	}
}
