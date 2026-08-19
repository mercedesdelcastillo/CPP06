/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medel-ca <medel-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 12:07:40 by medel-ca          #+#    #+#             */
/*   Updated: 2026/08/14 12:45:33 by medel-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>

int main()
{
    srand((unsigned)time(0));
    
    
    {
        A pruebaA;
        B pruebaB;
        C pruebaC;
        
        std::cout <<"Tipo de pruebaA" <<std::endl;
        identify(pruebaA);
        identify(&pruebaA);
        
        std::cout <<"Tipo de pruebaB" <<std::endl;
        identify(pruebaB);
        identify(&pruebaB);
        
        std::cout <<"Tipo de pruebaC" <<std::endl;
        identify(pruebaC);
        identify(&pruebaC);
    }
    {
        std::cout <<"-----Pruebas de generación random-----" << std::endl;
        
        Base *ret = generate();
        Base *ret1 = generate();
        Base *ret2 = generate();
        Base *ret3 = generate();
        
        identify(ret);
        identify(*ret);
        identify(ret1);
        identify(*ret1);
        identify(ret2);
        identify(*ret2);
        identify(ret3);
        identify(*ret3);
        
        delete ret;
        delete ret1;
        delete ret2;
        delete ret3;
    }
    
    return 0;
}