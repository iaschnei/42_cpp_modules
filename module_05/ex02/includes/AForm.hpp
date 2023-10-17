#ifndef AFORM_HPP
# define AFORM_HPP

# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {

public:
	AForm(std::string name, int sign_grade, int exec_grade);
	virtual ~AForm(void);


	class GradeTooHighException : public std::exception {
		public:
			virtual const char *what(void) const throw();
	};

	class GradeTooLowException : public std::exception {
		public:
			virtual const char *what(void) const throw();
	};

	class NotSignedException : public std::exception {
		public:
			virtual const char *what(void) const throw();
	};

	std::string get_name(void) const;
	bool		is_signed(void) const;
	int			get_sign_grade(void) const;
	int 		get_exec_grade(void) const;
	void		beSigned(Bureaucrat &signer);

	void execute(Bureaucrat const & executor) const;
	virtual void executer(void) const = 0;

private:
	AForm(void);
	AForm(const AForm &copy);
	AForm &operator=(const AForm &copy);

	const std::string 	_name;
	bool				_is_signed;
	const int			_sign_grade;
	const int			_exec_grade;
};

std::ostream &operator<<(std::ostream &out, AForm const &value);


#endif