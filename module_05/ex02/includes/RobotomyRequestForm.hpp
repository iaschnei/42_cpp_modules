#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"
# include <string>

class RobotomyRequestForm : public AForm {

public:
	RobotomyRequestForm(std::string target);
	~RobotomyRequestForm(void);

	virtual void executer(void) const;
	
private:
	std::string		_target;
	RobotomyRequestForm(void);
	RobotomyRequestForm(const RobotomyRequestForm &copy);
	RobotomyRequestForm &operator=(const RobotomyRequestForm &copy);
};


#endif