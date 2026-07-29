/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medel-ca <medel-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 12:07:40 by medel-ca          #+#    #+#             */
/*   Updated: 2026/07/29 12:42:45 by medel-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.h"
#include "Serializer.hpp"

int main()
{
    Data info = {4, 'a', "name"};
    std::cout << "Num: "<< info.num << ", Char: " << info.c << ", Name: " << info.name << std::endl;
    std::cout << &info << std::endl;
    
    uintptr_t ret = Serializer::serialize(&info);
    Data *ret2 = Serializer::deserialize(ret);
    std::cout << "Num: "<< ret2->num << ", Char: "<< ret2->c << ", Name: "<< ret2->name << std::endl;
    std::cout << "0x" << std::hex << ret << std::dec << std::endl;
    std::cout << ret2 << std::endl;
    return 0;
}