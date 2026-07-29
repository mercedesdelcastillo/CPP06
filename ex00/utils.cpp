/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medel-ca <medel-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 11:19:53 by medel-ca          #+#    #+#             */
/*   Updated: 2026/07/29 11:23:08 by medel-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.h"

bool isCharLiteral(std::string value)
{
	if(value.size() != 3)
		return false;
	if(value[0] == '\'' && value[2] == '\'')
			return true;
	return false;
}

bool isIntLiteral(std::string value)
{
	size_t i = 0;
	if(value[0] == '-' ||  value[0] == '+')
		i = 1;
	if(!isdigit(value[i]))
		return false;
	while(i < value.size())
	{
		if(!isdigit(value[i]))
			return false;
		i++;		
	}
	return true;
}

bool isFloatLiteral(std::string value)
{
	if(value == "-inff" || value == "+inff" || value == "nanf")
		return true;
	if (value.find('.') == std::string::npos)
    	return false;
	char *end;
	std::strtod(value.c_str(), &end);
	if (*end == 'f' && *(end + 1) == '\0')
	{
		return true;
	}
	return false;
}

bool isDoubleLiteral(std::string value)
{
	if(value == "-inf" || value == "+inf" || value == "nan")
		return true;
	if (value.find('.') == std::string::npos)
    	return false;
	char *end;
	std::strtod(value.c_str(), &end);
	if (*end == '\0')
	{
		return true;
	}
	return false;
}

int define_type(std::string value)
{
	if(isCharLiteral(value))
		return CHAR;
	if(isIntLiteral(value))
		return INT;
	if(isFloatLiteral(value))
		return FLOAT;
	if(isDoubleLiteral(value))
		return DOUBLE;
	else
		return INVALID;
}

void print_char(long n)
{
	if(n < 0 || n > 255)
		std::cout << "char: impossible" << std::endl;
	else if (!std::isprint(static_cast<unsigned char>(n)))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(n) << "'" << std::endl;
}

void print_int(long n)
{
	if (n < INT_MIN || n > INT_MAX)
		std::cout << "int: impossible\n";
	else
		std::cout << "int: " << static_cast<int>(n) << std::endl;

}

void print_float(double n)
{
	if (n == std::numeric_limits<double>::infinity())
		std::cout << "float: +inff\n";
	else if (n == -std::numeric_limits<double>::infinity())
		std::cout << "float: -inff\n";
	else if (n < -FLT_MAX || n > FLT_MAX)
		std::cout << "float: impossible\n";
	else
	{		
		std::cout << "float: " << n;
		if (n == static_cast<long>(n))
		{
			std::ostringstream oss;
			oss << static_cast<float>(n);
			if (oss.str().find('e') == std::string::npos &&
				oss.str().find('E') == std::string::npos)
				std::cout << ".0";
		}
		std::cout << "f\n";
	}
}

void print_double(double n)
{
	if (n == std::numeric_limits<double>::infinity())
		std::cout << "float: +inf\n";
	else if (n == -std::numeric_limits<double>::infinity())
		std::cout << "float: -inf\n";
	else if (n < -DBL_MAX || n > DBL_MAX)
		std::cout << "double: imposible\n";
	else
	{
		std::cout << "double: " << n;
		if (n == static_cast<long>(n))
		{
			std::ostringstream oss;
			oss << static_cast<float>(n);
			if (oss.str().find('e') == std::string::npos &&
				oss.str().find('E') == std::string::npos)
				std::cout << ".0";
		}
		std::cout << "\n";
	}
}

void cast_to_char(std::string value)
{
	char c = value[1];
	std::cout << "char: '" << c << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) <<  ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
}

void cast_to_int(std::string value)
{
	char *end;
	errno = 0;
	long n = std::strtol(value.c_str(), &end, 10);

	if (errno == ERANGE)
	{
		std::cout << "char: impossible\n";
		std::cout << "int: impossible\n";
		errno = 0;
		double d = std::strtod(value.c_str(), NULL);
		print_float(d);
		print_double(d);
		return;
	}
	print_char(n);
	print_int(n);
	print_float(n);
	print_double(n);
}

void cast_to_double(std::string value)
{
	errno = 0;
	char *end;
	double n = std::strtod(value.c_str(), &end);
	if(errno == ERANGE)
	{
		std::cout << "char: impossible\n";
		std::cout << "int: impossible\n";
		std::cout << "float: impossible\n";
		std::cout << "double: impossible\n";
		return ;
	}
	print_char(n);
	print_int(n);
	print_float(n);
	print_double(n);	
}
