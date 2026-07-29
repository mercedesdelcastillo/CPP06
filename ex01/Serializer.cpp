/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medel-ca <medel-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 11:43:08 by medel-ca          #+#    #+#             */
/*   Updated: 2026/07/29 12:45:35 by medel-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

//Constructors
Serializer::Serializer(void)
{
    std::cout << "Default constructor called" << std::endl;
}

Serializer::Serializer(const Serializer &other)
{
    std::cout << "Copy constructor called" << std::endl;
    (void) other;
}
// Destructors
Serializer::~Serializer(void)
{
    std::cout << "Destructor called" << std::endl;
}

// Overload Operators
Serializer &Serializer::operator=(const Serializer &other)
{
    std::cout << "Assignment operator called" << std::endl;
    (void) other;
    return (*this);
}

// Public Methods
uintptr_t Serializer::serialize(Data* ptr)
{
    uintptr_t ret = reinterpret_cast<uintptr_t>(ptr);
    return ret;
}
Data* Serializer::deserialize(uintptr_t raw)
{
    Data *ret = reinterpret_cast<Data*>(raw);
    return ret;
}