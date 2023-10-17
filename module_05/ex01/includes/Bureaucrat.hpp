#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include "Form.hpp"

class Bureaucrat {

public:
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &copy);
	~Bureaucrat(void);

	Bureaucrat 	&operator=(const Bureaucrat &copy);
	Bureaucrat	operator++(int);
	Bureaucrat	operator--(int);
	int 		getGrade(void) const;
	std::string	getName(void) const;

	void		signForm(Form &form);


	class GradeTooHighException : public std::exception {
		public:
			virtual const char *what(void) const throw();
	};

	class GradeTooLowException : public std::exception {
		public:
			virtual const char *what(void) const throw();
	};

private:
	Bureaucrat(void);
	const std::string _name;
	int 		_grade;
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &value);

#endif