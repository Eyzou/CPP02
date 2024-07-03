//
// Created by eyza on 03/07/24.
//

#ifndef POINT_H
#define POINT_H

class Point {

    public:
        Point();
        Point(float const x, float const y);
        Point(Point const &src);
        ~Point();

        Point& operator=( Point const &rhs);

        float getX( void ) const;
        float getY( void ) const;
        void setX(float const new_x );
        void setY( float const new_y );

    private:
        Fixed const m_x;
        Fixed const m_y;
};



#endif //POINT_H
