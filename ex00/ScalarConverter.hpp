/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medel-ca <medel-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 11:17:01 by medel-ca          #+#    #+#             */
/*   Updated: 2026/08/14 12:19:14 by medel-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

