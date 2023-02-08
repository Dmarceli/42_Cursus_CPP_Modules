#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class RobotomyRequestForm: public Form 
{
	public:

		RobotomyRequestForm();
		RobotomyRequestForm(const std::string&);
		RobotomyRequestForm( RobotomyRequestForm const & src );
		~RobotomyRequestForm();
		RobotomyRequestForm &		operator=( RobotomyRequestForm const & rhs );
		void execute(Bureaucrat const &exec) const throw (std::exception);
		void execution(str const target)const;
	private:
		str const _target;

};

#endif /* ********************************************* ROBOTOMYREQUESTFORM_H */