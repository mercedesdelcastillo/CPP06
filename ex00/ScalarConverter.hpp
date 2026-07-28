#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP
# include "convert.h"

class ScalarConverter
{
    private:
    //Constructors
        ScalarConverter(void);
        ScalarConverter(const ScalarConverter& other);

    //Destructors
        ~ScalarConverter();

    //Overload Operators
        ScalarConverter &operator=(const ScalarConverter &other);
    
    //Public Methods
    public:
        static void convert(std::string value);

        
};

#endif

