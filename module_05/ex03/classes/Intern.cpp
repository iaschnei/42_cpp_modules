#include "../includes/Intern.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/Colors.hpp"
#include <iostream>


Intern::Intern(void) {
	std::cout << GREEN << "A new Intern has been recruted !" << RESET << std::endl;
}

Intern::Intern(const Intern &copy) { (void) copy; }

Intern::~Intern() {}

Intern &Intern::operator=(const Intern &copy) {
	(void) copy;
	return (*this);
}

template < typename T, typename Arg1 >
T* create ( Arg1 const & arg1 ) {
return ( new T ( arg1 ) );
}

AForm *Intern::MakeShrubbery(std::string target) {
	return  (new ShrubberyCreationForm(target));
}

AForm *Intern::MakeRobotomy(std::string target) {
	return  (new RobotomyRequestForm(target));
}

AForm *Intern::MakePresidentialPardon(std::string target) {
	return  (new PresidentialPardonForm(target));
}

typedef AForm *(Intern::*fn)(std::string target);


AForm *Intern::makeForm(std::string form_name, std::string target) {
	AForm *ret;

	std::string name_list[3] = {"shrubbery creation form", "robotomy request form", "presidential pardon form"};

	fn form_creators[3] = {&Intern::MakeShrubbery, &Intern::MakeRobotomy, &Intern::MakePresidentialPardon};

	int i = 0;
	while (i < 3)
	{
		if (form_name == name_list[i])
			break ;
		i++;
	}
	if (i <= 2) {
		std::cout << CYAN << "Intern creates " << form_name << RESET << std::endl;
		ret = (this->*form_creators[i])(target);
		return (ret);
	}
	
	std::cout << BLUE << "Could not find such a form template !" << RESET << std::endl;
		return (NULL);
}