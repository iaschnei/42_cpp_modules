#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"
# include <string>

class PresidentialPardonForm : public AForm {

public:
	PresidentialPardonForm(std::string target);
	~PresidentialPardonForm(void);

	virtual void executer(void) const;
	
private:
	std::string		_target;
	PresidentialPardonForm(void);
	PresidentialPardonForm(const PresidentialPardonForm &copy);
	PresidentialPardonForm &operator=(const PresidentialPardonForm &copy);
};


#endif