/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 13:22:58 by ehamm             #+#    #+#             */
/*   Updated: 2024/07/04 18:32:15 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.h"
#include "Fixed.h"

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	const Fixed res1 = (a.getX() - point.getX()) * (b.getY() - point.getY()) - ((a.getY() - point.getY()) * (b.getX() - point.getX()));
    const Fixed res2 = (b.getX() - point.getX()) * (c.getY() - point.getY()) - ((b.getY() - point.getY()) * (c.getX()- point.getX()));
    const Fixed res3 = (c.getX() - point.getX()) * (a.getY() - point.getY()) - ((c.getY() - point.getY()) * (a.getX() - point.getX()));
	
	if((res1 > 0 && res2 > 0 && res3 > 0) || ( res1 < 0 && res2 < 0 && res3 < 0))
		return (true);
	else
		return(false);
}
 
int main( void )
{
	Point const a(10,10);
	Point const b(3,3);
	Point const c(4,8);
	Point const P1(6,7);
	Point const P2(10,12);
	Point const P3(30,10);
	Point const P4(7,8);
	Point const P5(9,5);
	Point const P6(9,5);

	bool res = bsp(a,b,c,P1);
	bool res1 = bsp(a,b,c,P2);
	bool res2 = bsp(a,b,c,P3);
	bool res3 = bsp(a,b,c,P4);
	bool res4 = bsp(a,b,c,P5);
	bool res5 = bsp(a,b,c,P6);

	std::cout << "a coordinate are:" << a;
	std::cout << "b coordinate are:" << b;
	std::cout << "c coordinate are:" << c;
	std::cout << "Result of P1:"<< P1 << res << std::endl;
	std::cout << "Result of P2:"<< P2 << res1 << std::endl;
	std::cout << "Result of P3:"<< P3 << res2 << std::endl;
	std::cout << "Result of P4:"<< P4 << res3 << std::endl;
	std::cout << "Result of P5:"<< P5 << res4 << std::endl;
	std::cout << "Result of P6:"<< P6 << res5 << std::endl;

}
   