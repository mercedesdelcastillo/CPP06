/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medel-ca <medel-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 12:07:40 by medel-ca          #+#    #+#             */
/*   Updated: 2026/07/29 15:51:44 by medel-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <cstdlib>

int main()
{
    srand((unsigned)time(0));
    
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
    
    return 0;
}