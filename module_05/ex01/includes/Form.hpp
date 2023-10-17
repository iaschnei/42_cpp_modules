#ifndef FORM_HPP
# define FORM_HPP

# include <string>

class Bureaucrat;

class Form {

public:
	Form(std::string name, int sign_grade, int exec_grade);
	~Form(void);


	class GradeTooHighException : public std::exception {
		public:
			virtual const char *what(void) const throw();
	};

	class GradeTooLowException : public std::exception {
		public:
			virtual const char *what(void) const throw();
	};

	std::string get_name(void) const;
	bool		is_signed(void) const;
	int			get_sign_grade(void) const;
	int 		get_exec_grade(void) const;
	void		beSigned(Bureaucrat &signer);

private:
	Form(void);
	Form(const Form &copy);
	Form &operator=(const Form &copy);

	const std::string 	_name;
	bool				_is_signed;
	const int			_sign_grade;
	const int			_exec_grade;
};

std::ostream &operator<<(std::ostream &out, Form const &value);


#endif