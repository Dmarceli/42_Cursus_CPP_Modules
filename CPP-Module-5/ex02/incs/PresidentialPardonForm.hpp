#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class PresidentialPardonForm: public Form 
{

	public:

		PresidentialPardonForm();
		PresidentialPardonForm(const str &wtv);
		PresidentialPardonForm( PresidentialPardonForm const & src );
		~PresidentialPardonForm();
		PresidentialPardonForm &		operator=( PresidentialPardonForm const & rhs );
		void execute(Bureaucrat const &exec) const throw (std::exception);
		void execution(str const target)const;
	private:
		str const _target;
};


#endif /* ****************************************** PRESIDENTIALPARDONFORM_H */