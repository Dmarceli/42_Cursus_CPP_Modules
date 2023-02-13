#ifndef CONVERSION_HPP
# define CONVERSION_HPP

# include <iostream>
# include <string>

class Conversion
{

	public:

		Conversion();
		Conversion( Conversion const & src );
		~Conversion();

		Conversion &		operator=( Conversion const & rhs );

	private:

};

std::ostream &			operator<<( std::ostream & o, Conversion const & i );

#endif /* ****************************************************** CONVERSION_H */