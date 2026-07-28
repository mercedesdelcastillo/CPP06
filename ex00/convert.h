#ifndef CONVERT_H
# define CONVERT_H
# include <iostream>
# include <string>
# include <cstdlib>
# include <cerrno>
# include <climits>
# include <cfloat>

enum LiteralType
{
    CHAR,
    INT,
    FLOAT,
    DOUBLE,
	PSEUDO,
    INVALID
};

int define_type(std::string value);
void cast_to_char(std::string value);
void cast_to_int(std::string value);
void cast_to_double(std::string value);
void print_int(long n);

#endif