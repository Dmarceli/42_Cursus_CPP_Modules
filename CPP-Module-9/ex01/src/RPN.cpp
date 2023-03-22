#include "RPN.hpp"

RPN::RPN(str inital) : _initial_str(inital)
{
	this->execute_operations();
	int num = OP_Stack.top();
	OP_Stack.pop();
	if(OP_Stack.empty())
		std::cout << num << std::endl;
	else
		Error();
}

void RPN::print_stack() const
{
    std::stack<int> s_copy = OP_Stack;
    while (!s_copy.empty())
    {
        std::cout << s_copy.top() << " ";
        s_copy.pop();
    }
    std::cout << std::endl;
}

void RPN::operate(char c)
{
	int operand1, operand2;
	operand2 = OP_Stack.top();
	OP_Stack.pop();
	if (OP_Stack.empty())
		Error();
	operand1 = OP_Stack.top();
	OP_Stack.pop();
	switch (c) 
	{
		case '+':
			OP_Stack.push(operand1 + operand2);
			break;
		case '-':
			OP_Stack.push(operand1 - operand2);
			break;
		case '*':
			OP_Stack.push(operand1 * operand2);
			break;
		case '/':
			OP_Stack.push(operand1 / operand2);
			break;
	}
}

bool isoperator(char c)
{
	if (c == '+' || c == '-' || c == '*' || c == '/')
		return true;
	return false;
}

void RPN::execute_operations()
{
	for (size_t i = 0; i < _initial_str.length(); i++) 
	{
		if(std::isdigit(_initial_str[i]))
		{
			str num_str;
			while (std::isdigit(_initial_str[i]))
			{
				num_str += _initial_str[i];
				i++;
			}
			OP_Stack.push(std::atoi(num_str.c_str()));
		}
		if(isoperator(_initial_str[i]))
			operate(_initial_str[i]);
	}
}


RPN::RPN(){}

RPN::RPN(const RPN & src){*this = src;}

RPN::~RPN(){}

void RPN::Error(){std::cout << "Error!\n";exit(0);}

RPN &RPN::operator=( RPN const & rhs )
{
	this->OP_Stack = rhs.OP_Stack;
	this->_initial_str = rhs._initial_str;
	return *this;
}

