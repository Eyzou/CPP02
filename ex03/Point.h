/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 18:34:33 by ehamm             #+#    #+#             */
/*   Updated: 2024/07/04 18:34:34 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
# define POINT_H

#include "Fixed.h"
#include <iostream>

class Point {

    public:
        Point();
        Point(float const x, float const y);
        Point(Point const &src);
        ~Point();

        Point& operator=( Point const &rhs);

        Fixed const getX( void ) const;
        Fixed const getY( void ) const;
	
    private:
        Fixed  m_x;
        Fixed  m_y;
};

std::ostream& operator<<(std::ostream& os, Point const &point);



#endif //POINT_H
