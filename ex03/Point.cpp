/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 13:23:08 by ehamm             #+#    #+#             */
/*   Updated: 2024/07/04 18:19:03 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"
#include "Point.h"

Point::Point() : m_x (0), m_y (0)
{
}

Point::Point(float const x, float const y) : m_x(x), m_y(y)
{
}

Point::Point(Point const &src)
{
	*this = src;
}

Point::~Point()
{
}

const Fixed Point::getX( void ) const
{
	return m_x;
}

const Fixed Point::getY( void ) const
{
	return m_y;
}

Point &Point::operator=( Point const &rhs)
{
	if (this != &rhs)
	{
		this->m_x = rhs.getX();
		this->m_y = rhs.getY();
	}

	return *this;
}

std::ostream& operator<<(std::ostream& os, Point const &rhs)
{
	os << "m_x:" << rhs.getX() << "/ m_y:" << rhs.getY() << std::endl;
	return(os);
}