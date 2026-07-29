/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medel-ca <medel-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 12:54:17 by medel-ca          #+#    #+#             */
/*   Updated: 2026/07/29 15:50:38 by medel-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>

Base::~Base()
{
    std::cout << "Base destructor called" << std::endl;
}

Base * generate(void)
{
    int chance = rand() % 3;
    Base *ret;
    if(chance == 0)
    {
        ret = new A();
    }
    else if(chance == 1)
    {
        ret = new B();
    }
    else
        ret = new C();
    return ret;
}

void identify(Base *p)
{
    
    if (const A *b = dynamic_cast<const A *>(p))
    {
        std::cout << "This pointer is of type A" << std::endl;
    }
    else if (const B *a = dynamic_cast<const B *>(p))
    {
        std::cout << "This pointer is of type B" << std::endl;
    }
    else if (const C *c = dynamic_cast<const C *>(p))
    {
        std::cout << "This pointer is of type C" << std::endl;
    }
}

void identify(Base &p)
{
    try 
    {
        A& a = dynamic_cast<A&>(p);
        (void)a;
        std::cout << "This reference is of type A" << std::endl;
    }
    catch(const std::exception& e)
    {
        ;
    }
    try 
    {
        B& b = dynamic_cast<B&>(p);
        (void)b;
        std::cout << "This reference is of type B" << std::endl;
    }
    catch(const std::exception& e)
    {
        ;
    }
    try 
    {
        C& c = dynamic_cast<C&>(p);
        (void)c;
        std::cout << "This reference is of type C" << std::endl;
    }
    catch(const std::exception& e)
    {
        ;
    }
}