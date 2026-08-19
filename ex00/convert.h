/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medel-ca <medel-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 11:16:35 by medel-ca          #+#    #+#             */
/*   Updated: 2026/08/14 12:05:48 by medel-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_H
# define CONVERT_H
# include <iostream>
# include <string>
# include <cstdlib>
# include <cerrno>
# include <climits>
# include <sstream>
# include <limits>
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