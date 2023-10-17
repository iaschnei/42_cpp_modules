#include "../includes/Form.hpp"
#include "../includes/Colors.hpp"
#include <iostream>

Form::Form(void) :_name("Empty"), _sign_grade(150), _exec_grade(150) {
	return ;
}

Form::Form(std::string name, int sign_grade, int exec_grade) 
: _name(name), _sign_grade(sign_grade), _exec_grade(exec_grade)
{
	if (sign_grade > 150 || exec_grade > 150)
		throw Form::GradeTooLowException();
	else if (sign_grade < 1 || exec_grade < 1)
		throw Form::GradeTooHighException();
	_is_signed = false;
	std::cout << GREEN << "A form has been created." << RESET << std::endl;
}

Form::Form(const Form &copy) :_name(copy.get_name()), _sign_grade(copy.get_sign_grade()), _exec_grade(copy.get_exec_grade()) {
	this->_is_signed = false;
	return ;
}

Form::~Form(void) {
	std::cout << RED << "Form destroyed." << RESET << std::endl;
	return ;
}

Form &Form::operator=(const Form &copy) {
	(void) copy;
	return (*this);
}
	
std::string Form::get_name(void) const {
	return (this->_name);
}

bool		Form::is_signed(void) const {
	return (this->_is_signed);
}

int			Form::get_sign_grade(void) const {
	return (this->_sign_grade);
}

int 		Form::get_exec_grade(void) const {
	return (this->_exec_grade);
}

std::ostream &operator<<(std::ostream &out, Form const &value) {
  out << "Form: " << value.get_name() << " is signed: " << value.is_signed();
  out << std::endl << "It needs " << value.get_sign_grade() << " to be signed and " << value.get_exec_grade() << " to be executed.";
  return (out);
}

const char *Form::GradeTooHighException::what() const throw() {
	return ("The grade is too high !");
}

const char *Form::GradeTooLowException::what() const throw() {
	return ("The grade is too low !");
}
