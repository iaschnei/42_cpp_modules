#ifndef SHRUBBERYCREATIONFORM_HPP
# define  SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"
# include <string>

class ShrubberyCreationForm : public AForm {

public:
	ShrubberyCreationForm(std::string target);
	~ShrubberyCreationForm(void);

	class FileException : public std::exception {
		public:
			virtual const char *what(void) const throw();
	};

	virtual void executer(void) const;
	
private:
	std::string		_target;
	ShrubberyCreationForm(void);
	ShrubberyCreationForm(const ShrubberyCreationForm &copy);
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &copy);
};


#endif