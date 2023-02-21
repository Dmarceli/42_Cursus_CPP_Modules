#include "Conversion.hpp"

Conversion::Conversion()
{
}

Conversion::Conversion( const Conversion & src )
{
	*this = src;
}

Conversion::Conversion(str input)
{
	this->_Arg = input;
	this->Convert();
}

Conversion::~Conversion()
{
}

Conversion &				Conversion::operator=( Conversion const & src )
{
	this->_Arg = src._Arg;
	this->_argType = src._argType;
	return *this;
}


void Conversion::FindArgType(void) 
{
	if ( this->_Arg == "inf" || this->_Arg == "+inf" )
		this->_argType = INF_;
	else if (this->_Arg == "inff" || this->_Arg == "+inff" )
		this->_argType = INFF_;
	else if (this->_Arg == "-inf" )
		this->_argType = NINF_;
	else if (this->_Arg == "-inff" )
		this->_argType = NINFF_;
	else if (this->_Arg == "nan")
		this->_argType = NAN_;
	else if (this->_Arg == "nanf")
		this->_argType = NANF_;
	else if (this->_Arg.length() == 1 && !std::isdigit( this->_Arg[ 0 ]))
		this->_argType = CHAR_;
	else if (this->_Arg.find('f') != str::npos)
		this->_argType = FLOAT_;
	else if ( this->_Arg.find( '.' ) != str::npos )
		this->_argType = DOUBLE_;
	else
		this->_argType = INT_;
}

double str_to_double(std::string str) 
{
    double value;
    std::istringstream iss(str);
    iss >> value;
    return value;
}


void print_char(str value) 
{
	char arg = value[0];
    if (arg <= CHAR_MIN || arg >= CHAR_MAX || arg == 0) 
		std::cout << "Char: non displayable" << std::endl;
	else 
        std::cout << "Char: " << arg << std::endl;
	std::cout << "int: " << static_cast<int>(arg) << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1)
			  << static_cast<float>(arg) << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1)
			  << static_cast<double>(arg) << std::endl;
}

void print_int(str val)
{
	int value = atoi(val.c_str());
	if (value <= CHAR_MIN || value >= CHAR_MAX)
		std::cout << "char: impossible" << std::endl;
	else if (!std::isprint(value))
		std::cout << "char: non displayable" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(value) << std::endl;
	std::cout << "int: " << value << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1)
			  << static_cast<float>( value ) << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1)
			  << static_cast<double>( value ) << std::endl;
}

void print_float(str arg) 
{
	float value = atof(arg.c_str());
	int precision = arg.length() - arg.find('.') - 2;
	if (value <= CHAR_MIN || value >= CHAR_MAX)
		std::cout << "char: impossible" << std::endl;
	else if (!std::isprint(value))
		std::cout << "char: non displayable" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(value) << std::endl;
	std::cout << "int: " << static_cast<int>(value) << std::endl;
    std::cout << "float: "  << std::fixed << std::setprecision(precision) << value << "f"<< std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(precision) << static_cast<double>( value ) << std::endl;
}

void print_double(str arg) 
{
	double value = str_to_double(arg);
	int precision = arg.length() - arg.find('.') - 1;
	if (value <= CHAR_MIN || value >= CHAR_MAX)
		std::cout << "char: impossible" << std::endl;
	else if (!std::isprint(value))
		std::cout << "char: non displayable" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(value) << std::endl;
	std::cout << "int: " << static_cast<int>(value) << std::endl;
    std::cout << "float: "  << std::fixed << std::setprecision(precision) << value << "f"<< std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(precision) << static_cast<double>(value) << std::endl;
}

void Conversion::handleINFSAndNAN()
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	if (_argType == INF_ || _argType == INFF_)
	{
		std::cout << "float: inff" << std::endl;
		std::cout << "double: inf" << std::endl;
	}
	else if (_argType == NINF_ || _argType == NINFF_)
	{
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
	}
	else if(_argType == NAN_ || _argType == NANF_ )
	{
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
	}
	return;
}

void Conversion::PrintToOtherTypes()
{
	if (this->_argType == CHAR_)
		print_char(this->_Arg);
	else if (this->_argType == INT_)
		print_int(this->_Arg);
	else if (this->_argType == FLOAT_)
		print_float(this->_Arg);
	else if(this->_argType == DOUBLE_)
		print_double(this->_Arg);
	else
		handleINFSAndNAN();
}

void Conversion::Convert()
{
	this->FindArgType();
	this->PrintToOtherTypes();
}