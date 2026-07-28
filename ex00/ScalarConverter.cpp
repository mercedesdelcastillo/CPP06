#include "ScalarConverter.hpp"
#include <iomanip>

//Constructors
ScalarConverter::ScalarConverter(void)
{
    std::cout << "Default constructor called" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &other)
{
    std::cout << "Copy constructor called" << std::endl;
    (void) other;
}
// Destructors
ScalarConverter::~ScalarConverter(void)
{
    std::cout << "Destructor called" << std::endl;
}

// Overload Operators
ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other)
{
    std::cout << "Assignment operator called" << std::endl;
    (void) other;
    return (*this);
}

// Public Methods
void ScalarConverter::convert(std::string value)
{
    if (value.empty())
	{
    	std::cout << "The string is empty" << std::endl;
        return ;
	}    
    int type = define_type(value);
    switch (type)
    {
        case CHAR:
            cast_to_char(value);
            break;
        case INT:
            cast_to_int(value);
            break; 
        case FLOAT:
            cast_to_double(value);
            break;
        case DOUBLE:
            cast_to_double(value);
            break;
        default:
        {
            std::cout << "Invalid parameter" << std::endl;
            break;
        }
    }
}
