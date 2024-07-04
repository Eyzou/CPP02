/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 18:34:05 by ehamm             #+#    #+#             */
/*   Updated: 2024/07/04 18:34:07 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "Fixed.h"

int main( void )
{
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;

    //additional testing
    Fixed c(10);
    a = 0;

    std::cout << c * a << std::endl;
    std::cout << c / a << std::endl;
    std::cout << c - a << std::endl;
    std::cout << c + a << std::endl;


    return 0;
}