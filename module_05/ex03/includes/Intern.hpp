#ifndef INTERN_HPP
# define INTERN_HPP

# include <string>
# include "AForm.hpp"

class Intern {

public:
	Intern();
	Intern(const Intern &copy);
	~Intern();

	AForm *MakeShrubbery(std::string target);
	AForm *MakeRobotomy(std::string target);
	AForm *MakePresidentialPardon(std::string target);

	Intern &operator=(const Intern &copy);
	AForm *makeForm(std::string form_name, std::string target);
};

#endif