#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <string>
# include <stack>
# include <cstdlib>

typedef std::string	str;

class RPN
{

	public:
		RPN(str operation);
		void Error();
		RPN( RPN const & src );
		~RPN();
		RPN &		operator=( RPN const & rhs );
	private:
		RPN();
		str _initial_str;
		std::stack<int> OP_Stack;
		void execute_operations(void);
		void operate(char c);
		void print_stack() const;
};


#endif