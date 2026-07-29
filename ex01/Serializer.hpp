/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medel-ca <medel-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 11:41:10 by medel-ca          #+#    #+#             */
/*   Updated: 2026/07/29 12:29:55 by medel-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP
# include <iostream>
# include "Data.h"
# include <stdint.h>

class Serializer
{
    private:
    //Constructors
        Serializer(void);
        Serializer(const Serializer& other);

    //Destructors
        ~Serializer();

    //Overload Operators
        Serializer &operator=(const Serializer &other);
    
    //Public Methods
    public:
    static uintptr_t serialize(Data* ptr);
    static Data* deserialize(uintptr_t raw);
};

#endif
