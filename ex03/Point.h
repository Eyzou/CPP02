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
